using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using System.Threading.Tasks;
using Firebase;
using Firebase.Extensions;
using Firebase.Auth;
using UnityEngine.UI;
using Google;
using System.Net.Http;
using UnityEngine.Networking;
using SimpleJSON;
using TMPro;
using UnityEngine.SceneManagement;

[System.Serializable]
public class UserData
{
    
    public string name;
    public string email;
    public string mobileNo;
    public string imageURL;
    public string ID;

    UserData()
    {
        name = "demoname";
        email = "demo@email";
        mobileNo = "0000000000";
        imageURL = "";
        ID = "Buyer";
    }

    public UserData(string UserName,string UserEmail,string UserMobileNo,string UserimageURL,string UserID)
    {
        name = UserName;
        email = UserEmail;
        mobileNo = UserMobileNo;
        imageURL = UserimageURL;
        ID = UserID;
    }

}

public class OldUser
{
    public string email;

    public OldUser(string UserEmail)
    {
        email = UserEmail;
    }
    
}

public class FireBaseAuth : MonoBehaviour
{
    public string GoogleWebAPI = "155170668706-ondids734tvr9g8pmpbeht4ct1mpfg35.apps.googleusercontent.com";
    private GoogleSignInConfiguration configuration;
    Firebase.DependencyStatus dependencyStatus = Firebase.DependencyStatus.UnavailableOther;
    Firebase.Auth.FirebaseAuth auth;
    Firebase.Auth.FirebaseUser user;

    public Text UserNameTxt, UserEmailTxt,UserImageURLTxt;
    public Image UserProfilePic;
    public string imageUrl;
    public GameObject LoginScreen, ProfileScreen;
    
    public UserData data;
    public TextMeshProUGUI TestText, UserPhoneNoTxt,warningText;

    bool GoForLogin = true;
    bool IsOldUser = false;
    int currUseCaseId = 0; // tells wether the user is customer or seller.





    private void Awake()
    {
        configuration = new GoogleSignInConfiguration
        {
            WebClientId = GoogleWebAPI,
            RequestIdToken = true

        };
    }
    private void Start()
    {
        
        InitFireBase();
        // data = new UserData("mohit", "sd@gmail.com", "0123456789", "das");
        //StartCoroutine(RegisterUserToDataBase("https://arappmajor.herokuapp.com/api/users/"));

    }
    void InitFireBase()
    {
        auth = Firebase.Auth.FirebaseAuth.DefaultInstance;

    }
    
    
    public void GoogleSignInClick()
    {
        GoogleSignIn.Configuration = configuration;
        GoogleSignIn.Configuration.UseGameSignIn = false;
        GoogleSignIn.Configuration.RequestIdToken = true;
        GoogleSignIn.Configuration.RequestEmail = true;
        GoogleSignIn.DefaultInstance.SignIn().ContinueWith(OnGoogleAuthFinished);

    }

    void OnGoogleAuthFinished(Task<GoogleSignInUser> task)
    {
        if(task.IsFaulted)
        {
            TestText.text = "Fault 1";
            Debug.Log("Fault");
        }
        else if(task.IsCanceled)
        {
            TestText.text = "Login Canceled";
            Debug.Log("Login Canceled");
        }
        else
        {
            Firebase.Auth.Credential credential = Firebase.Auth.GoogleAuthProvider.GetCredential(task.Result.IdToken, null);

            auth.SignInWithCredentialAsync(credential).ContinueWithOnMainThread(task =>
            {
                if (task.IsCanceled)
                {
                    TestText.text = "Async Login Canceled";
                    Debug.Log("Async Login Canceled");
                    return;
                }
                if (task.IsFaulted)
                {
                    TestText.text = "Fault";
                    Debug.Log("Fault");
                    return;
                }


                user = auth.CurrentUser; //  gets the current user important

                

                //StartCoroutine(FetchOldUser("https://arappmajor.herokuapp.com/api/users/check"));

                
                LoginScreen.SetActive(false);
                ProfileScreen.SetActive(true);
                
                UserNameTxt.text = user.DisplayName;
                UserEmailTxt.text = user.Email;
                UserPhoneNoTxt.text = user.PhoneNumber;
                UserImageURLTxt.text = user.PhotoUrl.ToString();
                StartCoroutine(LoadImageUrl(CheckImageUrl(   user.PhotoUrl.ToString())));
                
            }
            );
        }
    }

    string CheckImageUrl(string url)
    {
        if (!string.IsNullOrEmpty(url))
            return url;

        return imageUrl;
    }

    IEnumerator LoadImageUrl(string imageUrl)
    {
        WWW www = new WWW(imageUrl);
        yield return www;

        UserProfilePic.sprite = Sprite.Create(www.texture, new Rect(0, 0, www.texture.width, www.texture.height), new Vector2(0, 0));
        
    }

    public void OnSignOut()
    {
        GoogleSignIn.DefaultInstance.SignOut();
        LoginScreen.SetActive(true);
        ProfileScreen.SetActive(false);
        GoForLogin = true;
    }

    public IEnumerator RegisterUserToDataBase(string url)
    {
        
        string json = JsonUtility.ToJson(data);
        WWWForm form = new WWWForm();
        Dictionary<string, string> headers = form.headers;


        byte[] jsonToSend = new System.Text.UTF8Encoding().GetBytes(json);
        var req = UnityWebRequest.Post(url, json);
        req.uploadHandler = (UploadHandler)new UploadHandlerRaw(jsonToSend);
        req.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();
        req.SetRequestHeader("Content-Type", "application/json");

        //Send the request then wait here until it returns
        yield return req.SendWebRequest();



        if (req.isNetworkError)
        {
            TestText.text = req.error;
            Debug.Log("Error While Sending: " + req.error);
        }
        else
        {
            JSONNode jsondata = JSON.Parse(System.Text.Encoding.UTF8.GetString(req.downloadHandler.data));
            TestText.text = jsondata;
            SceneManager.LoadScene(data.ID);
        }
        req.Dispose();
    }
    public IEnumerator FetchOldUser(string url)
    {
        TestText.text = "starting";
        OldUser olduser = new OldUser(user.Email);
        
        TestText.text = "working";
        string json = JsonUtility.ToJson(olduser);
        WWWForm form = new WWWForm();
        Dictionary<string, string> headers = form.headers;


        byte[] jsonToSend = new System.Text.UTF8Encoding().GetBytes(json);
        var req = UnityWebRequest.Post(url, json);
        req.uploadHandler = (UploadHandler)new UploadHandlerRaw(jsonToSend);
        req.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();
        req.SetRequestHeader("Content-Type", "application/json");

        //Send the request then wait here until it returns
        yield return req.SendWebRequest();



        if (req.isNetworkError)
        {
            TestText.text = req.error;
            Debug.Log("Error While Sending: " + req.error);
        }
        else
        {
            JSONNode jsondata = JSON.Parse(System.Text.Encoding.UTF8.GetString(req.downloadHandler.data));
            if (jsondata["isExist"] == false)
            {
                StartCoroutine(RegisterUserToDataBase("https://arappmajor.herokuapp.com/api/users"));
            }

        }
        req.Dispose();
    }

    public void Dropdown_IndexChanged(int index)
    {
        currUseCaseId = index;
    }
    public void ProceedToNextScene()
    {
        if(UserPhoneNoTxt.text.Length != 11)
        {
            // issue error that phone number must be of 10 digit
            warningText.text = "Please Enter A Valid Mobile Number." + UserPhoneNoTxt.text.Length;
            return;
        }

        warningText.text = "Loading";
        data.name = user.DisplayName;
        data.email = user.Email;

        if (user.PhotoUrl.ToString().Length == 0)
            data.imageURL = "";
        else
            data.imageURL = user.PhotoUrl.ToString();
        
        data.mobileNo = UserPhoneNoTxt.text.ToString();

        // 0 for customer and 1 for seller;
        if (currUseCaseId == 0)
            data.ID = "Buyer";
        else if (currUseCaseId == 1)
            data.ID = "Seller";

        StartCoroutine(RegisterUserToDataBase("https://arappmajor.herokuapp.com/api/users"));
    }

}

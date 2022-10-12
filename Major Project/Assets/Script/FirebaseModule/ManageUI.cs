using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;
using UnityEngine.Networking;
using SimpleJSON;
using UnityEngine.SceneManagement;


public class ManageUI : MonoBehaviour
{
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

        public UserData(string UserName, string UserEmail, string UserMobileNo, string UserimageURL, string UserID)
        {
            name = UserName;
            email = UserEmail;
            mobileNo = UserMobileNo;
            imageURL = UserimageURL;
            ID = UserID;
        }

    }
    public Text UserNameTxt, UserEmailTxt, UserImageURLTxt;
    public Image UserProfilePic;
    public string imageUrl;
    public GameObject LoginScreen, ProfileScreen;
    public UserData data;
    public TextMeshProUGUI TestText, UserPhoneNoTxt, warningText;

    FireBaseAuth authInstance;

    int currUseCaseId = 0; // tells wether the user is customer or seller.
    void Start()
    {
        authInstance = Object.FindObjectOfType<FireBaseAuth>();
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
    public void ProceedToNextScene()
    {
        if (UserPhoneNoTxt.text.Length != 11)
        {
            // issue error that phone number must be of 10 digit
            warningText.text = "Please Enter A Valid Mobile Number." + UserPhoneNoTxt.text.Length;
            return;
        }

        warningText.text = "Loading";
        data.name = authInstance.user.DisplayName;
        data.email = authInstance.user.Email;

        if (authInstance.user.PhotoUrl.ToString().Length == 0)
            data.imageURL = "";
        else
            data.imageURL = authInstance.user.PhotoUrl.ToString();

        data.mobileNo = UserPhoneNoTxt.text.ToString();

        // 0 for customer and 1 for seller;
        if (currUseCaseId == 0)
            data.ID = "Buyer";
        else if (currUseCaseId == 1)
            data.ID = "Seller";

        StartCoroutine(RegisterUserToDataBase("https://arappmajor.herokuapp.com/api/users"));
    }
    public void Dropdown_IndexChanged(int index)
    {
        currUseCaseId = index;
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

    public void LoadData()
    {
        LoginScreen.SetActive(false);
        ProfileScreen.SetActive(true);
        UserNameTxt.text = authInstance.user.DisplayName;
        UserEmailTxt.text = authInstance.user.Email;
        UserPhoneNoTxt.text = authInstance.user.PhoneNumber;
        UserImageURLTxt.text = authInstance.user.PhotoUrl.ToString();
        StartCoroutine(LoadImageUrl(CheckImageUrl(authInstance.user.PhotoUrl.ToString())));
    }

}

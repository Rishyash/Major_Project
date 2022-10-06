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

public class FireBaseAuth : MonoBehaviour
{
    public string GoogleWebAPI = "155170668706-ondids734tvr9g8pmpbeht4ct1mpfg35.apps.googleusercontent.com";
    private GoogleSignInConfiguration configuration;
    Firebase.DependencyStatus dependencyStatus = Firebase.DependencyStatus.UnavailableOther;
    Firebase.Auth.FirebaseAuth auth;
    Firebase.Auth.FirebaseUser user;

    public Text UserNameTxt, UserEmailTxt;
    public Image UserProfilePic;
    public string imageUrl;
    public GameObject LoginScreen, ProfileScreen;
    bool openFireBase = false;
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
    }
    void InitFireBase()
    {

        auth = Firebase.Auth.FirebaseAuth.DefaultInstance;
        /*if (FirebaseAuth.DefaultInstance.CurrentUser != null && openFireBase == false)
        {
            user = auth.CurrentUser;
            UserNameTxt.text = user.DisplayName;
            UserEmailTxt.text = user.Email;
            StartCoroutine(LoadImageUrl(CheckImageUrl(user.PhotoUrl.ToString())));
            LoginScreen.SetActive(false);
            ProfileScreen.SetActive(true);
        }*/


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
            Debug.Log("Fault");
        }
        else if(task.IsCanceled)
        {
            Debug.Log("Login Canceled");
        }
        else
        {
            Firebase.Auth.Credential credential = Firebase.Auth.GoogleAuthProvider.GetCredential(task.Result.IdToken, null);

            auth.SignInWithCredentialAsync(credential).ContinueWithOnMainThread(task =>
            {
                if (task.IsCanceled)
                {
                    Debug.Log("Async Login Canceled");
                    return;
                }
                if (task.IsFaulted)
                {
                    Debug.Log("Fault");
                    return;
                }
                LoginScreen.SetActive(false);
                ProfileScreen.SetActive(true);
                user = auth.CurrentUser;
                UserNameTxt.text = user.DisplayName;
                UserEmailTxt.text = user.Email;
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
    }

}

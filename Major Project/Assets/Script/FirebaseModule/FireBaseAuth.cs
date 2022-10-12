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





public class FireBaseAuth : MonoBehaviour
{
    public string GoogleWebAPI = "155170668706-ondids734tvr9g8pmpbeht4ct1mpfg35.apps.googleusercontent.com";
    private GoogleSignInConfiguration configuration;
    Firebase.DependencyStatus dependencyStatus = Firebase.DependencyStatus.UnavailableOther;
     Firebase.Auth.FirebaseAuth auth;
    public Firebase.Auth.FirebaseUser user;


    


    





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


                user = auth.CurrentUser; //  gets the current user important

                Scene scene = SceneManager.GetActiveScene();
                if (scene.name == "FirebaseAuth")
                {
                    FindObjectOfType<ManageUI>().LoadData();
                }
            }
            );
        }
    }

    

    public void OnSignOut()
    {
        GoogleSignIn.DefaultInstance.SignOut();
        
    }

    


    
    

}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
public class ManageUIBuyer : MonoBehaviour
{
    // Start is called before the first frame update

    FireBaseAuth authInstance;
    public TextMeshProUGUI UserNameTxt, UserPhoneNoTxt, UserEmailTxt;
    public Image UserProfilePic;
    void Start()
    {
        authInstance = Object.FindObjectOfType<FireBaseAuth>();
        LoadData();

    }
    public void LoadData()
    {
        UserNameTxt.text = authInstance.user.DisplayName;
        UserEmailTxt.text = authInstance.user.Email;
        UserPhoneNoTxt.text = authInstance.user.PhoneNumber;
        StartCoroutine(LoadImageUrl(CheckImageUrl(authInstance.user.PhotoUrl.ToString())));
    }
    string CheckImageUrl(string url)
    {
        if (!string.IsNullOrEmpty(url))
            return url;

        return "";
    }

    IEnumerator LoadImageUrl(string imageUrl)
    {
        WWW www = new WWW(imageUrl);
        yield return www;

        UserProfilePic.sprite = Sprite.Create(www.texture, new Rect(0, 0, www.texture.width, www.texture.height), new Vector2(0, 0));

    }


}

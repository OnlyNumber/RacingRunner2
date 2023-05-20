using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Firebase.Auth;
using Firebase;
using TMPro; 
using UnityEngine.UI;
using Firebase.Database;
using UnityEngine.SceneManagement;

public class RegistrationScript : Authentification
{
    DatabaseReference dbRef;
     
    [SerializeField]
    private TMP_InputField _emailField;
    [SerializeField]
    private TMP_InputField _nicknameField;
    [SerializeField]
    private TMP_InputField _passwordField;
    [SerializeField]
    private TMP_InputField _repeatPasswordField;

    private void Awake()
    {
        dbRef = FirebaseDatabase.DefaultInstance.RootReference;

        base.StartInit();

    }

    public void RegisterButton()
    {
        StartCoroutine(Register(_emailField.text, _passwordField.text, _nicknameField.text));
    }

    private IEnumerator Register(string _email, string _password, string _username)
    {
        if(_username == "")
        {

            ErrorMessage.ShowPanel("Missing name");
        }
        else if(_passwordField.text != _repeatPasswordField.text)
        {
            ErrorMessage.ShowPanel("Passwords does not match");
        }
        else
        {
            var RegisterTask = Auth.CreateUserWithEmailAndPasswordAsync(_email, _password);

            yield return new WaitUntil(predicate: () => RegisterTask.IsCompleted);

            Debug.Log(RegisterTask.Result.Email);

            if (RegisterTask.Exception != null)
            {
                Debug.LogWarning(message: $"Failed to register task with{RegisterTask.Exception}");
                FirebaseException firebaseEx = RegisterTask.Exception.GetBaseException() as FirebaseException;

                AuthError errorCode = (AuthError)firebaseEx.ErrorCode;

                ErrorMessage.ShowPanel("Register failed");
            }
            else
            {
                User = RegisterTask.Result;


                if(User !=null)
                {
                    UserProfile profile = new UserProfile { DisplayName = _username};

                    var profileTask = User.UpdateUserProfileAsync(profile);

                    yield return new WaitUntil(predicate: () => profileTask.IsCompleted);


                    if (profileTask.Exception != null)
                    {
                        Debug.LogWarning(message: $"Failed to register task with{profileTask.Exception}");
                        FirebaseException firebaseEx = RegisterTask.Exception.GetBaseException() as FirebaseException;

                        AuthError errorCode = (AuthError)firebaseEx.ErrorCode;

                        ErrorMessage.ShowPanel("_username set failed");
                        

                    }
                    else
                    {
                        DataHolder.firebaseUser = User;

                        SaveData();

                        Debug.Log("StaticFields.MENU_SCENE");

                        StartLoadScene(StaticFields.MENU_SCENE);
                    }

                }
            }
        }
        
    }

    private void SaveData()
    {
        UserData userData = new UserData(User.UserId, _nicknameField.text, 0, 0,-1, 0);

        string json = JsonUtility.ToJson(userData);
        
        dbRef.Child("users").Child(User.UserId).SetRawJsonValueAsync(json);
    }

    public void GoToLogInMenu()
    {
        StartLoadScene(StaticFields.LOG_IN_MENU_SCENE);
    }

}

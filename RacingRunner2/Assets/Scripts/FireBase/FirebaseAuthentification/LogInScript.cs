using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Firebase.Auth;
using TMPro;
using Firebase;
using UnityEngine.SceneManagement;

public class LogInScript : Authentification
{


    [SerializeField]
    private TMP_InputField _emailField;
    [SerializeField]
    private TMP_InputField _passwordField;
    [SerializeField]
    private string _errorField;

    private void Awake()
    {
        base.StartInit();

    }
    


    public void LogInButton()
    {
        StartCoroutine(Login(_emailField.text, _passwordField.text));
    }

    private IEnumerator Login(string _email, string _password)
    {
        var LoginTask = auth.SignInWithEmailAndPasswordAsync(_email, _password);
        
        yield return new WaitUntil(predicate: () => LoginTask.IsCompleted);

        if (LoginTask.Exception != null)
        {
            
            Debug.LogWarning(message: $"Failed to register task with {LoginTask.Exception}");
            FirebaseException firebaseEx = LoginTask.Exception.GetBaseException() as FirebaseException;
            AuthError errorCode = (AuthError)firebaseEx.ErrorCode;

            string message = "Login Failed!";
            switch (errorCode)
            {
                case AuthError.MissingEmail:
                    message = "Missing Email";
                    break;
                case AuthError.MissingPassword:
                    message = "Missing Password";
                    break;
                case AuthError.WrongPassword:
                    message = "Wrong Password";
                    break;
                case AuthError.InvalidEmail:
                    message = "Invalid Email";
                    break;
                case AuthError.UserNotFound:
                    message = "Account does not exist";
                    break;
            }
            _errorField = message;
        }
        else
        {
            User = LoginTask.Result;

            DataHolder.firebaseUser = User;

            Debug.Log(User.UserId);

            StartLoadScene(StaticFields.MENU_SCENE);

        }
    }

    public static void SignOut()
    {
        auth.SignOut();
    }

    public void GoToRegistration()
    {
        StartLoadScene(StaticFields.REGISTRATION_MENU_SCENE);
    }
}

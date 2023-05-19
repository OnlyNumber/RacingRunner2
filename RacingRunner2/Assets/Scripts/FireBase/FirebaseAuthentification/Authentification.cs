using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Firebase.Auth;
using Firebase.Database;
using Firebase;
using UnityEngine.SceneManagement;

public class Authentification : MonoBehaviour
{
    [SerializeField] protected ErrorMessage ErrorMessage;
    [SerializeField] private LoadScreen _loadScreen;


    private DependencyStatus _dependencyStatus;
    protected static FirebaseAuth Auth;
    protected FirebaseUser User;

    public virtual void StartInit()
    {
        

        //_loadScreen.ClosePanel();

        StartCoroutine(CheckAndFixDependenciesAsync());
    }

    private IEnumerator CheckAndFixDependenciesAsync()
    {
        var dependencyTask = FirebaseApp.CheckAndFixDependenciesAsync();

        yield return new WaitUntil(() => dependencyTask.IsCompleted);

        _dependencyStatus = dependencyTask.Result;

        if (_dependencyStatus == DependencyStatus.Available)
        {
            InitializeFirebase();

            yield return new WaitForEndOfFrame();

            Debug.Log("Try in");
            StartCoroutine(CheckForAutoLogin());

        }
        else
        {
            Debug.LogError("Error:" + _dependencyStatus);
        }
    }


    private void InitializeFirebase()
    {
        Auth = FirebaseAuth.DefaultInstance;

        Auth.StateChanged += AuthStateChanged;

        AuthStateChanged(this, null);


    }

    void AuthStateChanged(object sender, System.EventArgs eventArgs)
    {
        if (Auth.CurrentUser != User)
        {
            bool signedIn = User != Auth.CurrentUser && Auth.CurrentUser != null;
            if (!signedIn && User != null)
            {
                Debug.Log("Signed out " + User.UserId);
            }
            User = Auth.CurrentUser;
            if (signedIn)
            {
                Debug.Log("Signed in " + User.UserId);
            }
        }
    }

    private IEnumerator CheckForAutoLogin()
    {
        if (User != null)
        {
            var reloadUser = User.ReloadAsync();

            yield return new WaitUntil(() => reloadUser.IsCompleted);

            AutoLogin();
        }
        else
        {

            _loadScreen.ClosePanel();
            Debug.Log("No User");
        }
    }

    private void AutoLogin()
    {
        if (User != null)
        {
            DataHolder.firebaseUser = User;

            SceneManager.LoadScene(StaticFields.MENU_SCENE);
        }
    }

    public static void SingOut()
    {
        Auth.SignOut();
    }

    public void StartLoadScene(string nextScene)
    {
        _loadScreen.ShowPanel(nextScene);
    }

}

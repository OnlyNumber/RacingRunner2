using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Firebase.Auth;
using Firebase.Database;
using Firebase;
using UnityEngine.SceneManagement;

public class Authentification : MonoBehaviour
{
    [ SerializeField] protected PanelController ErrorMessage;
    [SerializeField] private PanelController _loadScreen;


    public DependencyStatus dependencyStatus;
    public static FirebaseAuth auth;
    protected FirebaseUser User;

    public virtual void StartInit()
    {
        

        _loadScreen.ClosePanel();

        StartCoroutine(CheckAndFixDependenciesAsync());
    }

    private IEnumerator CheckAndFixDependenciesAsync()
    {
        var dependencyTask = FirebaseApp.CheckAndFixDependenciesAsync();

        yield return new WaitUntil(() => dependencyTask.IsCompleted);

        dependencyStatus = dependencyTask.Result;

        if (dependencyStatus == DependencyStatus.Available)
        {
            InitializeFirebase();

            yield return new WaitForEndOfFrame();

            Debug.Log("Try in");
            StartCoroutine(CheckForAutoLogin());

        }
        else
        {
            Debug.LogError("Error:" + dependencyStatus);
        }
    }


    private void InitializeFirebase()
    {
        auth = FirebaseAuth.DefaultInstance;

        auth.StateChanged += AuthStateChanged;

        AuthStateChanged(this, null);


    }

    void AuthStateChanged(object sender, System.EventArgs eventArgs)
    {
        if (auth.CurrentUser != User)
        {
            bool signedIn = User != auth.CurrentUser && auth.CurrentUser != null;
            if (!signedIn && User != null)
            {
                Debug.Log("Signed out " + User.UserId);
            }
            User = auth.CurrentUser;
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
            Debug.Log("No User");
        }
    }

    private void AutoLogin()
    {
        if (User != null)
        {
            DataHolder.firebaseUser = User;

            if (DataHolder.firebaseUser == null)
            {
                Debug.Log("DataHolder.firebaseUser == null");
            }

            Debug.Log(User.UserId);

            SceneManager.LoadScene(StaticFields.MENU_SCENE);
        }
    }

    public static void SingOut()
    {
        auth.SignOut();
    }

    public void StartLoadScene(string nextScene)
    {
        _loadScreen.ShowPanel(nextScene);
    }

}

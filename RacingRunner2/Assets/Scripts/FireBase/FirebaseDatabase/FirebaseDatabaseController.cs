using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Firebase.Database;
using System;

public class FirebaseDatabaseController : MonoBehaviour
{
    private DatabaseReference dbRef;

    public List<DataSnapshot> ReverseList { private set; get; }

    private UserData _userData;

    public UserData UserDataTransfer => _userData;

    public event Action onDataLoadedPlayer;

    public event Action onDataLoadedScore;

    private void Start()
    {
        dbRef = FirebaseDatabase.DefaultInstance.RootReference;

        if(DataHolder.USER_DATA != null)
        {
            SaveData(DataHolder.USER_DATA.id, DataHolder.USER_DATA.nickName, 0 , DataHolder.USER_DATA.avatarIcon, DataHolder.USER_DATA.bestTime, DataHolder.USER_DATA.car);
        }

        StartCoroutine(LoadData(DataHolder.firebaseUser.UserId.ToString()));

        StartCoroutine(LoadAllUserByScore());

    }

    private IEnumerator LoadAllUserByScore()
    {
        ReverseList = new List<DataSnapshot>();

        var user = dbRef.Child("users").OrderByChild("bestTime").GetValueAsync();

        yield return new WaitUntil(predicate: () => user.IsCompleted);

        if (user.Exception != null)
        {
            Debug.LogError(user.Exception);
        }
        else if (user.Result.Value == null)
        {
            Debug.Log("Null");
        }
        else
        {
            DataSnapshot snapshot = user.Result;

            foreach (DataSnapshot clidSnapshot in snapshot.Children)
            {
                if(float.Parse(clidSnapshot.Child(StaticFields.FIREBASE_BEST_TIME).Value.ToString()) > 0)
                ReverseList.Add(clidSnapshot);
            }

            onDataLoadedScore?.Invoke();
        }
    }

    private IEnumerator LoadData(string userID)
    {

        var user = dbRef.Child("users").Child(userID).GetValueAsync();

        yield return new WaitUntil(predicate: () => user.IsCompleted);

        if (user.Exception != null)
        {
            Debug.Log("you");
            Debug.Log(user.Exception);
        }
        else if (user.Result == null)
        {
            Debug.Log("Null");
        }
        else
        {
            DataSnapshot snapshot = user.Result;

            _userData = new UserData(

                snapshot.Child("id").Value.ToString(),
                snapshot.Child("nickName").Value.ToString(),
                int.Parse(snapshot.Child("goldCoins").Value.ToString()),
                int.Parse(snapshot.Child("avatarIcon").Value.ToString()),
                float.Parse(snapshot.Child("bestTime").Value.ToString()),
                int.Parse(snapshot.Child("car").Value.ToString())
                
                );


            onDataLoadedPlayer?.Invoke();
        }
    }

    public void ChangeCurrentUser(string id, string nickName, int goldCoins, int avatarIcon, float bestTime, int car)
    {
        _userData = new UserData(id, nickName, goldCoins, avatarIcon, bestTime, car);

        

        SaveData(id, nickName, goldCoins, avatarIcon, bestTime, car);

    }

    private void SaveData(string id, string nickName, int goldCoins, int avatarIcon, float bestTime, int car)
    {
        UserData user2229 = new UserData( id,  nickName,  goldCoins,avatarIcon,  bestTime,  car);

        string json = JsonUtility.ToJson(user2229);

        dbRef.Child("users").Child(id).SetRawJsonValueAsync(json);

    }

    public void SaveName( string nickName)
    {
        dbRef.Child("users").Child(UserDataTransfer.id).Child(StaticFields.FIREBASE_NAME).SetValueAsync(nickName);

        _userData.nickName = nickName;


    }

    public void SaveAvatar( int avatar)
    {
        dbRef.Child("users").Child(UserDataTransfer.id).Child(StaticFields.FIREBASE_AVATAR).SetValueAsync(avatar);

        _userData.avatarIcon = avatar;
    }

    public void SaveCar(int car)
    {
        dbRef.Child("users").Child(UserDataTransfer.id).Child(StaticFields.FIREBASE_CAR).SetValueAsync(car);

        _userData.car = car;
    }

    public void SingOut()
    {
        Authentification.SingOut();
    }

    public void OnSearchGame()
    {
        DataHolder.USER_DATA = _userData;
    }

    public void OnQuitGame()
    {
        DataHolder.USER_DATA = null;
    }

}

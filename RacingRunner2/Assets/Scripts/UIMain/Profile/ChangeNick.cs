using UnityEngine;
using TMPro;

public class ChangeNick : MonoBehaviour
{
    //private 

    [SerializeField] private FirebaseDatabaseController _firebase;

    [SerializeField] private TMP_InputField _fieldNickName;

    [SerializeField] private TMP_Text _textMain;

    private void Start()
    {
        _firebase.onDataLoadedPlayer += Init;
    }

    private void Init()
    {
        _fieldNickName.text = _firebase.UserDataTransfer.nickName;
        _textMain.text = _firebase.UserDataTransfer.nickName;

    }


    public void OnStopChange()
    {
        _fieldNickName.text = _fieldNickName.text;
        _textMain.text = _fieldNickName.text;

        _firebase.ChangeCurrentUser(_firebase.UserDataTransfer.id, _fieldNickName.text, _firebase.UserDataTransfer.goldCoins, _firebase.UserDataTransfer.avatarIcon, _firebase.UserDataTransfer.bestTime, _firebase.UserDataTransfer.car);
    }

    

}

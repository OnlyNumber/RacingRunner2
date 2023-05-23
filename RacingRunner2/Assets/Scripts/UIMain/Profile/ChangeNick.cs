using UnityEngine;
using TMPro;

public class ChangeNick : MonoBehaviour
{
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

        _firebase.SaveName(_fieldNickName.text);
    }

    

}

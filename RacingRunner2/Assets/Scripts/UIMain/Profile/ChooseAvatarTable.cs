using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ChooseAvatarTable : MonoBehaviour
{

    

    [SerializeField] private List<Image> _buttonToSelect;
    
    [SerializeField] private FirebaseDatabaseController _firebase;

    [SerializeField] private List<Image> _changeThisAvatars;

    private List<Image> _myAvatars = new List<Image>();

    [SerializeField] private Transform _placeForAvatars;

    [SerializeField] private MenuController _menuController;

    private void Start()
    {
        CreateTable();

        _firebase.onDataLoadedPlayer += Init;
    }

    private void CreateTable()
    {
        Button transferButton;

        int imageId = 0;

        foreach(var avatar in _buttonToSelect)
        {


            _myAvatars.Add(Instantiate(avatar, _placeForAvatars));

            transferButton = _myAvatars[imageId].GetComponentInChildren<Button>();

            transferButton.gameObject.AddComponent<ChooseButton>().Initialize(
                _firebase,
                imageId, 
                transferButton.GetComponent<Image>(),
                _myAvatars[imageId],
                _changeThisAvatars.ToArray());

            transferButton.onClick.AddListener(SetAllBlack);
            transferButton.onClick.AddListener(_menuController.GoToMain);
            transferButton.onClick.AddListener(transferButton.gameObject.GetComponent<ChooseButton>().ChangeIcon);
            imageId++;
        }
    }


    private void Init()
    {
        foreach (var item in _changeThisAvatars)
        {
            

            item.sprite = _buttonToSelect[_firebase.UserDataTransfer.avatarIcon].GetComponentInChildren<Button>().image.sprite;

            Debug.Log(item.gameObject.name);

        }

        _myAvatars[_firebase.UserDataTransfer.avatarIcon].color = StaticFields.SELECTED_COLOR;
    }

    private void SetAllBlack()
    {
        foreach (var avatar in _myAvatars)
        {
            avatar.color = StaticFields.NOT_SELECTED_COLOR;
        }
    }



}

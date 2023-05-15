using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ChooseButton : MonoBehaviour
{
    private int _iconNumber;

    private FirebaseDatabaseController _firebase;

    private Image[] _iconsForChange;

    private Image _myIcon;

    private Image _background;

    public void Initialize(FirebaseDatabaseController firebase, int iconNumber, Image myIcon, Image background ,params Image[] iconsForChange)
    {
        _myIcon = myIcon;
        _background = background;


        this._firebase = firebase;
        this._iconNumber = iconNumber;

        this._iconsForChange = iconsForChange;

    }

    public void ChangeIcon()
    {
        foreach (var icon in _iconsForChange)
        {
            icon.sprite = _myIcon.sprite;
        }

        _background.color = StaticFields.SELECTED_COLOR;

        _firebase.ChangeCurrentUser(_firebase.UserDataTransfer.id, _firebase.UserDataTransfer.nickName, _firebase.UserDataTransfer.goldCoins, _iconNumber, _firebase.UserDataTransfer.bestTime, _firebase.UserDataTransfer.car);
    }

}


using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;

public class ItemLeaderBoard : MonoBehaviour
{
    [SerializeField] private Image _background;

    [SerializeField] private Image _imageAvatar;

    [SerializeField] private TMP_Text _textNickname;

    [SerializeField] private TMP_Text _textTime;

    [SerializeField] private TMP_Text _textPlace;


    public void InitItem(Color colorBackground ,Sprite avatar, string name, float time, int place)
    {
        _background.color = colorBackground;

        _imageAvatar.sprite = avatar;

        _textNickname.text = name;

        if (time % 60 > 10)
        {
            _textTime.text = $" {(int)(time / 60)} : {(int)(time % 60)}";
        }
        else
        {
            _textTime.text = $" {(int)(time / 60)} : 0{(int)(time % 60)}";
        }

        _textPlace.text = place.ToString();


    }


}

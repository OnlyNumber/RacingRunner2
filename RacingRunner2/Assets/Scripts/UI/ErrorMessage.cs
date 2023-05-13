using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using DG.Tweening;
using UnityEngine.UI;

public class ErrorMessage : PanelController
{
    [SerializeField] private float _duration;

    [SerializeField] private TMP_Text _errorField;

    public override void ShowPanel(string errorText)
    {


        transform.DOScale(new Vector3(1,1,1), 1);

        //transform.DOScaleX(1, 1);
        _errorField.text = errorText;

        Debug.Log("ShowError");

    }

    public override void ClosePanel()
    {
        Debug.Log("CloseErrorPanel");

        transform.DOScale(new Vector3(0, 0, 0), _duration);
    }


}

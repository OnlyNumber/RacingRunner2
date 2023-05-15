using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class DefaultPanel : PanelController
{
    [SerializeField] private float _duration;

    public override void ClosePanel()
    {
        transform.DOScale(0, 1);
    }

    public override void ShowPanel(string errorText = null)
    {
        transform.DOScale(1, _duration);
    }
}

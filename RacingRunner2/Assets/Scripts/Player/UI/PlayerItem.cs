using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
using UnityEngine.UI;
using TMPro;

public class PlayerItem : PanelController
{

    [SerializeField] private Image _playerImage;

    [SerializeField] private TMP_Text _playerName;

    [SerializeField] private float _duration;

    [SerializeField] private float _timeBeforeMove;

    [SerializeField] private float _showX;

    [SerializeField] private float _endX;

    private RectTransform _rectTransform;

    private void Start()
    {
        _rectTransform = GetComponent<RectTransform>();
    }

    [ContextMenu("ClosePanel")]
    public override void ClosePanel()
    {

        DOTween.Sequence().AppendInterval(_timeBeforeMove).Append(_rectTransform.DOAnchorPosX(_endX, _duration)).Append(transform.DOScale(0, 0));

    }

    [ContextMenu("ShowPaneasdadwl")]
    public override void ShowPanel(string errorText = null)
    {

        DOTween.Sequence().AppendInterval(_timeBeforeMove).Append(_rectTransform.DOAnchorPosX(_showX, _duration));

    }

    public void SetInfo(Sprite icon, string name)
    {
        _playerImage.sprite = icon;

        _playerName.text = name;
    }

}
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
using UnityEngine.SceneManagement;

public class LoadScreen : PanelController
{
    [SerializeField] private float _endOfBoundsEnd;

    [SerializeField] private float _startOfBounds;

    [SerializeField] private float _duration;

    [SerializeField] private float _timeBeforeMove;

    [SerializeField] private float _waitDuration;

    private Vector3 _startPos;

    private void Start()
    {
        _startPos = transform.position;
    }

    [ContextMenu("EndLoading")]
    public override void ClosePanel()
    {
        //The delay is needed so that it does not jump
        DOTween.Sequence().AppendInterval(_timeBeforeMove).Append(transform.DOMoveX(-_endOfBoundsEnd, _duration));
    }

    [ContextMenu("StartLoading")]
    public override void  ShowPanel(string sceneName)
    {
        StartCoroutine(StartLoad(sceneName));

    }

    public IEnumerator StartLoad(string sceneName)
    {


        //Instantly jump to the top and start downloading 
        transform.DOMoveX(_startOfBounds, 0);
        DOTween.Sequence().AppendInterval(_timeBeforeMove).Append(transform.DOMoveX(_startPos.x, _duration));

        yield return new WaitForSecondsRealtime(_waitDuration);

        if(sceneName != null && sceneName != "")
        SceneManager.LoadScene(sceneName);

    }

}

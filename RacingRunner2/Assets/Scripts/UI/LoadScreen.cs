using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
using UnityEngine.SceneManagement;

public class LoadScreen : MonoBehaviour
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
    public void EndLoading()
    {
        //The delay is needed so that it does not jump
        DOTween.Sequence().AppendInterval(_timeBeforeMove).Append(transform.DOMoveX(-_endOfBoundsEnd, _duration));



    }

    [ContextMenu("StartLoading")]
    public IEnumerator StartLoading(string sceneName)
    {
        

        //Instantly jump to the top and start downloading 
        transform.DOMoveX(_startOfBounds, 0);
        DOTween.Sequence().AppendInterval(_timeBeforeMove).Append(transform.DOMoveX(_startPos.x, _duration));

        yield return new WaitForSecondsRealtime(_waitDuration);

        SceneManager.LoadScene(sceneName);

    }


}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
using UnityEngine.SceneManagement;

public class LoadScreen : MonoBehaviour
{
    [SerializeField] private float _duration;

    [SerializeField] private float _timeBeforeMove;

    [SerializeField] private float _waitDuration;

    private Vector3 _startPos;

    private void Start()
    {
        _startPos = transform.position;
    }

    public  void ClosePanel()
    {
        //Screen.width

        //The delay is needed so that it does not jump
        DOTween.Sequence().AppendInterval(_timeBeforeMove).Append(transform.DOMoveX(Screen.width/2 - Screen.width , _duration));
    }


    [ContextMenu("ShowPanel")]
    public  void  ShowPanel(string sceneName)
    {
        StartCoroutine(StartLoad(sceneName));

    }
    
    public IEnumerator StartLoad(string sceneName)
    {


        //Instantly jump to the top and start downloading 
        transform.DOMoveX(Screen.width / 2 + Screen.width, 0);
        DOTween.Sequence().AppendInterval(_timeBeforeMove).Append(transform.DOMoveX(_startPos.x, _duration));

        yield return new WaitForSecondsRealtime(_waitDuration);

        if(sceneName != null && sceneName != "")
        SceneManager.LoadScene(sceneName);

    }

}

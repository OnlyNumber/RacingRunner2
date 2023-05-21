using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Fusion;
using System;

public class GameStarter : NetworkBehaviour
{


    private void Start()
    {
        
    }

    private IEnumerator ShowPanels()
    {
        _loadScreen.ClosePanel();

        yield return new WaitForSecondsRealtime(2);

        _firstPlayerItem.ShowPanel();

        _secondPlayerItem.ShowPanel();

        yield return new WaitForSecondsRealtime(2);

        _firstPlayerItem.ClosePanel();

        _secondPlayerItem.ClosePanel();

        yield return new WaitForSecondsRealtime(2);

        _panelVS.ClosePanel();

        StartCoroutine(CountdownToStart());

    }

    private IEnumerator CountdownToStart()
    {
        _textCountdown.text = "5";

        yield return new WaitForSecondsRealtime(1);

        _textCountdown.text = "4";

        yield return new WaitForSecondsRealtime(1);

        _textCountdown.text = "3";

        yield return new WaitForSecondsRealtime(1);

        _textCountdown.text = "2";

        yield return new WaitForSecondsRealtime(1);

        _textCountdown.text = "1";

        yield return new WaitForSecondsRealtime(1);

        _textCountdown.text = "GO!";

        GetComponent<ISpeedControl>().MultiplyBoostScale(1);

        _isGame = true;

        yield return new WaitForSecondsRealtime(1);

        _textCountdown.enabled = false;
    }

}

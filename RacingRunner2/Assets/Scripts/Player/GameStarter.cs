using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Fusion;
using System;
using TMPro;

public class GameStarter : NetworkBehaviour
{
    public bool IsGame { get; private set; }

    private LoadScreen _loadScreen;

    private PlayerItem _firstPlayerItem;

    private PlayerItem _secondPlayerItem;

    private PanelController _panelVS;

    private TMP_Text _textCountdown;

    [SerializeField] private List<Sprite> _myAvatars;

    private void Start()
    {
        _textCountdown = PlayerSingleUI.instance.TextCountdown;

        _loadScreen = PlayerSingleUI.instance.LoadScreen;

        _firstPlayerItem = PlayerSingleUI.instance.FirstPlayer;

        _secondPlayerItem = PlayerSingleUI.instance.SecondPlayer;

        _panelVS = PlayerSingleUI.instance.PanelVS;


        SpawnerShared.instance.onPlayersConnected += SetInfo;
    }

    [ContextMenu("SetInfo")]
    public void SetInfo()
    {
        GetComponent<InterfaceController>().Check();

        List<SpawnerShared.PlayerData> info = SpawnerShared.instance.CopyData();

        if (info.Count > 1)
            _firstPlayerItem.SetInfo(_myAvatars[info[0].avatar], info[0].name);

        if (info.Count >= 2)
            _secondPlayerItem.SetInfo(_myAvatars[info[1].avatar], info[1].name);

        StartCoroutine(ShowPanels());

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

        IsGame = true;

        yield return new WaitForSecondsRealtime(1);

        _textCountdown.enabled = false;
    }

}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Fusion;
using System;
using TMPro;

public class GameStarter : MonoBehaviour
{
    public bool IsGame { get; private set; }

    [SerializeField] private LoadScreen _loadScreen;

    [SerializeField] private List<PlayerItem> playerItems;

    [SerializeField] private PanelController _panelVS;

    [SerializeField] private TMP_Text _textCountdown;

    [SerializeField] private List<Sprite> _myAvatars;

    [SerializeField] private int _waitToStart;

    private Transform _myPlayer;

    private void Start()
    {
        SpawnerShared.instance.onPlayersConnected += SetInfo;
    }

    public void StartInit(GameObject player)
    {
        _myPlayer = player.transform;
    }

    [ContextMenu("SetInfo")]
    public void SetInfo()
    {
        List<SpawnerShared.PlayerData> info = SpawnerShared.instance.CopyData();

        for (int i = 0; i < info.Count; i++)
        {
            playerItems[i].SetInfo(_myAvatars[info[i].avatar], info[i].name);
        }
        StartCoroutine(ShowPanels());
    }

    private IEnumerator ShowPanels()
    {
        _loadScreen.ClosePanel();

        yield return new WaitForSecondsRealtime(2);

        foreach (var item in playerItems)
        {
            item.ShowPanel();
        }

        yield return new WaitForSecondsRealtime(2);

        foreach (var item in playerItems)
        {
            item.ClosePanel();
        }

        yield return new WaitForSecondsRealtime(2);

        _panelVS.ClosePanel();

        StartCoroutine(CountdownToStart());

    }

    private IEnumerator CountdownToStart()
    {
        int timer = _waitToStart;

        while (timer > 0)
        {
            _textCountdown.text = timer.ToString();

            yield return new WaitForSecondsRealtime(1);

            timer--;

        };

        _textCountdown.text = "GO!";

        _myPlayer.GetComponent<ISpeedControl>()?.MultiplyBoostScale(1);

        IsGame = true;

        yield return new WaitForSecondsRealtime(1);

        _textCountdown.enabled = false;
    }

}

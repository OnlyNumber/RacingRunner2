using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Firebase;
using Fusion;
using UnityEngine.UI;
using TMPro;

public class FirebaseDriver : NetworkBehaviour
{

    [Networked(OnChanged = nameof(OnSkinChanged))]
    private string _nickName { get; set; }

    [Networked]
    private int _avatar { get; set; }

    [Networked]
    private int _car { get; set; }

    [SerializeField] private PlayerItem _firstPlayerItem;

    [SerializeField] private PlayerItem _secondPlayerItem;

    [SerializeField] private PanelController _panelVS;

    [SerializeField] private List<Sprite> _myAvatars;

    private void Start()
    {
        Rpc_RequestChangeSkin( DataHolder.USER_DATA.nickName, DataHolder.USER_DATA.avatarIcon, DataHolder.USER_DATA.car);

        SpawnerShared.instance.onPlayersConnected += SetInfo;

    }

    [Rpc(RpcSources.InputAuthority, RpcTargets.StateAuthority)]
    private void Rpc_RequestChangeSkin(string name,int avatar, int car, RpcInfo info = default)
    {
        this._nickName = name;
        this._avatar = avatar;
        this._car = car;
    }

    static void OnSkinChanged(Changed<FirebaseDriver> changed)
    {
        changed.Behaviour.OnSkinChange();
    }
    [ContextMenu("SetInfo")]
    public void SetInfo()
    {
        Debug.Log("SetInfo");

        List<SpawnerShared.PlayerData> info = SpawnerShared.instance.CopyData();

        //_firstPlayerItem.SetInfo(_myAvatars[info[0].avatar], info[0].name);

        //_secondPlayerItem.SetInfo(_myAvatars[info[1].avatar], info[1].name);

        StartCoroutine(ShowPanels());

    }


    private void OnSkinChange()
    {
        SpawnerShared.instance.CheckAndAdd(new SpawnerShared.PlayerData(_nickName, _avatar, _car));
    }

    private IEnumerator ShowPanels()
    {
        _firstPlayerItem.ShowPanel();

        _secondPlayerItem.ShowPanel();

        yield return new WaitForSecondsRealtime(2);

        _firstPlayerItem.ClosePanel();

        _secondPlayerItem.ClosePanel();

        yield return new WaitForSecondsRealtime(2);

        _panelVS.ClosePanel();

    }


}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Firebase;
using Fusion;

public class FirebaseDriver : NetworkBehaviour
{

    [Networked(OnChanged = nameof(OnSkinChanged))]
    private string _nickName { get; set; }

    private int _avatar;

    private int _car;


    private void Start()
    {
        Rpc_RequestChangeSkin( DataHolder.USER_DATA.nickName, DataHolder.USER_DATA.avatarIcon, DataHolder.USER_DATA.car);

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

    private void OnSkinChange()
    {
        SpawnerShared.instance.CheckAndAdd(new SpawnerShared.PlayerData(_nickName, _avatar, _car));

        //_carList[0].SetActive(false);
        //_carList[skinNumber].SetActive(true);

    }


}

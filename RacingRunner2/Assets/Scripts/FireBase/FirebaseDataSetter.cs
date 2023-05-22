using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Firebase;
using Fusion;
using UnityEngine.UI;
using TMPro;

public class FirebaseDataSetter : NetworkBehaviour
{

    [Networked(OnChanged = nameof(ChangeParameters))]
    private string _nickName { get; set; }

    [Networked]
    private int _avatar { get; set; }

    [Networked]
    private int _car { get; set; }


    private PlayerItem _firstPlayerItem;

    private PlayerItem _secondPlayerItem;

    [SerializeField] private List<GameObject> _myCars;

    private void Start()
    {
        SpawnerShared.instance.AddTransform(transform);

        _firstPlayerItem = PlayerSingleUI.instance.FirstPlayer;

        _secondPlayerItem = PlayerSingleUI.instance.SecondPlayer;


        GetComponent<ISpeedControl>().MultiplyBoostScale(0);

        GetComponent<ISpeedControl>().MultiplySpeed(0);

        if(HasInputAuthority)
        Rpc_RequestChangeSkin( DataHolder.USER_DATA.nickName, DataHolder.USER_DATA.avatarIcon, DataHolder.USER_DATA.car);
    }

    [Rpc(RpcSources.InputAuthority, RpcTargets.StateAuthority)]
    private void Rpc_RequestChangeSkin(string name,int avatar, int car, RpcInfo info = default)
    {
        this._nickName = name;
        this._avatar = avatar;
        this._car = car;
    }

    static void ChangeParameters(Changed<FirebaseDataSetter> changed)
    {
        changed.Behaviour.ChangeParameters();
    }

    private void ChangeParameters()
    {
        SpawnerShared.instance.CheckAndAdd(new SpawnerShared.PlayerData(_nickName, _avatar, _car));

        _myCars[_car].SetActive(true);
    }
}

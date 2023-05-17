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

    [SerializeField] private Image firstUserImage;

    [SerializeField] private TMP_Text firstUserText;

    [SerializeField] private Image secondUserImage;

    [SerializeField] private TMP_Text secondUserText;

    [SerializeField] private List<Sprite> _myAvatars;



    private void Start()
    {
        Rpc_RequestChangeSkin( DataHolder.USER_DATA.nickName, DataHolder.USER_DATA.avatarIcon, DataHolder.USER_DATA.car);

        SpawnerShared.instance.onPlayersConnected += SetInfo;

    }

    public override void FixedUpdateNetwork()
    {
        
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

    public void SetInfo()
    {
        Debug.Log("SetInfo");

        firstUserImage.sprite = _myAvatars[SpawnerShared.instance._userData[0].avatar];

        firstUserText.text = SpawnerShared.instance._userData[0].name;




        secondUserImage.sprite = _myAvatars[SpawnerShared.instance._userData[1].avatar];

        secondUserText.text = SpawnerShared.instance._userData[1].name;
    }


    private void OnSkinChange()
    {
        SpawnerShared.instance.CheckAndAdd(new SpawnerShared.PlayerData(_nickName, _avatar, _car));

        //_carList[0].SetActive(false);
        //_carList[skinNumber].SetActive(true);

    }


}

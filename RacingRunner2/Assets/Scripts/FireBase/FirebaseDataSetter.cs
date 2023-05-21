using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Firebase;
using Fusion;
using UnityEngine.UI;
using TMPro;

public class FirebaseDataSetter : NetworkBehaviour
{

    public float _time;

    private bool _isGame;

    [Networked(OnChanged = nameof(ChangeParameters))]
    private string _nickName { get; set; }

    [Networked]
    private int _avatar { get; set; }

    [Networked]
    private int _car { get; set; }

    [SerializeField] private LoadScreen _loadScreen;

    [SerializeField] private PlayerItem _firstPlayerItem;

    [SerializeField] private PlayerItem _secondPlayerItem;

    [SerializeField] private PanelController _panelVS;

    [SerializeField] private List<Sprite> _myAvatars;

    [SerializeField] private List<GameObject> _myCars;

    [SerializeField] private TMP_Text _textCountdown;

    private void Start()
    {
        _textCountdown = PlayerSingleUI.instance.TextCountdown;

        _loadScreen = PlayerSingleUI.instance.LoadScreen;

        _firstPlayerItem = PlayerSingleUI.instance.FirstPlayer;

        _secondPlayerItem = PlayerSingleUI.instance.SecondPlayer;

        _panelVS = PlayerSingleUI.instance.PanelVS;

        GetComponent<ISpeedControl>().MultiplyBoostScale(0);

        GetComponent<ISpeedControl>().MultiplySpeed(0);

        if(HasInputAuthority)
        Rpc_RequestChangeSkin( DataHolder.USER_DATA.nickName, DataHolder.USER_DATA.avatarIcon, DataHolder.USER_DATA.car);

        SpawnerShared.instance.onPlayersConnected += SetInfo;

    }

    public override void FixedUpdateNetwork()
    {
        if(_isGame)
        _time += Runner.DeltaTime;
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





    [ContextMenu("SetInfo")]
    public void SetInfo()
    {
        GetComponent<InterfaceController>().Check();

        List<SpawnerShared.PlayerData> info = SpawnerShared.instance.CopyData();

        if(info.Count > 1)
        _firstPlayerItem.SetInfo(_myAvatars[info[0].avatar], info[0].name);
        
        if(info.Count >= 2)
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

        _isGame = true;

        yield return new WaitForSecondsRealtime(1);
        
        _textCountdown.enabled = false;
    }








}

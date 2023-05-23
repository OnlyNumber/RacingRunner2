using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using Fusion;
using UnityEngine.EventSystems;
using System;

public class UIController : MonoBehaviour
{
    [SerializeField] private Image _nitroIndicator;

    [SerializeField] private TMP_Text _place;

    [SerializeField] private Transform _speedometrArrow;

    [SerializeField] private Button _nitroButton;

    private ISpeedControl _speedController;

    private NitroSystem _nitroSystem;

    [SerializeField] private float _minSpeedometr;

    [SerializeField] private float _maxSpeedometr;

    private Transform _anotherPlayer;

    private Transform _myPlayer;
   

    public void StartInit(GameObject player)
    {
        _myPlayer = player.transform;

        PlayerSingleUI.instance.Camera.Follow = _myPlayer;

        SpawnerShared.instance.onPlayersConnected += SetAnotherPlayer;

        _speedController = _myPlayer.GetComponent<ISpeedControl>();

        _nitroSystem = _myPlayer.GetComponent<NitroSystem>();

        WriteMethods(_nitroSystem.ActivateBoost, EventTriggerType.PointerDown);

        WriteMethods(_nitroSystem.DeactivateBoost, EventTriggerType.PointerUp);

        _nitroSystem.OnNitroChange += ChangeNitroAmount;

    }
    private void WriteMethods(Action someMethod, EventTriggerType type)
    {
        EventTrigger.Entry entry = new EventTrigger.Entry();

        entry.eventID = type;

        entry.callback.AddListener((ev) => { someMethod(); });

        _nitroButton.GetComponent<EventTrigger>().triggers.Add(entry);

    }

    private void Update()
    {
        //if (_networkObject.HasInputAuthority)
        //{
            UpdateInterface();

        //}
    }

    public void ChangeNitroAmount()
    {
        IPercantage percent = _nitroSystem;

        _nitroIndicator.fillAmount = percent.GetPercent();
    }

    public void ChangeSpeedometr()
    {
        if(_speedController != null)
        _speedometrArrow.eulerAngles = new Vector3(0, 0, _minSpeedometr + _maxSpeedometr * _speedController.GetPercent());
    }
    
    private void UpdateInterface()
    {
        ChangeSpeedometr();
        MyPlace();

    }

    private void MyPlace()
    {
        if (_anotherPlayer != null)
        {
            if (_myPlayer.position.z > _anotherPlayer.position.z)
            {
                _place.text = "1/2";
            }
            else
            {
                _place.text = "2/2";
            }
        }
        
    }

    private void SetAnotherPlayer()
    {
        _anotherPlayer = SpawnerShared.instance.FindNotSelf(_myPlayer);

        Debug.Log("Find?" + _anotherPlayer.GetComponent<NetworkObject>().Id);
    
    }

    public void SetOffDrivingInterface()
    {
        _nitroIndicator.enabled = false;

        _place.enabled = false;

        _speedometrArrow.GetComponentInParent<Image>().enabled = false;

        _speedometrArrow.gameObject.SetActive(false);

        _nitroButton.gameObject.SetActive(false);


    }

}

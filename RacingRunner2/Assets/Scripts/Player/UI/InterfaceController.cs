using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using Fusion;
using UnityEngine.EventSystems;

public class InterfaceController : MonoBehaviour
{
    private Image _nitroIndicator;

    private TMP_Text _place;

    private Transform _speedometrArrow;

    private Button _nitroButton;

    private ISpeedControl _speedController;

    [SerializeField] private NitroSystem _nitroSystem;

    [SerializeField] private float _minSpeedometr;

    [SerializeField] private float _maxSpeedometr;

    [SerializeField] private NetworkObject _networkObject;

    [SerializeField] EventTrigger _evet;

    private Transform _anotherPlayer;

    

    private void Awake()
    {
        _speedController = GetComponent<ISpeedControl>();

        Debug.Log("Interface");

        
        _nitroButton = PlayerSingleUI.instance.drivingInterface.nitroButton;

        _speedometrArrow = PlayerSingleUI.instance.drivingInterface._speedArrow;

        _nitroIndicator = PlayerSingleUI.instance.drivingInterface.nitroStep;

        _place = PlayerSingleUI.instance.drivingInterface.place;



        EventTrigger.Entry firstEntry = new EventTrigger.Entry();

        firstEntry.eventID = EventTriggerType.PointerDown;

        firstEntry.callback.AddListener((a) => { GetComponent<NitroSystem>().ActivateBoost(); });

        EventTrigger.Entry secondEntry = new EventTrigger.Entry();


        secondEntry.eventID = EventTriggerType.PointerUp;

        secondEntry.callback.AddListener((a) => { GetComponent<NitroSystem>().DeactivateBoost(); });

        _nitroButton.GetComponent<EventTrigger>().triggers.Add(firstEntry);

        _nitroButton.GetComponent<EventTrigger>().triggers.Add(secondEntry);
    }

    public void Check()
    {
        if (_networkObject.HasStateAuthority)
        {
            Debug.Log("_networkObject.HasInputAuthority" + _networkObject.HasInputAuthority);
            _nitroSystem.OnNitroChange += ChangeNitroAmount;
        }
    }


    private void Start()
    {
        if (_networkObject.HasInputAuthority)
        {
            PlayerSingleUI.instance._camera.Follow = transform;


        }

        SpawnerShared.instance.onPlayersConnected += SetAnotherPlayer;



    }

    private void Update()
    {
        if (_networkObject.HasInputAuthority)
        {
            UpdateInterface();
            MyPlace();
        }
    }

    public void ChangeNitroAmount()
    {
        IPercantage percent = _nitroSystem;

        _nitroIndicator.fillAmount = percent.GetPercent();
    }

    public void ChangeSpeedometr()
    {
        _speedometrArrow.eulerAngles = new Vector3(0, 0, _minSpeedometr + _maxSpeedometr * _speedController.GetPercent());
    }
    
    private void UpdateInterface()
    {
        ChangeSpeedometr();
    }

    private void MyPlace()
    {
        if (_anotherPlayer != null)
        {
            if (transform.position.z > _anotherPlayer.position.z)
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
        _anotherPlayer = SpawnerShared.instance.FindNotSelf(transform);
    }

}

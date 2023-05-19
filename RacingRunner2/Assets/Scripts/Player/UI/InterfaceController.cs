using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using Fusion;
using UnityEngine.EventSystems;

public class InterfaceController : MonoBehaviour
{
    [SerializeField]
    private Image _nitroIndicator;

    [SerializeField]
    private TMP_Text _place;

    [SerializeField]
    private Transform _speedometrArrow;

    [SerializeField]
    private Button _nitroButton;

    private ISpeedControl _speedController;

    [SerializeField] private NitroSystem _nitroSystem;

    [SerializeField] private float _minSpeedometr;

    [SerializeField] private float _maxSpeedometr;

    [SerializeField] private NetworkObject _networkObject;

    [SerializeField] EventTrigger _evet;

    private void Awake()
    {
        _speedController = GetComponent<ISpeedControl>();

        _nitroSystem.OnNitroChange += ChangeNitroAmount;

        _nitroButton = Playeringle.instance.drivingInterface.nitroButton;

        _speedometrArrow = Playeringle.instance.drivingInterface._speedArrow;

        _nitroIndicator = Playeringle.instance.drivingInterface.nitroStep;

        _place = Playeringle.instance.drivingInterface.place;

        EventTrigger.Entry firstEntry = new EventTrigger.Entry();

        firstEntry.eventID = EventTriggerType.PointerDown;

        firstEntry.callback.AddListener((a) => { GetComponent<NitroSystem>().ActivateBoost(); });

        EventTrigger.Entry secondEntry = new EventTrigger.Entry();



        secondEntry.eventID = EventTriggerType.PointerUp;

        secondEntry.callback.AddListener((a) => { GetComponent<NitroSystem>().DeactivateBoost(); });



        _nitroButton.GetComponent<EventTrigger>().triggers.Add(firstEntry);

        _nitroButton.GetComponent<EventTrigger>().triggers.Add(secondEntry);
    }

    private void Start()
    {
        if (_networkObject.HasInputAuthority)
        {
            Playeringle.instance._camera.Follow = transform;
        }


    }

    private void Update()
    {
        if (_networkObject.HasInputAuthority)
        {
            UpdateInterface();
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
}

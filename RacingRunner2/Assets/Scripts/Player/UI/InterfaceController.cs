using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using Fusion;

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

    private void Awake()
    {
        _speedController = GetComponent<ISpeedControl>();

        _nitroSystem.OnNitroChange += ChangeNitroAmount;


        

        _speedometrArrow = PlayerInterfaceSingle.instance.drivingInterface._speedArrow;

        _nitroIndicator = PlayerInterfaceSingle.instance.drivingInterface.nitroStep;

        _place = PlayerInterfaceSingle.instance.drivingInterface.place;
    }

    private void Start()
    {
        if (GetComponent<NetworkObject>().HasInputAuthority)
        {
            PlayerInterfaceSingle.instance._camera.Follow = transform;
        }
    }

    private void Update()
    {
        UpdateInterface();
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

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;


public class InterfaceController : MonoBehaviour
{
    [SerializeField]
    private Image _nitroIndicator;

    [SerializeField]
    private TMP_Text _place;

    [SerializeField]
    private GameObject _speedometrArrow;

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
        //float tr;

        //tr =  _maxSpeedometr * _speedController.GetPercent();

        _speedometrArrow.transform.eulerAngles = new Vector3(0, 0, _minSpeedometr + _maxSpeedometr * _speedController.GetPercent());

    }
    
    private void UpdateInterface()
    {

        ChangeSpeedometr();

    }


}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Fusion;
using System;

public class NitroSystem : NetworkBehaviour
{
    public event Action OnNitroChange;

    private float _currentAmountOfNitro
    {
        get
        {
            return _currentAmountOfNitro;
        }
        set
        {
            _currentAmountOfNitro = value;

            OnNitroChange?.Invoke();
        }
    }
    


    private float _speedDecreaceNitro;

    [SerializeField] private float _maxAmountOfNitro;

    public void AddNitro(float addedNitro)
    {
        if (addedNitro > 0 )
        {
            _currentAmountOfNitro = _currentAmountOfNitro + addedNitro > _maxAmountOfNitro ?  _maxAmountOfNitro : _currentAmountOfNitro + addedNitro;
        }
    }

    public void Boosting()
    {
        _currentAmountOfNitro -= _speedDecreaceNitro * Runner.DeltaTime;

        GetComponent<ISpeedControl>().MultiplyBoost(3);

    }



}

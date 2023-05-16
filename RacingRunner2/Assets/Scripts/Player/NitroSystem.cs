using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Fusion;
using System;

public class NitroSystem : NetworkBehaviour, IPercantage
{
    public event Action OnNitroChange;

    private float _currentAmountOfNitro;

    private float CurrentAmountOfNitro
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
    


    [SerializeField] private float _speedDecreaceNitro;

    [SerializeField] private float _maxAmountOfNitro;

    private void Start()
    {
        CurrentAmountOfNitro = 0;
    }

    public void AddNitro(float addedNitro)
    {
        if (addedNitro > 0 )
        {
            CurrentAmountOfNitro = CurrentAmountOfNitro + addedNitro > _maxAmountOfNitro ?  _maxAmountOfNitro : CurrentAmountOfNitro + addedNitro;
        }
    }

    public void Boosting()
    {
        CurrentAmountOfNitro -= _speedDecreaceNitro * Runner.DeltaTime;

        GetComponent<ISpeedControl>().MultiplyBoost(3);

    }

    public float GetPercent()
    {
        return _currentAmountOfNitro / _maxAmountOfNitro;
    }
}

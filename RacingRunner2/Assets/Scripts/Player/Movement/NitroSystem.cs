using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Fusion;
using System;

public class NitroSystem : NetworkBehaviour, IPercantage
{
    public event Action OnNitroChange;

    [SerializeField] private float _currentAmountOfNitro;

    private bool _isActiveBoost;


    [SerializeField] private float _speedDecreaceNitro;

    [SerializeField] private float _maxAmountOfNitro;

    [SerializeField] private float _nitroBoost;

    IBoost _playerBoost;

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

            if(_currentAmountOfNitro < 0)
            {
                DeactivateBoost();
            }



        }
    }
    private void Start()
    {
        CurrentAmountOfNitro = 0;

        _playerBoost = GetComponent<IBoost>();
    }

    public override void FixedUpdateNetwork()
    {
        if(_isActiveBoost)
        {
            Boosting();
        }    
    }

    public void ActivateBoost()
    {
        if (CurrentAmountOfNitro > 0)
        {
            _isActiveBoost = true;


            _playerBoost.MultiplyBoost(_nitroBoost);
        }
    }

    public void DeactivateBoost()
    {
        if (_isActiveBoost)
        {
            _isActiveBoost = false;

            _playerBoost.MultiplyBoost(1 / _nitroBoost);
        }
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

        if (CurrentAmountOfNitro <= 0 )
        {
            DeactivateBoost();
        }

    }

    public float GetPercent()
    {
        return _currentAmountOfNitro / _maxAmountOfNitro;
    }
}

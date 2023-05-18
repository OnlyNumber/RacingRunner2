using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Fusion;
using System;

public class NitroSystem : NetworkBehaviour, IPercantage
{
    public event Action OnNitroChange;

    private float _currentAmountOfNitro;

    private bool _isActiveBoost;

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

    [SerializeField] private float _speedDecreaceNitro;

    [SerializeField] private float _maxAmountOfNitro;

    [SerializeField] private float _nitroBoost;

    IBoost _playerBoost;

    private void Start()
    {
        CurrentAmountOfNitro = 0;

        _playerBoost = GetComponent<IBoost>();

    }

    public override void FixedUpdateNetwork()
    {
        if(_isActiveBoost && CurrentAmountOfNitro > 0)
        {
            Boosting();
        }    
    }

    

    public void ActivateBoost()
    {
        
        _isActiveBoost = true;

        _playerBoost.MultiplyBoost(2);

    }

    public void DeactivateBoost()
    {
        _isActiveBoost = false;

        _playerBoost.MultiplyBoost(0.5f);
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
    }

    public float GetPercent()
    {
        return _currentAmountOfNitro / _maxAmountOfNitro;
    }
}

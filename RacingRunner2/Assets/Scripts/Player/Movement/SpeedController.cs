using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Fusion;
using System;

public class SpeedController : NetworkBehaviour, ISpeedControl
{
    [SerializeField] private float _boost;

    [SerializeField] private float _afterMaxSpeedModifier;

    [SerializeField] private float _speed = 0;

    [SerializeField] private float _maxSpeed;

    [SerializeField] private float _boostScale = 1;

    public void ChangeSpeed()
    {
        if (_speed < _maxSpeed)
        {
            _speed += _boost * _boostScale * Runner.DeltaTime;
        }
        else
        {
            _speed += _boost * _boostScale * _afterMaxSpeedModifier * Runner.DeltaTime;
        }
        

    }
    public void MultiplyBoostScale(float multiply)
    {
        _boostScale = multiply;


    }

    public void MultiplySpeed(float multiply)
    {
        _speed *= multiply;
    }

    
    public float GetSpeed()
    {
        return _speed;
    }

    public float GetPercent()
    {
        return _speed / _maxSpeed;
    }

    public float GetBoostScale()
    {
        return _boostScale;
    }

    public void MultiplyBoost(float multiply)
    {
        _boost *= multiply;
    }

    public float GetBoost()
    {
        return _boost;
    }
}

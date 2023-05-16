using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Fusion;


public class SpeedController : NetworkBehaviour, ISpeedControl
{
    [SerializeField] private float _boost;


    [SerializeField] private float _speed = 0;

    [SerializeField] private float _maxSpeed;

    private float _boostMultiplier = 1;

    public void MultiplyBoost(float multiply)
    {
        _boostMultiplier = multiply;
    }

    public void ChangeSpeed()
    {
        if (_speed < _maxSpeed)
        {
            _speed += _boost * _boostMultiplier * Runner.DeltaTime;
        } 
        

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
}

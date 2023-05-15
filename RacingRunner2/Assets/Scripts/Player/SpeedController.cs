using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Fusion;


public class SpeedController : NetworkBehaviour, ISpeedControl
{
    [SerializeField] private float _boost;

    private float _speed = 0;

    private float _boostMultiplier = 1;

    public void ChangeBoost(float multiply)
    {
        _boostMultiplier = multiply;
    }

    public float ChangeSpeed()
    {
        _speed += _boost * _boostMultiplier * Runner.DeltaTime;

        return _speed;
    }

    public void MultiplySpeed(float multiply)
    {
        _speed *= multiply;
    }

}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Fusion;

public class OpenHatch : NetworkBehaviour, IEffect
{
    [SerializeField, Range(0,1)] private float _powerOfSpeedDecreace;

    [SerializeField] private Transform _interpolationTarget;

    [SerializeField] private float _angle;

    private void Start()
    {
        _interpolationTarget.eulerAngles = new Vector3(_angle, 0, 0);
    }

    public Coroutine Effect(GameObject objectForEffect)
    {
        objectForEffect.GetComponent<ISpeedControl>().MultiplySpeed(_powerOfSpeedDecreace);

        return null;
    }




}

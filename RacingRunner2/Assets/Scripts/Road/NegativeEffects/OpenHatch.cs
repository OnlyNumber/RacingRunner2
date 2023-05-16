using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Fusion;

public class OpenHatch : NetworkBehaviour, IEffect
{
    [SerializeField, Range(0,1)] private float _powerOfSpeedDecreace;


    public Coroutine Effect(GameObject objectForEffect)
    {
        objectForEffect.GetComponent<ISpeedControl>().MultiplySpeed(_powerOfSpeedDecreace);

        return null;
    }




}

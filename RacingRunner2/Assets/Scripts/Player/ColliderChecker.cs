using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Fusion;

public class ColliderChecker : NetworkBehaviour
{
    private IChangePosition _changePosition;

    private ISpeedControl _speedController;

    private IMoveAble _movementController;

    private Coroutine positiveEffect;

    private Coroutine negativeEffect;

    private void Start()
    {
        _changePosition = GetComponent<IChangePosition>();

        _speedController = GetComponent<ISpeedControl>();

        _movementController = GetComponent<IMoveAble>();


    }


    private void OnTriggerEnter(Collider other)
    {
        
        other.GetComponent<IEffect>().Effect(_speedController, _changePosition);

    }

}

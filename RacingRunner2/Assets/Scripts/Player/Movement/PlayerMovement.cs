using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Fusion;

public class PlayerMovement : NetworkBehaviour
{
    [SerializeField] private float _sideSpeed;

    private IMoveAble _moveController;
    private ISpeedControl _speedControllerForward; 

    private void Awake()
    {
        _moveController = GetComponent<IMoveAble>();
        _speedControllerForward = GetComponent<ISpeedControl>();
    }

    public override void FixedUpdateNetwork()
    {
        _speedControllerForward.ChangeSpeed();

        _moveController?.MoveForward(_speedControllerForward.GetSpeed(), _sideSpeed);

    }

}

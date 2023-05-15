using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Fusion;

public class PlayerMovement : NetworkBehaviour
{
    private IMoveAble _moveController;
    private ISpeedControl _speedController; 

    private void Awake()
    {
        _moveController = GetComponent<IMoveAble>();
        _speedController = GetComponent<ISpeedControl>();
    }

    public override void FixedUpdateNetwork()
    {
        _moveController?.MoveForward(_speedController.ChangeSpeed());



    }

}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Fusion;

public class MovingForward : NetworkBehaviour, IMoveAble
{
    [SerializeField] private Rigidbody _rigidbody;

    public void MoveForward(float speed)
    {
        _rigidbody.MovePosition(transform.position + Vector3.forward * speed * Runner.DeltaTime);
    }
}

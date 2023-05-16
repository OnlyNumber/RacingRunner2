using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Fusion;

public class MovingForward : NetworkBehaviour, IMoveAble
{
    [SerializeField] private Rigidbody _rigidbody;

    private Vector3 _direction = new Vector3(0,0,1);

    public void MoveForward(float speed)
    {
        _rigidbody.MovePosition(transform.position + new Vector3(_direction.x * 30 * Runner.DeltaTime, _direction.y, _direction.z * speed * Runner.DeltaTime));
    }

    public void SetDirection(Vector3 direction)
    {
        _direction = direction.normalized;
    }
}

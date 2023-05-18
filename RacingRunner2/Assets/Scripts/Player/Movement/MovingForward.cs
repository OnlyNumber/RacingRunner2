using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Fusion;

public class MovingForward : NetworkBehaviour, IMoveAble
{
    [SerializeField] private Rigidbody _rigidbody;

    private Vector3 _direction = new Vector3(0,0,1);

    NetworkTransform trans;

    private void Awake()
    {
        trans = GetComponent<NetworkTransform>();
    }

    public void MoveForward(float speed, float sideSpeed)
    {
        //_rigidbody.MovePosition(transform.position + new Vector3(_direction.x * sideSpeed * Runner.DeltaTime, _direction.y, _direction.z * speed * Runner.DeltaTime));

        if (Runner.DeltaTime < 0.1) 
        trans.TeleportToPosition(transform.position + new Vector3(_direction.x * sideSpeed * Runner.DeltaTime, _direction.y, _direction.z * speed * Runner.DeltaTime));

    }

    public void SetDirection(Vector3 direction)
    {
        _direction = direction.normalized;
    }
}

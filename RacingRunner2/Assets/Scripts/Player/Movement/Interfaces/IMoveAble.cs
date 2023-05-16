using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface IMoveAble
{
    public void SetDirection(Vector3 direction);

    public void MoveForward(float speed);

}

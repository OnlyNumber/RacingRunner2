using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Fusion;

public class PositionChanger : NetworkBehaviour, IChangePosition
{
    public void MovePos(Vector3 onThisDistance)
    {
        transform.position = transform.position + onThisDistance;

    }

    public void ChangePos(Vector3 toThisPos)
    {
        transform.position = toThisPos;
    }

}

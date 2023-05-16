using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface IChangePosition
{
    public void MovePos(Vector3 onThisDistance);

    public void ChangePos(Vector3 toThisPos);

}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Fusion;

public class DestroyedCar : NetworkBehaviour, IEffect
{
    [SerializeField] private float _distanceToMove;

    public Coroutine Effect(GameObject objectForEffect)
    {
        objectForEffect.GetComponent<ISpeedControl>().MultiplySpeed(0);

        objectForEffect.GetComponent<IChangePosition>().MovePos(new Vector3(0, 0, _distanceToMove));

        return null;
    }

    private IEnumerator StartEffect()
    {
        yield return new WaitForSecondsRealtime(1);
    }

}

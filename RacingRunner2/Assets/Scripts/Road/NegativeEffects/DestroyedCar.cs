using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Fusion;

public class DestroyedCar : NetworkBehaviour, IEffect
{
    [SerializeField] private float _durationUntochable;

    [SerializeField] private float _distanceToMove;

    public Coroutine Effect(GameObject objectForEffect)
    {
        objectForEffect.GetComponent<ISpeedControl>().MultiplyBoostScale(1);

        objectForEffect.GetComponent<ISpeedControl>().MultiplySpeed(0);

        objectForEffect.GetComponent<IChangePosition>().MovePos(new Vector3(0, 0, _distanceToMove));

        return StartCoroutine(StartEffect(objectForEffect));
    }

    private IEnumerator StartEffect(GameObject objectForEffect)
    {
        objectForEffect.layer = StaticFields.UNTOUCHABLE_LAYER;

        yield return new WaitForSecondsRealtime(_durationUntochable);

        objectForEffect.layer = StaticFields.PLAYER_LAYER;

    }

}

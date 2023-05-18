using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Fusion;

public class RoadSpawner : NetworkBehaviour, ISpawner
{

    [SerializeField] private float _amountOfRoadsFragment;

    [SerializeField] private float _distanceBetweenFragments;

    [SerializeField] private NetworkObject _roadFragment;

    [SerializeField] private NetworkObject _startFragment;

    [SerializeField] private NetworkObject _finishFragment;
    

    public void Spawn()
    {
        Debug.Log("Spawn");

        Runner.Spawn(_startFragment);

        for (int index = 1; index < _amountOfRoadsFragment; index++)
        {

            Runner.Spawn(
                _roadFragment, new Vector3(0, 0, 1 + index * _distanceBetweenFragments),
                Quaternion.identity,
                null,
                (Runner, obj) =>
                {
                    obj.GetComponent<ISpawner>().Spawn();
                }
                );

        }

        Runner.Spawn(_finishFragment, new Vector3(0, 0, 1 + _amountOfRoadsFragment * _distanceBetweenFragments));

    }
}

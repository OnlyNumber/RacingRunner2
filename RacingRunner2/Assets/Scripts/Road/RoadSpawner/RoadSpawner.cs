using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Fusion;

public class RoadSpawner : NetworkBehaviour, ISpawner
{

    [SerializeField] private float _amountOfRoadsFragment;

    [SerializeField] private float _distanceBetweenFragments;

    [SerializeField] private NetworkBehaviour _fragmentRoad; 

   

    [ContextMenu("SpawnRoad")]
    public void Spawn()
    {
        for (int index = 0; index < _amountOfRoadsFragment; index++)
        {

            Runner.Spawn(
                _fragmentRoad, new Vector3(0, 0, 1 + index * _distanceBetweenFragments),
                Quaternion.identity,
                null,
                (Runner, obj) =>
                {
                    obj.GetComponent<ISpawner>().Spawn();
                }
                );

        }
    }
}

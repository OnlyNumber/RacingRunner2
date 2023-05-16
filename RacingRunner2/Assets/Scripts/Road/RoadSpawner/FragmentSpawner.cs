using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Fusion;

public class FragmentSpawner : NetworkBehaviour, ISpawner
{
    [SerializeField] private List<Transform> _spawnPoints;

    [SerializeField] private List<NetworkBehaviour> _spawnEffects; 

    public void Spawn()
    {

        foreach(var spawnPoint in _spawnPoints)
        {
            Runner.Spawn(_spawnEffects[Random.Range(0, _spawnEffects.Count)],
                spawnPoint.position, 
                Quaternion.identity,
                null, 
                (runner, obj) => {
                    obj.transform.SetParent(transform); 
                });

        }

    }
}

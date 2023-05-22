using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Fusion;

public class FragmentSpawner : NetworkBehaviour, ISpawner
{
    [SerializeField] private List<LinePoints> mySpawnPoints;

    public void Spawn()
    {
        foreach(var spawnPoint in mySpawnPoints)
        {
            spawnPoint.Spawn();
        }

    }
}

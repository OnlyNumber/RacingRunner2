using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Fusion;

public class FragmentSpawner : NetworkBehaviour, ISpawner
{
    [SerializeField] private List<LinePoints> mySpawnPoints;

   

    private void Start()
    {
        //mySpawnPoints = GetComponentsInChildren<ISpawner>();
    }

    public void Spawn()
    {
        foreach(var spawnPoint in mySpawnPoints)
        {
            spawnPoint.Spawn();
        }

    }
}

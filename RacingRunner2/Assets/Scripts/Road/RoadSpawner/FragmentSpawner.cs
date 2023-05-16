using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Fusion;

public class FragmentSpawner : NetworkBehaviour, ISpawner
{
    [SerializeField] private List<LinePoints> _spawnPoints;

    public void Spawn()
    {
        foreach(var spawnPoint in _spawnPoints)
        {
            spawnPoint.GetComponent<ISpawner>().Spawn();
        }

    }
}

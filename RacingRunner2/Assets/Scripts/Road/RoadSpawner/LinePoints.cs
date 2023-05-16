using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Fusion;

public class LinePoints : NetworkBehaviour, ISpawner
{
    [SerializeField] private List<Transform> _spawnPoints;

    [SerializeField] private List<NetworkBehaviour> _spawnEffects;

    public void Spawn()
    {
        List<int> _randomObstacles = new List<int>();

        for (int index = 0; index < _spawnPoints.Count; index++)
        {
            _randomObstacles.Add(Random.Range(0, _spawnEffects.Count));
        }

        _randomObstacles[Random.Range(0, _randomObstacles.Count)] = -1;

        for (int index = 0; index < _spawnPoints.Count; index++)
        {


            if (_randomObstacles[index] != -1)
            Runner.Spawn(_spawnEffects[Random.Range(0, _spawnEffects.Count)],
                    _spawnPoints[index].position,
                    Quaternion.identity,
                    null,
                    (runner, obj) =>
                    {
                        obj.transform.SetParent(transform);
                    });




        }
    }
}

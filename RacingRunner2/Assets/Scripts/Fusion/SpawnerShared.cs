using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Fusion;

public class SpawnerShared : SimulationBehaviour, IPlayerJoined
{
    [SerializeField] private NetworkBehaviour _playerPrebaf;

    [SerializeField] private RoadSpawner _roadSpawner;

    private void Start()
    {
        //Runner.Spawn(_roadSpawner);
    }

    

    public void PlayerJoined(PlayerRef player)
    {
        if(1 == Runner.SessionInfo.PlayerCount)
        {
            Runner.Spawn(_roadSpawner);
        }
        if (player == Runner.LocalPlayer)
        {
            Runner.Spawn(_playerPrebaf, Vector3.zero, Quaternion.identity, player);
        }
    }
}

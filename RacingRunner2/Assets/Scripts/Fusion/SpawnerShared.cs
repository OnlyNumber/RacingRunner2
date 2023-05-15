using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Fusion;

public class SpawnerShared : SimulationBehaviour, IPlayerJoined
{
    [SerializeField] private NetworkBehaviour _playerPrebaf;

    public void PlayerJoined(PlayerRef player)
    {
        if (player == Runner.LocalPlayer)
        {
            Runner.Spawn(_playerPrebaf, Vector3.zero, Quaternion.identity, player);
        }
        //throw new System.NotImplementedException();
    }
}

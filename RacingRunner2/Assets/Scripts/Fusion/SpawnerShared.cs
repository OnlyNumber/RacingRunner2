using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Fusion;
using System;

public class SpawnerShared : SimulationBehaviour, IPlayerJoined
{
    public static SpawnerShared instance;

    public event Action onPlayersConnected;

    public struct PlayerData
    {
        public PlayerData(string name, int avatar, int car)
        {
            this.name = name;
            this.avatar = avatar;
            this.car = car;
        }

        public string name;
        public int avatar;
        public int car;
    }

    [SerializeField] private NetworkBehaviour _playerPrebaf;

    [SerializeField] private RoadSpawner _roadSpawner;

    //private List<NetworkBehaviour> players = new List<NetworkBehaviour>();

    public List<PlayerData> _userData = new List<PlayerData>();


    private void Start()
    {
        if (instance == null)
        {
            instance = this;
        }
        else
        {
            Destroy(this);
        }
    }

    public void PlayerJoined(PlayerRef player)
    {
        if(Runner.SessionInfo.PlayerCount == 1)
        {
            Runner.Spawn(_roadSpawner);
        }
        if (player == Runner.LocalPlayer)
        {


             Runner.Spawn(_playerPrebaf, Vector3.zero, Quaternion.identity, player);
        }

        if(Runner.SessionInfo.PlayerCount == 2)
        {
            onPlayersConnected?.Invoke();
        }


    }

    public void CheckAndAdd(PlayerData user)
    {

        if (!_userData.Contains(user))
        {
            _userData.Add(user);
        }
        else
        {
            return;
        }


        Debug.Log(_userData.Count);

        foreach (var data in _userData)
        {
            Debug.LogError(data.name);
        }

        if (Runner.SessionInfo.PlayerCount == 2)
        {
            onPlayersConnected?.Invoke();
        }

    }

    



}

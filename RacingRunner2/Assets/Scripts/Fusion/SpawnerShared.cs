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

        public PlayerData( PlayerData anotherPlayer)
        {
            this.name = anotherPlayer.name;
            this.avatar = anotherPlayer.avatar;
            this.car = anotherPlayer.car;
        }

        public string name;
        public int avatar;
        public int car;
    }

    [SerializeField] private NetworkBehaviour _playerPrebaf;

    [SerializeField] private RoadSpawner _roadSpawner;

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

        if (_userData.Count == 2)
        {
            onPlayersConnected?.Invoke();
        }

    }

    public List<PlayerData> CopyData()
    {
        List<PlayerData> copyData = new List<PlayerData>();

        foreach (var item in _userData)
        {
            copyData.Add(new PlayerData(item));
        }

        return copyData;
    }





}

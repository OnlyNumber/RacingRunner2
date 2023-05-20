using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Fusion;
using System;

public class SpawnerShared : SimulationBehaviour, IPlayerJoined
{
    public static SpawnerShared instance;

    public event Action onPlayersConnected;

    //public GameStarter startGame;

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

    

    private List<PlayerData> _userData = new List<PlayerData>();

    private List<Transform> playersTransforms = new List<Transform>();

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
            Runner.Spawn(_roadSpawner, null, null, null, (Runner, obj) =>
                {
                    obj.GetComponent<ISpawner>().Spawn();

                    playersTransforms.Add(obj.transform);

                });
            
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

            Runner.SessionInfo.IsOpen = false;

            Runner.SessionInfo.IsVisible = false;

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

public Transform FindNotSelf(Transform self)
    {
        foreach (var item in playersTransforms)
        {

            if(!item.GetComponent<NetworkObject>().HasInputAuthority)
            {
                return item;
            }

        }

        return null;

        //self.GetComponent<NetworkObject>().Id;
    }



}

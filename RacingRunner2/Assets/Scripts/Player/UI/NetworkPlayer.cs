using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Fusion;

public class NetworkPlayer : NetworkBehaviour, IPlayerJoined
{
    [SerializeField] Camera _camera;

    [SerializeField] AudioListener _audioListener;

   public void PlayerJoined(PlayerRef player)
    {
        if(player != Runner.LocalPlayer)
        {
            _camera.enabled = false;

            _audioListener.enabled = false;
        }

    }
}

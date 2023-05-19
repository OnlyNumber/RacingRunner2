using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Fusion;
using System;

public class GameStarter : NetworkBehaviour
{
    public event Action OnGame;

    private bool _isGame;

    public override void FixedUpdateNetwork()
    {
        if (_isGame)
        {
            OnGame?.Invoke();
        }

    }

    public void StartGame()
    {
        _isGame = true;
    }

}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Cinemachine;
using TMPro;

public class PlayerSingleUI : MonoBehaviour
{
    public static PlayerSingleUI instance;

    public CinemachineVirtualCamera Camera;

    public LoadScreen LoadScreen;

    public FinishPanel Finish;

    public Timer timer;

    [field: SerializeField] public SpeedEffects _effectController { private set; get; }

    [field: SerializeField] public PlayerEffect[] _effects { private set; get; }

    [field: SerializeField] public UIController _ui { private set; get; }

    [field: SerializeField] public GameStarter _gameStarter { private set; get; }

    void Start()
    {
        if(instance == null)
        {
            instance = this;
        }
    }

    public void StartInit(GameObject player)
    {
        

        _effectController.StartInit(player);

        _gameStarter.StartInit(player);


        foreach (var item in _effects)
        {
            item.StartInit(player);
        }

        _ui.StartInit(player);

    }


    
}

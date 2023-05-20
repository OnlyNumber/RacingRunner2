using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Cinemachine;
using TMPro;

public class PlayerSingleUI : MonoBehaviour
{
    public static PlayerSingleUI instance;

    public CinemachineVirtualCamera _camera;

    public DrivingInterace drivingInterface;

    public PlayerItem _firstPlayer;

    public PlayerItem _secondPlayer;

    public PanelController _panelVS;

    public LoadScreen _loadScreen;

    public FinishPanel _finish;

    public TMP_Text _textCountdown;

    void Start()
    {
        if(instance == null)
        {
            instance = this;
        }
    }

    
}

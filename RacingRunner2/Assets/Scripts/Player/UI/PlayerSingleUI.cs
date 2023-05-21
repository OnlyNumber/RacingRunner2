using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Cinemachine;
using TMPro;

public class PlayerSingleUI : MonoBehaviour
{
    public static PlayerSingleUI instance;

    public CinemachineVirtualCamera Camera;

    public DrivingInterace DrivingInterface;

    public PlayerItem FirstPlayer;

    public PlayerItem SecondPlayer;

    public PanelController PanelVS;

    public LoadScreen LoadScreen;

    public FinishPanel Finish;

    public TMP_Text TextCountdown;

    public ParticleSystem WindParticles;

    void Start()
    {
        if(instance == null)
        {
            instance = this;
        }
    }

    
}

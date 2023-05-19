using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Cinemachine;
using TMPro;

public class Playeringle : MonoBehaviour
{
    //Я знаю, что можно не указывать SerializeField, если забыл, то дурак или не сделал метод

    public static Playeringle instance;

    [SerializeField] public CinemachineVirtualCamera _camera;

    [SerializeField] public DrivingInterace drivingInterface;

    [SerializeField] public PlayerItem _firstPlayer;

    [SerializeField] public PlayerItem _secondPlayer;

    [SerializeField] public PanelController _panelVS;

    [SerializeField] public PanelController _loadScreen;

    [SerializeField] public FinishPanel _finish;

    [SerializeField] public FirebaseDatabaseController _firebase;

    [SerializeField] public TMP_Text _textCountdown;

    void Start()
    {
        if(instance == null)
        {
            instance = this;
        }
    }

    
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Cinemachine;

public class PlayerInterfaceSingle : MonoBehaviour
{
    //Я знаю, что можно не указывать SerializeField, если забыл, то дурак или не сделал метод

    public static PlayerInterfaceSingle instance;

    [SerializeField] public CinemachineVirtualCamera _camera;

    [SerializeField] public DrivingInterace drivingInterface;

    [SerializeField] public PlayerItem _firstPlayer;

    [SerializeField] public PlayerItem _secondPlayer;

    [SerializeField] public PanelController _panelVS;

    [SerializeField] public PanelController _loadScreen;


    void Start()
    {
        
        if(instance == null)
        {
            instance = this;
        }
        

    }

    
}

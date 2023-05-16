using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Cinemachine;

public class CumeraController : MonoBehaviour
{
    ICinemachineCamera brain;

    private void Start()
    {
        brain = Camera.main.GetComponent<Cinemachine.CinemachineBrain>().ActiveVirtualCamera;

        //CinemachineVirtualCamera cam;

        //cam.m_Lens.FieldOfView = 200;


    }
}

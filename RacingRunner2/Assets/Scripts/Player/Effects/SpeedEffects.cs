using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Cinemachine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using System;
using Fusion;

public class SpeedEffects : MonoBehaviour
{
    public delegate void PlayerEffect(float percents);

    public PlayerEffect OnPlayerEffects;

    private IPercantage percents;

    public void StartInit(GameObject player)
    {
        percents = player.GetComponent<ISpeedControl>();
    }
    
    private void Update()
    {
        OnPlayerEffects?.Invoke(percents.GetPercent());
    }
}

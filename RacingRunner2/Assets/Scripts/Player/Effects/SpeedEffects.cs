using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Cinemachine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using System;

public class SpeedEffects : MonoBehaviour
{
    public delegate void PlayerEffect(float percents);

    public PlayerEffect OnPlayerEffects;

    private IPercantage percents;


    private void Start()
    {
        percents = GetComponent<ISpeedControl>();
    }


    private void Update()
    {
        OnPlayerEffects?.Invoke(percents.GetPercent());
    }
}

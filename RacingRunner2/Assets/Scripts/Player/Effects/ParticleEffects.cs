using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class ParticleEffects : PlayerEffect
{
    [SerializeField] private float _percentOfStart;

    [SerializeField] private ParticleSystem _leftWheelParticle;

    [SerializeField] private ParticleSystem _rightWheelParticles;

    private ParticleSystem _windParticles;

    private Button _nitroButton;



    private void Start()
    {
        _windParticles = PlayerSingleUI.instance.WindParticles;

        _nitroButton = PlayerSingleUI.instance.DrivingInterface.nitroButton;

        WriteMethods(StartWheelParticle, EventTriggerType.PointerDown);

        WriteMethods(StopWheelParticle, EventTriggerType.PointerUp);

        _leftWheelParticle.Stop();

        _rightWheelParticles.Stop();

    }

    private void OnEnable()
    {
        SpeedEffect.OnPlayerEffects += SomeEffect;
    }

    private void OnDisable()
    {
        SpeedEffect.OnPlayerEffects -= SomeEffect;
    }

    private void WriteMethods(Action someMethod, EventTriggerType type)
    {
        EventTrigger.Entry entry = new EventTrigger.Entry();

        entry.eventID = type;

        entry.callback.AddListener((ev) => { someMethod(); });

        _nitroButton.GetComponent<EventTrigger>().triggers.Add(entry);

    }

    public void StartWheelParticle()
    {
        _leftWheelParticle.Play();

        _rightWheelParticles.Play();
    }

    public void StopWheelParticle()
    {
        _leftWheelParticle.Stop();

        _rightWheelParticles.Stop();
    }


   

    public override void SomeEffect(float percents)
    {
        if (percents > _percentOfStart)
        {
            if (!_windParticles.isPlaying)
            {
                _windParticles.Play();
            }
        }
        else
        {
            _windParticles.Stop();
        }
    }

    
}
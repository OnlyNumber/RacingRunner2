using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class ParticleEffects : PlayerEffect
{
    [SerializeField] private float _percentOfStart;

    private ParticleSystem[] _wheelParticles;

    [SerializeField] private ParticleSystem _windParticles;

    [SerializeField] private Button _nitroButton;


    public override void StartInit(GameObject player)
    {
        WriteMethods(StartWheelParticle, EventTriggerType.PointerDown);

        WriteMethods(StopWheelParticle, EventTriggerType.PointerUp);

        _wheelParticles = player.GetComponentsInChildren<ParticleSystem>();

        SpeedEffect.OnPlayerEffects += SomeEffect;
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
        foreach (var item in _wheelParticles)
        {
            item.Play();
        }
    }

    public void StopWheelParticle()
    {
        foreach (var item in _wheelParticles)
        {
            item.Stop();
        }
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

    public override void UnsubscribeEffect()
    {
        SpeedEffect.OnPlayerEffects -= SomeEffect;

        _windParticles.Stop();

        foreach (var item in _wheelParticles)
        {
            item.Stop();
        }

    }
}

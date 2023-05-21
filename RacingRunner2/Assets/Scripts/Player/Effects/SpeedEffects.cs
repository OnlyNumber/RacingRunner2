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

    public PlayerEffect PlayerEffects;


    private ParticleSystem _windParticles;

    [SerializeField] private ParticleSystem _leftWheelParticle;

    [SerializeField] private ParticleSystem _rightWheelParticles;

    private CinemachineVirtualCamera _virtualCamera;

    private CinemachineBasicMultiChannelPerlin _shakeCamera;

    private IPercantage percents;

    [SerializeField] private float _amplitudeGain;

    [SerializeField] private float _frequencyGain;

    private Button _nitroButton;



    private void Start()
    {

        

        _virtualCamera = PlayerSingleUI.instance.Camera;

        _windParticles = PlayerSingleUI.instance.WindParticles;

        percents = GetComponent<ISpeedControl>();

        _shakeCamera = _virtualCamera.GetCinemachineComponent<CinemachineBasicMultiChannelPerlin>();

        _nitroButton = PlayerSingleUI.instance.DrivingInterface.nitroButton;

        WriteMethods(StartWheelParticle, EventTriggerType.PointerDown);

        WriteMethods(StopWheelParticle, EventTriggerType.PointerUp);
        
        _leftWheelParticle.Stop();

        _rightWheelParticles.Stop();

    }

    private void WriteMethods(Action someMethod, EventTriggerType type)
    {
        EventTrigger.Entry entry = new EventTrigger.Entry();

        entry.eventID = type;

        entry.callback.AddListener((ev) => { someMethod(); });

        _nitroButton.GetComponent<EventTrigger>().triggers.Add(entry);

    }


    public void ShakeStart()
    {


        _shakeCamera.m_AmplitudeGain = _amplitudeGain;

        _shakeCamera.m_FrequencyGain = _frequencyGain;
    }

    public void ShakeStop()
    {
        _shakeCamera.m_AmplitudeGain = _amplitudeGain;

        _shakeCamera.m_FrequencyGain = _frequencyGain;
    }

    public void StartWheelParticle()
    {
        Debug.Log("StartWheelParticle");


        _leftWheelParticle.Play();

        _rightWheelParticles.Play();
    }

    public void StopWheelParticle()
    {

        Debug.Log("StopWheelParticle");

        _leftWheelParticle.Stop();

            _rightWheelParticles.Stop();
    }

    private void Update()
    {
        //Debug.Log(percents.GetPercent());

        _virtualCamera.m_Lens.FieldOfView = 40 + percents.GetPercent() * 20;

        _shakeCamera.m_AmplitudeGain = percents.GetPercent() * _amplitudeGain;

        _shakeCamera.m_FrequencyGain = percents.GetPercent() * _frequencyGain;

        if (percents.GetPercent() > 0.3f)
        {
            //Debug.Log("percents.GetPercent() > 0.3f");

            if (!_leftWheelParticle.isPlaying)
            {
                _windParticles.Play();
            }
        }
        else
        {
            _windParticles.Stop();
        }

        //if()
    }
}

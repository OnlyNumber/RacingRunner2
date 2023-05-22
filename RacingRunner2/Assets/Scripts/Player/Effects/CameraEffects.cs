using Cinemachine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraEffects : PlayerEffect
{
    private CinemachineVirtualCamera _virtualCamera;

    private CinemachineBasicMultiChannelPerlin _shakeCamera;

    [SerializeField] private float _amplitudeGain;

    [SerializeField] private float _frequencyGain;

    [SerializeField] private float _startFOV;

    [SerializeField] private float _endFOV;


    private void Start()
    {
        _virtualCamera = PlayerSingleUI.instance.Camera;

        _shakeCamera = _virtualCamera.GetCinemachineComponent<CinemachineBasicMultiChannelPerlin>();

        if (MyNetworkObject.HasInputAuthority)
        {
            Debug.Log("CameraEffects");

            SpeedEffect.OnPlayerEffects += SomeEffect;
        }

    }

    public override void SomeEffect(float percents)
    {

        _virtualCamera.m_Lens.FieldOfView = _startFOV + percents * _endFOV;

        _shakeCamera.m_AmplitudeGain = percents * _amplitudeGain;

        _shakeCamera.m_FrequencyGain = percents * _frequencyGain;
    }

    public override void UnsubscribeEffect()
    {
        SpeedEffect.OnPlayerEffects -= SomeEffect;

        _shakeCamera.m_AmplitudeGain = 0;

        _shakeCamera.m_FrequencyGain = 0;
    }
}

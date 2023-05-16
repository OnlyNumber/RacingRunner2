using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using System;
using System.Threading.Tasks;

public class Oil : MonoBehaviour, IEffect
{
    [SerializeField] private float _slowdownTime;

    [SerializeField,Range(0,1)] private float _powerOfSlowdownEffect;

    public Coroutine Effect(GameObject objectForEffect)
    {
        return StartCoroutine(PlayerSlowdown(objectForEffect));
    }

    private IEnumerator PlayerSlowdown(GameObject objectForEffect)
    {
        objectForEffect.GetComponent<ISpeedControl>().MultiplySpeed(_powerOfSlowdownEffect);

        objectForEffect.GetComponent<ISpeedControl>().MultiplyBoost(_powerOfSlowdownEffect);

        Debug.Log("PlayerSlowdown");
        
        yield return new WaitForSecondsRealtime(_slowdownTime);

        Debug.Log("Stop PlayerSlowdown");


        objectForEffect.GetComponent<ISpeedControl>().MultiplyBoost(1);


    }

    
    



}

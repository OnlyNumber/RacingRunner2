using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Fusion;

public class ColliderChecker : NetworkBehaviour
{
    private Coroutine positiveEffect;

    private Coroutine negativeEffect;


    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.CompareTag("Obstacle"))
        {
            if (negativeEffect != null)
            {
                StopCoroutine(negativeEffect);
            }

            negativeEffect = other.GetComponent<IEffect>().Effect(gameObject);
        }

        if (other.gameObject.CompareTag("PowerUp"))
        {
            Debug.Log("PowerUp");

            negativeEffect = other.GetComponent<IEffect>().Effect(gameObject);
        }

        if (other.gameObject.CompareTag("Finish"))
        {
            if (negativeEffect != null)
            {
                StopCoroutine(negativeEffect);
            }

            other.gameObject.GetComponent<Finisher>().FinishGame(GetComponent<FirebaseDataSetter>()._time);

            GetComponent<ISpeedControl>().MultiplyBoost(0);

            GetComponent<ISpeedControl>().MultiplySpeed(0);

            Debug.Log("Finish");


        }

    }

    private void OnCollisionEnter(Collision collision)
    {
        


    }





}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Fusion;

public class ColliderChecker : NetworkBehaviour
{
    private Coroutine positiveEffect;

    private Coroutine negativeEffect;

    private void Start()
    {

    }


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

    }




}

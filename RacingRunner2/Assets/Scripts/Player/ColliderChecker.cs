using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Fusion;

public class ColliderChecker : NetworkBehaviour
{
    private Coroutine positiveEffect;

    private Coroutine negativeEffect;

    [SerializeField] private Timer _time;

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

            if (HasInputAuthority)
            {
                other.gameObject.GetComponent<Finisher>().FinishGame(_time.MyTime);

                PlayerSingleUI.instance.Camera.Follow = null;

                foreach (var effect in GetComponents<PlayerEffect>())
                {
                    effect.UnsubscribeEffect();
                }

                GetComponent<UIController>().SetOffDrivingInterface();
            }
            GetComponent<ISpeedControl>().MultiplyBoost(0);
        }

    }

}

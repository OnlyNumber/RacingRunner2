using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Fusion;

public class ColliderChecker : NetworkBehaviour
{
    private Coroutine negativeEffect;

    private void OnTriggerEnter(Collider other)
    {
        switch(other.gameObject.tag)
        {
            case "Obstacle":
                {
                    if (negativeEffect != null)
                    {
                        StopCoroutine(negativeEffect);
                    }
                    negativeEffect = other.GetComponent<IEffect>().Effect(gameObject);

                    break;
                }

            case "PowerUp":
                {
                    negativeEffect = other.GetComponent<IEffect>().Effect(gameObject);

                    break;
                }

            case "Finish":
                {
                    if (negativeEffect != null)
                    {
                        StopCoroutine(negativeEffect);
                    }

                    if (HasInputAuthority)
                    {
                        other.gameObject.GetComponent<Finisher>().FinishGame(PlayerSingleUI.instance.timer.MyTime);

                        PlayerSingleUI.instance.Camera.Follow = null;

                        foreach (var effect in PlayerSingleUI.instance._effects)
                        {
                            effect.UnsubscribeEffect();
                        }

                        PlayerSingleUI.instance._ui.SetOffDrivingInterface();
                    }

                    GetComponent<ISpeedControl>().MultiplyBoost(0);

                    break;
                }

        }
    }

}

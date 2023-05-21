using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class PlayerEffect : MonoBehaviour
{
    [SerializeField] protected SpeedEffects SpeedEffect;

    public abstract void SomeEffect(float percents);
}

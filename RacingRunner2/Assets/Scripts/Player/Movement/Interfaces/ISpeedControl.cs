using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface ISpeedControl
{
    public void ChangeSpeed();

    public void MultiplyBoost(float multiply);

    public void MultiplySpeed(float multiply);

    public float GetSpeed();
}

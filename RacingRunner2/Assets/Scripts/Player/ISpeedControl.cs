using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface ISpeedControl
{
    public float ChangeSpeed();

    public void ChangeBoost(float multiply);

    public void MultiplySpeed(float multiply);
}

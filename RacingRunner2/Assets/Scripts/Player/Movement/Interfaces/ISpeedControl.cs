using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface ISpeedControl : IPercantage, IBoost
{
    public void ChangeSpeed();

    public float GetSpeed();

    public void MultiplySpeed(float multiply);

}

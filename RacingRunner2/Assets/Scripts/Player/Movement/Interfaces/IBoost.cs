using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public interface IBoost
{
    public float GetBoostScale();
    public void MultiplyBoostScale(float multiply);

    public void MultiplyBoost(float multiply);

}

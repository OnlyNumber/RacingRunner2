using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Timer : MonoBehaviour
{
    private float _time;

    private bool _isGame;

    private void Update()
    {
        
    }

    private void SetTime()
    {
        _time += Time.deltaTime;
    }

    public float GetTime()
    {
        return _time;
    }


}

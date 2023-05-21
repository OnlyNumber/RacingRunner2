using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Timer : MonoBehaviour
{
    [SerializeField] private GameStarter _gameStarter;

    public float MyTime { get; private set; }

    

    private void Update()
    {
        if (_gameStarter.IsGame == true)
        {
            SetTime();
        }
    }

    private void SetTime()
    {
        MyTime += Time.deltaTime;
    }
}

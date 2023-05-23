using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CarChoose : MonoBehaviour
{
    [SerializeField] List<GameObject> _myCars;

    [SerializeField] FirebaseDatabaseController _firebase;

    private int _currentCar;

    private void Start()
    {
        _firebase.onDataLoadedPlayer += Init;
    }

    private void Init()
    {
        _currentCar = 0;

        NextCar(_firebase.UserDataTransfer.car);
    }

    public void NextCar(int nextCar)
    {
        if (_currentCar + nextCar < 0 || _currentCar + nextCar >= _myCars.Count  )
            return;

        _myCars[_currentCar].SetActive(false);

        _currentCar += nextCar;

        _myCars[_currentCar].SetActive(true);
    }

    public void SavePlayerChoice()
    {
        _firebase.SaveCar(_currentCar);
    }





}

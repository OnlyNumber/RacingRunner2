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



        //_currentCar = _firebase.UserDataTransfer.car;

        Debug.Log(_currentCar);

        //_myCars[_currentCar].SetActive(true);
    }

    public void NextCar(int nextCar)
    {
        Debug.Log(_currentCar + nextCar +"=="+ _myCars.Count);

        if (_currentCar + nextCar < 0 || _currentCar + nextCar >= _myCars.Count  )
            return;

        _myCars[_currentCar].SetActive(false);

        _currentCar += nextCar;

        _myCars[_currentCar].SetActive(true);


        _firebase.ChangeCurrentUser(_firebase.UserDataTransfer.id, _firebase.UserDataTransfer.nickName, _firebase.UserDataTransfer.goldCoins, _firebase.UserDataTransfer.avatarIcon, _firebase.UserDataTransfer.bestTime, _currentCar);

    }



}

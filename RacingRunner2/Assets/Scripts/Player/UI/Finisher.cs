using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Fusion;

public class Finisher : NetworkBehaviour
{
    //private FirebaseDatabaseController _firebase;

    private FinishPanel _finishPanel;

    [Networked]
    private int _place { get; set; }

    private void Start()
    {
        //_firebase = Playeringle.instance._firebase;

        _finishPanel = Playeringle.instance._finish;
    }

    public void FinishGame(float currentTime)
    {
        Rpc_SetPlace(_place + 1);

        _finishPanel.TextTime.text = FromFloatToTime(currentTime);

        _finishPanel.TextBestTime.text = FromFloatToTime(DataHolder.USER_DATA.bestTime);

        _finishPanel.TextPlace.text = $" Place: {_place}/2";



        if(currentTime < DataHolder.USER_DATA.bestTime)
        {
            _finishPanel.TextNewBestTime.text = "New best time: " + FromFloatToTime(currentTime);
        }

        _finishPanel.ShowPanel();

        GetComponent<BoxCollider>().enabled = false;

    }

    public string FromFloatToTime(float timeFloat)
    {
        string timeString;

        if (timeFloat % 60 > 10)
        {
            timeString = $" {(int)(timeFloat / 60)} : {(int)(timeFloat % 60)}";
        }
        else
        {
            timeString = $" {(int)(timeFloat / 60)} : 0{(int)(timeFloat % 60)}";
        }

        return timeString;

    }

    [Rpc]
    private void Rpc_SetPlace(int nextPlace)
    {
        _place = nextPlace;
    }

}

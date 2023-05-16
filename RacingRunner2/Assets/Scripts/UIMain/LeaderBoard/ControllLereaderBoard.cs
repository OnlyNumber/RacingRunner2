using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ControllLereaderBoard : MonoBehaviour
{
    [SerializeField,Range(1, 10)]
    private int _amountBestPlayers;

    [SerializeField] private Transform _layoutLeaderBoard;

    [SerializeField] private ItemLeaderBoard _itemLeaderBoardPrefab;

    [SerializeField] private FirebaseDatabaseController _firebase;

    [SerializeField] private List<Sprite> _sprites;

    void Start()
    {
        _firebase.onDataLoadedScore += Init;
    }

    private void Init()
    {
        Color color;

        bool isPlayerPlaced = false;

       // Debug.Log(_amountBestPlayers + " == " + _firebase.ReverseList.Count);

        for (int index = 0; index < _amountBestPlayers; index++)
        {
            //Debug.Log(index);

            if (float.Parse(_firebase.ReverseList[index].Child("bestTime").Value.ToString()) < 0)
            {
                Debug.Log(float.Parse(_firebase.ReverseList[index].Child("bestTime").Value.ToString()));
                continue;
            }


            if(_firebase.ReverseList[index].Child("id").Value.ToString() == _firebase.UserDataTransfer.id)
            {
                color = StaticFields.SELECTED_COLOR;
                isPlayerPlaced = true;

            }
            else
            {
                color = StaticFields.NOT_SELECTED_COLOR;
            }
            


            Instantiate(_itemLeaderBoardPrefab, _layoutLeaderBoard).InitItem(color,
                _sprites[int.Parse(_firebase.ReverseList[index].Child("avatarIcon").Value.ToString())],
                _firebase.ReverseList[index].Child("nickName").Value.ToString(),
                float.Parse(_firebase.ReverseList[index].Child("bestTime").Value.ToString()),
                _firebase.ReverseList.IndexOf(_firebase.ReverseList[index]) + 1);
        }

        if(!isPlayerPlaced)
        {
            Firebase.Database.DataSnapshot player = null;

            foreach (var item in _firebase.ReverseList)
            {
                

                if(item.Child("nickName").Value.ToString() == _firebase.UserDataTransfer.nickName)
                {
                    player = item;
                }

            }







            Instantiate(_itemLeaderBoardPrefab, _layoutLeaderBoard).InitItem(StaticFields.SELECTED_COLOR,
                _sprites[_firebase.UserDataTransfer.avatarIcon],
                _firebase.UserDataTransfer.nickName,
                _firebase.UserDataTransfer.bestTime,
                _firebase.ReverseList.IndexOf(player) + 1);
        }

    }


    // Update is called once per frame
    void Update()
    {
        
    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ControllLereaderBoard : MonoBehaviour
{
    [SerializeField] private Transform _layoutLeaderBoard;

    [SerializeField] private ItemLeaderBoard _itemLeaderBoardPrefab;

    [SerializeField] private FirebaseDatabaseController _firebase;

    [SerializeField] private Sprite idk;

    void Start()
    {
        _firebase.onDataLoadedScore += Init;
    }

    private void Init()
    {

        foreach (var item in _firebase.reverseList)
        {
            float.Parse(item.Child("bestTime").Value.ToString());

            Instantiate(_itemLeaderBoardPrefab, _layoutLeaderBoard).InitItem(Color.black, idk, item.Child("nickName").Value.ToString(), float.Parse(item.Child("bestTime").Value.ToString()), _firebase.reverseList.IndexOf(item) + 1);

            //leaderBoardItemtransfer.timeItem.text = item.Child("bestTime").Value.ToString();
        }

    }


    // Update is called once per frame
    void Update()
    {
        
    }
}

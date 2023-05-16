using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Fusion;

public class MoveLine : NetworkBehaviour, ILineMover
{
    [SerializeField] private List<float> linesX;

    private int _currentLine;

    [SerializeField] private float _speed;

    public override void FixedUpdateNetwork()
    {
        transform.position = Vector3.MoveTowards(transform.position, new Vector3(linesX[_currentLine], transform.position.y  ), _speed * Runner.DeltaTime);
    }

    public void MoveToLine(int line)
    {
        _currentLine = 
            _currentLine + line >= 0 && _currentLine + line < linesX.Count ?
            _currentLine + line :
            _currentLine;



    }


}

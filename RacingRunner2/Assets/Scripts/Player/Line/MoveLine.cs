using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Fusion;

public class MoveLine : NetworkBehaviour, ILineMover
{
    [SerializeField] private List<float> linesX;

    private int _currentLine;

    [SerializeField] private float _speed;

    private IMoveAble movement;

    private void Start()
    {
        movement = GetComponent<IMoveAble>();

        MoveToLine(-1);
    
    }

    public override void FixedUpdateNetwork()
    {
        if(Mathf.Abs(transform.position.x - linesX[_currentLine]) < 0.1f)
        {
            movement.SetDirection(new Vector3(0, 0, 1));
        }
    }

    public void MoveToLine(int line)
    {
        _currentLine = 
            _currentLine + line >= 0 && _currentLine + line < linesX.Count ?
            _currentLine + line :
            _currentLine;

        if(line > 0)
            movement.SetDirection(new Vector3(1, 0, 1));
        else
        {
            movement.SetDirection(new Vector3(-1, 0, 1));
        }   

    }

    
}

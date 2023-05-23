using UnityEngine;
using Fusion;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class PlayerInputHandler : MonoBehaviour
{
    private int linePos = 0;

    private bool isMobile;

    [SerializeField]
    private float checkZone;

    [SerializeField]
    private IPlatform platformControl;

    private NetworkBool isPressedBrake = false;

    private ILineMover _lineMover;

    private void Start()
    {
        _lineMover = GetComponent<ILineMover>();

        isMobile = Application.isMobilePlatform;

        if (!isMobile)
        {

            platformControl = new ComputerPlatform(checkZone);

        }
        else
        {

            platformControl = new MobilePlatform(checkZone);
        }

    }

    private void Update()
    {
        ChooseDirection(platformControl.Controlling());
    }

    private void ChooseDirection(IPlatform.Directions direction)
    {
        switch (direction)
        {
            case (IPlatform.Directions.right):
                {
                    _lineMover.MoveToLine(1);
                    break;
                }

            case (IPlatform.Directions.left):
                {
                    _lineMover.MoveToLine(-1);
                    break;
                }
        }
    }



}

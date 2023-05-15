using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public abstract class PanelController : MonoBehaviour
{
    public abstract void ShowPanel(string errorText = null);

    public abstract void ClosePanel();
   
}

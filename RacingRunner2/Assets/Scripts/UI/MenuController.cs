using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MenuController : MonoBehaviour
{
    [SerializeField] private PanelController _mainMenuPanel;
    [SerializeField] private PanelController _panelProfile;
    [SerializeField] private PanelController _panelChooseAvatar;
    [SerializeField] private PanelController _loadingScreen;

    private PanelController _currentPanel;



    public void GoToNextPanel(PanelController nextPanel)
    {
        _currentPanel.ClosePanel();

        _currentPanel = nextPanel;

        _currentPanel.ShowPanel();
    }



}

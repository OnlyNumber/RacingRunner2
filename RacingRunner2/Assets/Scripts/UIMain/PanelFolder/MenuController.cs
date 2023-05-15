using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MenuController : MonoBehaviour
{

    [SerializeField] private PanelController _mainMenuPanel;
    [SerializeField] private PanelController _panelProfile;
    [SerializeField] private PanelController _panelChooseAvatar;
    [SerializeField] private PanelController _loadingScreen;
    [SerializeField] private PanelController _panelLeaderBoard;
    [SerializeField] private PanelController _panelGarage;

    private PanelController _currentPanel;

    private void Start()
    {
        _currentPanel = _loadingScreen;
        GoToMain();
    }

    public void GoToMain()
    {
        GoToNextPanel(_mainMenuPanel);
    }

    public void GoToProfile()
    {
        GoToNextPanel(_panelProfile);
    }

    public void GoToChooseAvatar()
    {
       GoToNextPanel(_panelChooseAvatar);
    }

    public void GoToLeaderBoard()
    {
        GoToNextPanel(_panelLeaderBoard);
    }

    public void GoToGarage()
    {
        GoToNextPanel(_panelGarage);
    }


    private void GoToNextPanel(PanelController nextPanel)
    {
        _currentPanel.ClosePanel();

        Debug.Log(_currentPanel.gameObject.name);

        _currentPanel = nextPanel;

        _currentPanel.ShowPanel();
    }



}

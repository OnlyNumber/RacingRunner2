using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MenuController : MonoBehaviour
{

    [SerializeField] private PanelController _mainMenuPanel;
    [SerializeField] private PanelController _panelProfile;
    [SerializeField] private PanelController _panelChooseAvatar;
    [SerializeField] private PanelController _loadingScreen;
    [SerializeField] private PanelController _panelLeaderBoard;
    [SerializeField] private PanelController _panelGarage;
    [SerializeField] private PanelController _panelOptions;

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

    public void GoToOptions()
    {
        GoToNextPanel(_panelOptions);
    }

    private void GoToNextPanel(PanelController nextPanel)
    {
        _currentPanel.ClosePanel();

        Debug.Log(_currentPanel.gameObject.name);

        _currentPanel = nextPanel;

        _currentPanel.ShowPanel();
    }

    public void GoToLogIn()
    {

        _loadingScreen.ShowPanel(StaticFields.LOG_IN_MENU_SCENE);

    }
    public void GoToGamePlay()
    {

        _loadingScreen.ShowPanel(StaticFields.GAME_PLAY_SCENE);

    }


}

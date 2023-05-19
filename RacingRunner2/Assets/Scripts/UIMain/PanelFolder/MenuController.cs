using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MenuController : MonoBehaviour
{

    [SerializeField] private LoadScreen _loadingScreen;

    [SerializeField] private PanelController _mainPanel;

    [SerializeField] private FirebaseDatabaseController _firebase;

    private void Start()
    {
        

        _firebase.onDataLoadedPlayer += _loadingScreen.ClosePanel;

        _firebase.onDataLoadedPlayer += _mainPanel.ShowPanel;

    }

    

    private void GoToNextPanel(PanelController nextPanel)
    {
        //_currentPanel.ClosePanel();

        //Debug.Log(_currentPanel.gameObject.name);

        //_currentPanel = nextPanel;

        //_currentPanel.ShowPanel();
    }

    public void GoToLogIn()
    {

        //_loadingScreen.ShowPanel(StaticFields.LOG_IN_MENU_SCENE);

    }
    public void GoToGamePlay()
    {

        //_loadingScreen.ShowPanel(StaticFields.GAME_PLAY_SCENE);

    }


}

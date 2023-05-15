using UnityEngine;
using Fusion;
using System.Threading.Tasks;


public class SessionSearcher : MonoBehaviour
{
    public SessionInfo firstSession;


    Task createLobbyTask;

    private void Start()
    {
        StartSearch();
    }

    private void Update()
    {
        //if (createLobbyTask == null)
            //StartSearch();
    }


    public void StartSearch()
    {
        createLobbyTask = StartPlayer(FindObjectOfType<NetworkRunner>());
    }


    public async Task StartPlayer(NetworkRunner runner)
    {
        var result = await runner.StartGame(new StartGameArgs()
        {
            PlayerCount = 2,
            GameMode = GameMode.Shared,
        });

        if (!result.Ok)
        {
            Debug.LogError($"Failed to Start: {result.ShutdownReason}");
        }

    }

}

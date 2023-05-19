using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class StaticFields
{
    public const string REGISTRATION_MENU_SCENE = "RegistrationMenu";
    public const string MENU_SCENE  = "Menu";
    public const string LOG_IN_MENU_SCENE = "LogInMenu";
    public const string GAME_PLAY_SCENE = "GamePlay";

    public const int PLAYER_LAYER = 7;
    public const int UNTOUCHABLE_LAYER = 8;

    public const string FIREBASE_NAME = "nickName";
    public const string FIREBASE_GOLD = "goldCoins";
    public const string FIREBASE_AVATAR = "avatarIcon";
    public const string FIREBASE_BEST_TIME = "bestTime";
    public const string FIREBASE_CAR = "car";
    public const string FIREBASE_PLAYERS = "users";


    public static Color NOT_SELECTED_COLOR { private set; get; } = Color.black;

    public static Color SELECTED_COLOR { private set; get; } = Color.yellow;

}

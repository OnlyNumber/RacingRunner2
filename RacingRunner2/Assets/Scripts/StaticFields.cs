using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class StaticFields
{
    public const string REGISTRATION_MENU_SCENE = "RegistrationMenu";
    public const string MENU_SCENE  = "Menu";

    public const string LOG_IN_MENU_SCENE = "LogInMenu";

    public static Color NOT_SELECTED_COLOR { private set; get; } = Color.black;

    public static Color SELECTED_COLOR { private set; get; } = Color.yellow;

}

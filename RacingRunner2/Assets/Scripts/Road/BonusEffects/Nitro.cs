using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Fusion;

public class Nitro : NetworkBehaviour,IEffect
{
    [SerializeField] private float _addNitro;

    public Coroutine Effect(GameObject objectForEffect)
    {
        Debug.Log("Nitro Effect");

        objectForEffect.GetComponent<NitroSystem>().AddNitro(_addNitro);

        return null;
    }
    
}

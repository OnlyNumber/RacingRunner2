using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Nitro : MonoBehaviour,IEffect
{
    [SerializeField] private float _addNitro;

    public Coroutine Effect(GameObject objectForEffect)
    {
        objectForEffect.GetComponent<NitroSystem>().AddNitro(_addNitro);

        return null;
    }
    
}

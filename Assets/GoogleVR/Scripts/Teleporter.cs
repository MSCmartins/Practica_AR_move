using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Animations;

public class Teleporter : MonoBehaviour
{
    public GameObject player;
    int state = 0;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    public void PointerClick()
    {
        //GetComponent<Animator>().SetTrigger("run");
        //GetComponent<Animator>().SetTrigger("stop");
        player.transform.position = new  Vector3(transform.position.x+0.9f,transform.position.y,transform.position.z);
        
    }

    public void Animar()
    {
        GetComponent<Animator>().SetTrigger("dance");
        GetComponent<Animator>().SetTrigger("stop");
    }

    public void Animar2()
    {
        GetComponent<Animator>().SetTrigger("run");
        GetComponent<Animator>().SetTrigger("stop");
    }

    public void Animar3()
    {
        GetComponent<Animator>().SetTrigger("jump");
        GetComponent<Animator>().SetTrigger("stop");
    }

    public void animarAve()
    {
        if (state == 0){
            GetComponent<Animator>().SetTrigger("Attack");
            Debug.Log("clic 1");
            state += 1;
        }else if (state == 1){
            GetComponent<Animator>().SetTrigger("Leave");
            Debug.Log("clic 2");
            state += 1;
        }else if (state == 2){
            GetComponent<Animator>().SetTrigger("Hit");
            Debug.Log("clic 3");
            state = 0;
        }   
    }
}

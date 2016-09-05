using UnityEngine;
using System.Collections;

public class DestoryBuilding3 : MonoBehaviour {
	public string blockTag;
    public string blockTag2;
    public string blockTag3;
	void OnTriggerEnter2D(Collider2D collider){
		if(collider.gameObject.tag == blockTag){
			Destroy(collider.gameObject);
        if (collider.gameObject.tag == blockTag2){
                Destroy(collider.gameObject);
        if (collider.gameObject.tag == blockTag2) {
                Destroy(collider.gameObject);
                
                }
            }

		}
	}
}
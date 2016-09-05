using UnityEngine;
using System.Collections;

public class InfiniteGround : MonoBehaviour{
	
	public string groundTag;
	public int addXAmount;
	
	void OnCollisionEnter2D(Collision2D collider){
		if(collider.gameObject.tag == groundTag){
			collider.gameObject.transform.position += new Vector3(addXAmount, 0, 0);	
		}

	}


}
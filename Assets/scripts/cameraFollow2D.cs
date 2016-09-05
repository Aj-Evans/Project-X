using UnityEngine;
using System.Collections;

public class cameraFollow2D : MonoBehaviour {

	public GameObject player;
	float startZPosition;
	void Start(){
		startZPosition = transform.position.z;
	}
	// Update is called once per frame
	void Update () {
		Vector3 playerPosition = new Vector3 (player.transform.position.x, player.transform.position.y, startZPosition);
	}
}

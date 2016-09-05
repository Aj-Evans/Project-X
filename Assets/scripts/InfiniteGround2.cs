using UnityEngine;
using System.Collections;

public class InfiniteGround2 : MonoBehaviour {
	public GameObject player;

	// Update is called once per frame
	void Update () {
		transform.position = new Vector3 (player.transform.position.x, transform.position.y, transform.position.z);
	}
}

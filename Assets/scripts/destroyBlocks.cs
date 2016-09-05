using UnityEngine;
using System.Collections;

public class destroyBlocks : MonoBehaviour {

	// Use this for initialization
	void OnTriggerEnter2D(Collider2D collision) {
		if (collision.tag == "CrateM" || collision.tag == "CrateP" || collision.tag == "CrateW") {
			Destroy(collision.gameObject);
		}
	}
}

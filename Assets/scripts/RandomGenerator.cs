using UnityEngine;
using System.Collections;

public class RandomGenerator : MonoBehaviour
{
	public bool hasSpawned;
	public int metres;
	public GameObject woodCrate;
	public GameObject metalCrate;
	public GameObject powerCrate;
	public GameObject building;
	public GameObject powercell;


	public float woodCrateProb = 0.4f;
	public float metalCrateProb = 0.3f;
	public float powerCrateProb = 0.1f;
	public float powercrateprob = 0.1f;
	public int woodCrateHeight;
	public GameObject metreCounter;
	MetreScript metreScript;
	bool buildingSpawned;
	void Start(){
		metreScript = metreCounter.GetComponent<MetreScript>();
	}
	void LateUpdate(){
		Debug.Log (metres.ToString ());
		if(!hasSpawned){		
			hasSpawned = true;
			if(metres % 15 == 0){
				float random = Random.value;
				if (random <= woodCrateProb) {//Spawn wood crate
					if (Random.Range (0, 2) == 0) {
						Instantiate (woodCrate, transform.position, new Quaternion (0, 0, 0, 0));
					} else {
						Instantiate (woodCrate, transform.position, new Quaternion (0, 0, 0, 0));
						Instantiate (woodCrate, transform.position + new Vector3 (0, woodCrateHeight, 0), new Quaternion (0, 0, 0, 0));
					}
				} else if (random <= (woodCrateProb + metalCrateProb)) { //Spawn metal crate
					Instantiate (metalCrate, transform.position, new Quaternion (0, 0, 0, 0));
				} else { //Spawn power crate
					Instantiate (powerCrate, transform.position, new Quaternion (0, 0, 0, 0));
				
				}
			}
		}
		if (!buildingSpawned) {
			if (metres % 200 == 0) {
				buildingSpawned = true;
				Instantiate (building, new Vector3 (transform.position.x + 10, 3.33f, transform.position.z), new Quaternion (0, 0, 0, 0));
				StartCoroutine("HasSpawned");
			}
		}
	}
	IEnumerator HasSpawned(){
		yield return new WaitForSeconds(5);
		buildingSpawned = false;
	}
}
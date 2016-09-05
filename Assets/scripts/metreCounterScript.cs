using UnityEngine;
using System.Collections;

public class metreCounterScript : MonoBehaviour
{
	[HideInInspector]public int metres = 0;
	public GameObject deathCanvas;
	public GameObject randomGenerator;
	RandomGenerator randomScript;
	public float secondsPerMetre = 1;
	void Start(){
		StartCoroutine(AddMetres());
		randomScript = randomGenerator.GetComponent<RandomGenerator>();
	}
	IEnumerator AddMetres(){
		while(!deathCanvas.activeSelf){
			yield return new WaitForSeconds(secondsPerMetre);
			metres++;
			randomScript.hasSpawned = false;
		}
	}
}


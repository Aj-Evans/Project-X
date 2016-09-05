using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class MetreScript : MonoBehaviour{
	public Text scoreText;
	public GameObject randomGenerator;
	public float startXPosition;
	public float scoreDivider;
	[HideInInspector]public int score;
	Vector3 prevPos;
	void Start(){
		prevPos = new Vector3(startXPosition-1, 0, 0);
	}		
	void Update(){
		scoreText.text = score + "m";
		if(prevPos.x < transform.position.x){
			score = (int)((transform.position.x - startXPosition) / scoreDivider);
			randomGenerator.GetComponent<RandomGenerator> ().metres = score;
		}
		prevPos = transform.position;
	}
		
}
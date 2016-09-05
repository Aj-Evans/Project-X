using UnityEngine;
using System.Collections;
using UnityEngine.UI;
public class PowerCellCollections : MonoBehaviour {
	public Text scoreText;
	public int score;
	public int scoreIncrement;
	void Start(){
		scoreText.text = "0";
	}
	void OnCollisionEnter2D(Collision2D other)
		{
			if(other.gameObject.tag == "coin" )
			{
				score += scoreIncrement;
				Destroy(other.gameObject);
				scoreText.text = score.ToString();
			}
		}
}
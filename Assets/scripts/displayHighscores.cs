using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using System.Collections.Generic;

public class displayHighscores : MonoBehaviour {
	public Text[] highscoreText;
	Highscores highscoreManager;
	public GameObject highscoreObject;
	List<string> usernames;
	
	void Start () {
		usernames = new List<string> ();
		for(int i =0; i < highscoreText.Length; i++){
			highscoreText[i].text = i+1 + ". ";
		}
		highscoreManager = highscoreObject.GetComponent<Highscores>();
		StartCoroutine("RefreshHighscores");
	}

	public void OnHighscoresDownloaded(Highscore[] highscoreList){
		for(int i =0; i < highscoreText.Length; i++){
			highscoreText[i].text = i+1 + ". ";
			if(highscoreList.Length > i){
				highscoreText[i].text += highscoreList[i].username + " - " + highscoreList[i].score;			
			}
		}
		for(int i =0; i < highscoreList.Length; i++){
			highscoreList[i].username.Replace("+", " ");
			highscoreList[i].username.Trim();
			highscoreList[i].username.Replace(" ", "");
			//write usernames to file
			usernames.Add(highscoreList[i].username);
		}
	}

	IEnumerator RefreshHighscores(){
		while(true){
			highscoreManager.DownloadHighscores();
			yield return new WaitForSeconds(10);
		}
	}
}
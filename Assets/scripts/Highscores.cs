using UnityEngine;
using System.Collections;

public class Highscores : MonoBehaviour {

	const string privateCode = "tDPfmNamsUmUR4tetrXqjgXgiqwVrceUynZOgH1pXtaQ";
	const string publicCode = "56055a336e51b60f4c73f387";
	const string webUrl = "http://dreamlo.com/lb/";

	public Highscore[] highscoresList;
	static Highscores instance;
	displayHighscores highscoresDisplay;
	public GameObject highscoreObject;

	void Awake(){
		instance = this;
		highscoresDisplay = highscoreObject.GetComponent<displayHighscores>();
	}
	void Update(){
	}
	public static void AddNewHighscore(string username, int score){
		instance.StartCoroutine(instance.UploadNewHighscore(username,score));
	}

	IEnumerator UploadNewHighscore(string username, int score){
		WWW www = new WWW(webUrl + privateCode + "/add/" + WWW.EscapeURL(username) + "/" + score);
		yield return www;

		if(string.IsNullOrEmpty(www.error)){
			print ("Upload Successful!");	
			DownloadHighscores();
		}
		else{
			print ("Error Uploading: " + www.error);
		}
	}	
	public void DownloadHighscores(){
		StartCoroutine("DownloadHighscoresFromDatabase");
	}

	IEnumerator DownloadHighscoresFromDatabase(){
		WWW www = new WWW(webUrl + publicCode + "/pipe/");
		yield return www;
		
		if(string.IsNullOrEmpty(www.error)){
			FormatHighscores(www.text);		
			highscoresDisplay.OnHighscoresDownloaded(highscoresList);
		}
		else{
			print ("Error Downloading: " + www.error);
		}
	}

	public void FormatHighscores(string textStream){
		string[] entries = textStream.Split(new char[]{'\n'}, System.StringSplitOptions.RemoveEmptyEntries);
		highscoresList = new Highscore[entries.Length];
		for(int i =0; i < entries.Length; i++){
			string[] entryInfo = entries[i].Split (new char[]{'|'});
			string username = entryInfo[0];
			int score = int.Parse(entryInfo[1]);
			highscoresList[i] = new Highscore(username, score);
		}
	}
}

public struct Highscore{
	public string username;
	public int score;

	public Highscore(string _username, int _score){
		username = _username;
		score = _score;
	}
}

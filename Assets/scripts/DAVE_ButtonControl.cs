using UnityEngine;
using System.Collections;

public class DAVE_ButtonControl : MonoBehaviour {
	public int gameSceneIndex;
    public float speed;
	public GameObject mainMenuCanvas;
	public GameObject creditsCanvas;
	public GameObject settingsCanvas;
	public GameObject musicCanvas;
	public GameObject teamCanvas;
	public GameObject leaderCanvas;
    public GameObject pauseCanvas;
    public GameObject deathCanvas;
    public GameObject pauseCanvas2;
    public GameObject pause_buttonCanvas;
    public GameObject mode_selectorCanvas;

	public void ShowMainMenu(){
		mainMenuCanvas.SetActive(true);
		creditsCanvas.SetActive(false);
		settingsCanvas.SetActive(false);
		musicCanvas.SetActive(false);
		teamCanvas.SetActive(false);
		leaderCanvas.SetActive(false);
        pauseCanvas.SetActive(false);
        deathCanvas.SetActive(false);
        pauseCanvas2.SetActive(false);
        pause_buttonCanvas.SetActive(false);
        mode_selectorCanvas.SetActive(false);
	}


	public void Play(){
		Application.LoadLevel(gameSceneIndex);
	}
	public void ShowCredits(){
		mainMenuCanvas.SetActive(false);
		creditsCanvas.SetActive(true);
	}
	public void ShowSettings(){
		mainMenuCanvas.SetActive(false);
		settingsCanvas.SetActive(true);
	}
	public void ShowMusic(){
		mainMenuCanvas.SetActive(false);
		musicCanvas.SetActive(true);
	}

	public void ShowTeam(){
		mainMenuCanvas.SetActive(false);
		teamCanvas.SetActive(true);
	}

	public void ShowLeader(){
		mainMenuCanvas.SetActive(false);
		leaderCanvas.SetActive(true);
	}

    public void ShowPause(){
        deathCanvas.SetActive(false);
        pauseCanvas.SetActive(true);
        Time.timeScale = 0f;
    }

    public void ShowPause2(){
        pause_buttonCanvas.SetActive(false);
        pauseCanvas2.SetActive(true);
        Time.timeScale = 0f;
    }

    public void ShowPauseButton(){
        pauseCanvas.SetActive(false);
        pause_buttonCanvas.SetActive(true);
        Time.timeScale = 0f;
    }

    public void ShowResume(){
        pause_buttonCanvas.SetActive(false);
        Time.timeScale = 1f;
    }

    public void ShowMode(){
        mainMenuCanvas.SetActive(false);
        mode_selectorCanvas.SetActive(true);
    }
}

using UnityEngine;
using UnityEngine.Advertisements;

public class SimpleAds : MonoBehaviour
{
    public GameObject deathCanvas;
    public void Canvas() 
    {
        deathCanvas.SetActive(false);
    }
    public void ShowAd()
    {
        if (Advertisement.IsReady())
        {
            Advertisement.Show();
        }
    }
    public void death_ad()
    {
            deathCanvas.SetActive(true);
            
        {
           
        }
    }
}
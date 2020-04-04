using Firebase;
using Firebase.Analytics;
using Firebase.Extensions;
using System;
using System.Threading.Tasks;
using UnityEngine;

public class AnalyticsManager : MonoBehaviour
{
    DependencyStatus dependencyStatus = DependencyStatus.UnavailableOther;
    protected bool firebaseInitialized = false;

    public static AnalyticsManager Instance;
    public string bundle_id;

    private void Awake()
    {
        Instance = this;
        DontDestroyOnLoad(gameObject);
    }


    public virtual void Start()
    {
        FirebaseApp.CheckAndFixDependenciesAsync().ContinueWithOnMainThread(task => {
            dependencyStatus = task.Result;
            if (dependencyStatus == DependencyStatus.Available)
            {
                InitializeFirebase();
            }
            else
            {
                Debug.LogError(
                  "Could not resolve all Firebase dependencies: " + dependencyStatus);
            }
        });
       
    }


    void InitializeFirebase()
    {
        Debug.Log("Enabling data collection.");
        FirebaseAnalytics.SetAnalyticsCollectionEnabled(true);
        Debug.Log("Set user properties.");
        FirebaseAnalytics.SetUserProperty(FirebaseAnalytics.UserPropertySignUpMethod,"Google");
        FirebaseAnalytics.SetUserId("gameuser");
        FirebaseAnalytics.SetMinimumSessionDuration(new TimeSpan(0, 0, 10));
        FirebaseAnalytics.SetSessionTimeoutDuration(new TimeSpan(0, 30, 0));
        firebaseInitialized = true;
    }

    public void LogGameStatus(string screen_name)
    {
        //DateTime theTime = DateTime.Now;
        //string timeFormat = ">>TIME : " + theTime.ToString("HH:mm:ss");
        //string datetime = ">>DATE : " + theTime.ToString("yyyy-MM-dd") + timeFormat;
        FirebaseAnalytics.LogEvent(bundle_id, screen_name,"photon");
    }

}

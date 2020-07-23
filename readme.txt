Requirements : 

First, you have to put this plugin in a "Plugins" folder inside your game directory.
If you want to package for Android, you need to use the 4.17 plugin or higher. Then you have to go in Edit->Project Settings->Platforms->Android, set the minimum SDK version to 19 or higher and enable the "Enable Gradle instead of Ant" option.
To call these functions, you need to include "ForceTubeVRFunctions.h" before. You don't have to instantiate UForceTubeVRFunctions, because all these functions are static.
Don't forget to turn on your bluetooth with a paired ForceTubeVR before any test.


Fonctions:

	FORCETUBEVR void UForceTubeVRFunctions::InitAsync(bool pistolsFirst = false);

	FORCETUBEVR void UForceTubeVRFunctions::Kick(uint8 power, ForceTubeVRChannel target = ForceTubeVRChannel::rifle);

	FORCETUBEVR void UForceTubeVRFunctions::Rumble(uint8 power, float timeInSeconds, ForceTubeVRChannel target = ForceTubeVRChannel::rifle);

	FORCETUBEVR void UForceTubeVRFunctions::Shot(uint8 kickPower, uint8 rumblePower, float rumbleDuration, ForceTubeVRChannel target = ForceTubeVRChannel::rifle);

	FORCETUBEVR void UForceTubeVRFunctions::SetActiveResearch(bool active);

	FORCETUBEVR uint8 UForceTubeVRFunctions::TempoToKickPower(float tempo);

	FORCETUBEVR uint8 UForceTubeVRFunctions::GetBatteryLevel();

	FORCETUBEVR void UForceTubeVRFunctions::OpenAndroidBluetoothSettings();

enum : 

	ForceTubeVRChannel { all, rifle, rifleButt, rifleBolt, pistol1, pistol2, other, vest };


-----------------------------------------------------------Pairing--------------------------------------------------------------------------

You have to pair the ForceTubeVR to be able to use it with this plugin.
The ForceTubeVR itself has to be paired to Windows or Android via bluetooth standard connection.


----------------------------------------------------------Haptic effects------------------------------------------------------------------------

ForceTubeVR integrate 2 main haptic effects :
Rumble and Kick


----------------------------------------------------------ForceTubeVRChannel------------------------------------------------------------------------


"all" and "rifle" aren't real channels because "all" redirect to all ForceTubeVR regardless of channels and "rifle" redirect to "rifleButt" and "rifleBolt" chanels.

----------------------------------------------------------InitAsync-----------------------------------------------------------------

If a forcetube is already paired on Windows or Android and powered, then all the forcetubevrs will pass from "paired" status to "connected" status (can see it in Windows Bluetooth manager) just after you call InitAsync.
With no parameter or a boolean "false" as only parameter, the six first paired forcetubevr detected will be put in the six channels in this order : rifleButt, rifleBolt, pistol1, pistol2, other, vest. It is the best for rifle games.
If you prefer to set it up as a two pistol game (or any game with one weapon by hand), you should call InitAsync with a boolean "true" as only parameter, 
and the six first paired forcetubevr detected will be put in the six channels in this order : pistol1, pistol2, rifleButt, rifleBolt, other, vest.
In the exemple, InitAsync() is called at RuntimeInitialize, so it is when the game with this plugin is launched (from editor or package).

----------------------------------------------------------Rumble----------------------------------------------------------------

The rumble uses 2 "standard" rumble motors, one "small" (high frequency little effect) and one "big" (for loud rumble effect).
Those 2 motors are driven by the same signal as following :
-if rumble "power" is from 0 to 49% (0 to 126), only the small will spin (you can modulate the little motor speed, little motor max speed is reatch at 127 power value);
-if rumble "power" is from 50% to 100% (127 to 255), Small motor is driven max speed, big motor spin according to "power" value (255 give the max speed for both motors).
Rumble duration and power can be freely setted up, it depends of your needs. 
The "timeInSeconds" parameter is the rumble duration in seconds (example : 0.1 will activate rumble motor for 100ms). Under 0.03s, the motors are not activated enough to give any effect. 
You can make a rumble without end setting this parameter to 0.0f.

Fonction using it :

	FORCETUBEVR void Rumble(uint8 power, float timeInSeconds, ForceTubeVRChannel target);
	FORCETUBEVR void Shot(uint8 kickPower, uint8 rumblePower, float rumbleDuration, ForceTubeVRChannel target);



----------------------------------------------------------Kick-----------------------------------------------------------------


The kick uses a solenoid to directly push/kick the user's shoulder.
It's possible to modulate the solenoid's power draw according to your needs (kick power can be set from 0 to 255),
To make it possible, the ForceTubeVR's firmware modulate power draw timings of the solenoid (depends on "kickpower" level, the firmweare will activate the solenoid for a given amont of time).
The activation timing can go from 0 to 100ms.
100ms will give the maximum Kick effect possible (255 value) (use this for big no automatic weapons).
30ms will give the minimal "good enough" effect (76 value) (use this for super light LMGs as P90 to handle high fire rates).

How to set power per weapon :

As said before, activation timings can go from 0 to 100ms, the solenoid himself need 30ms of pause between each Kick, so "kick power" can be set like this :
Kickpower=((WeaponFireRate-30ms)/100)*255

Some raw exemples :

M1014:250ms = 100% ---> 255 value
SPAS12:250ms = 100% ---> 255 value
SKS:125ms = 95% ---> 242 value
M39EMR:111ms =81% ---> 206 value
AKM:100ms =70% ---> 178 value
G3:100ms = 70% ---> 178 value
Mk16:100ms =70% ---> 178 value
Mk17:100ms =70% ---> 178 value
AK74u:91ms =61% ---> 156 value
AUG:91ms =61% ---> 156 value
PKM:91ms =61% ---> 156 value
TAR21:91ms =61% ---> 156 value
SA80:83ms =53% ---> 135 value
SVD:83ms =53% ---> 135 value
G36:83ms =53% ---> 135 value
AK5C:83ms =53% ---> 135 value
M249:83ms =53% ---> 135 value
MP5:83ms =53% ---> 135 value
AK12:77ms =47% ---> 120 value
Mk18:77ms =47% ---> 120 value
M16A4:71ms =41% ---> 105 value
552:66ms =36% ---> 92 value
Famas:66ms =36% ---> 92 value
P90:62ms =32% ---> 82 value
VAL:62ms = 32% ---> 82 value
M40A5: bolt action = 100% ---> 255 value
SV98: bolt action = 100% ---> 255 value

Fonction using the kick :

	FORCETUBEVR void Kick(uint8 power, ForceTubeVRChannel target);
	FORCETUBEVR void Shot(uint8 kickPower, uint8 rumblePower, float rumbleDuration, ForceTubeVRChannel target);



----------------------------------------------------------Shot-----------------------------------------------------------------

This method is a combination of the both Kick and Rumble methods. So, "Shot" is equivalent to "Kick" and "Rumble".



----------------------------------------------------------TempoToKickPower-----------------------------------------------------------------

Use it to get the maximum kick power according to the duration ("tempo") between two shots. 
You can't always put kick power to 255 (100%) because if your tempo is too short, the ForceTubeVR motor won't have the time to reset itself between two shots and you will have some loss of kicks. 
It is useful if you want to make an autoshot with the higher kick power without loss of kick.

You can use this fonction to get the kick power, in connection with :

FORCETUBEVR void Kick(uint8 power, ForceTubeVRChannel target);
FORCETUBEVR void Shot(uint8 kickPower, uint8 rumblePower, float rumbleDuration, ForceTubeVRChannel target);



----------------------------------------------------------SetActiveResearch-----------------------------------------------------------------

If you call it with "true" as "active" parameter, the plugin will maintain a thread to watch the connection state of ForceTubeVR and reconnect if needed (this is the default state).
With false, the thread will be desactivated.



----------------------------------------------------------GetBatteryLevel-------------------------------------------------------------------

Will return a uint8 between 0 and 100. This is the percent of battery remaining in the currently connected ForceTubeVR.



----------------------------------------------------------OpenAndroidBluetoothSettings------------------------------------------------------

Only on Android, will try to open the bluetooth settings. Does nothing on Windows.
If you call it with "true" as "isInVR" parameter, it will try to open it by OculusTV to make it work in OculusQuest environment. 
With false, it will directly call the default android bluetooth settings, so it won't work on Oculus Quest but will on all Android smartphones.



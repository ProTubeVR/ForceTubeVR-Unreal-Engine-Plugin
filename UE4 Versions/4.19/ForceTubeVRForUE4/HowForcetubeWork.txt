Requirements : 

First, you have to put this plugin in a "Plugins" folder inside your game directory.
If you want to package for Android, you have to set minimum SDK version to 19 in Edit->Project Settings->Platforms->Android.
To call these functions, you need to include "ForceTubeVRFunctions.h" before. You don't have to instantiate UForceTubeVRFunctions, because all these functions are static.
Don't forget to turn on your bluetooth with a paired ForceTubeVR before any test.



Before all things :

In the [ProjectDir]\Plugins\ForceTubeVRForUE4 directory, you have some dll. The dll named ForceTubeVR_API_x32.dll and ForceTubeVR_API_x64.dll are executed at launch by editor and packaged games.
ForceTubeVR_API_x32_full.dll and ForceTubeVR_API_x64_full.dll are fully fonctionnal but will cause some difficulties in packaging (fail with an Error_UnknownCookFailure).
For this reason, you have to replace ForceTubeVR_API_x32.dll and ForceTubeVR_API_x64.dll by ForceTubeVR_API_x32_full.dll and ForceTubeVR_API_x64_full.dll (by renaming, because you have to keep the same names) to make the plugin works in Windows (in editor and packaged games).
But then you'll have to replace ForceTubeVR_API_x32.dll and ForceTubeVR_API_x64.dll by ForceTubeVR_API_x32_inert.dll and ForceTubeVR_API_x64_inert.dll before you launch a packaging of your project (or it will fail with an Error_UnknownCookFailure).
In a game packaged this way, you can go to WindowsNoEditor\QuestCpp21\Plugins\ForceTubeVRForUE4 to replace the inert dll by full dll (but you still have to keep the same names).



Fonctions:

	FORCETUBEVR void UForceTubeVRFunctions::Kick(uint8 power);

	FORCETUBEVR void UForceTubeVRFunctions::Rumble(uint8 power, float timeInSeconds);

	FORCETUBEVR void UForceTubeVRFunctions::Shot(uint8 kickPower, uint8 rumblePower, float rumbleDuration);

	FORCETUBEVR void UForceTubeVRFunctions::SetActiveResearch(bool active);

	FORCETUBEVR uint8 UForceTubeVRFunctions::TempoToKickPower(float tempo);

	FORCETUBEVR uint8 UForceTubeVRFunctions::GetBatteryLevel();

	FORCETUBEVR void UForceTubeVRFunctions::OpenAndroidBluetoothSettings(bool isInVR);



-----------------------------------------------------------Connect--------------------------------------------------------------------------

You have to connect and pair the ForceTubeVR to be able to use it with this plugin.
The ForceTubeVR himself have to be paired to Windows or Android via bluetooth standard connection. 
You can use the "BT Manager by ProTubeVR" app available in SideQuest (https://sidequestvr.com/#/app/19) to pair it with your Oculus Quest, or you can use (in Android) the OpenAndroidBluetoothSettings plugin method.

The plugin at game start will call once the method : void InitAsync();
 ---> so if the ForceTubeVR is already paired under windows and powered, then the forcetube will pass from "paired" state to "connected" state (can see it in your OS bluetooth manager).
at this point, once connected, all is good !

And, if the ForceTubeVR isn't paired or powered on game start, or was turned off during the game, or if the connection is lost for any other reason,
the fonction "InitAsync()" automatically reconnect the ForceTubeVR when Windows or Android detect the loss of connection
as well you didn't paused the dedicated thread by calling SetActiveResearch(false).



----------------------------------------------------------Haptic effects------------------------------------------------------------------------

ForceTubeVR integrate 2 main haptic effects :
Rumble and Kick


rumbleDuration : set rumble duration in second, 0.1 will activate rumble motor for 100ms (side note : under 0.03s, the motors are not activated enouph to give any effect). You can make a rumble without end setting this parameter to 0.



----------------------------------------------------------Rumble----------------------------------------------------------------

The rumble uses 2 "standard" rumble motors, one "small" (high frequency little effect) and one "big" (for loud rumble effect).
Those 2 motors are driven by the same signal as following :
-if rumble "power" is from 0 to 49% (0 to 126), only the small will spin (you can modulate the little motor speed, little motor max speed is reatch at 127 power value);
-if rumble "power" is from 50% to 100% (127 to 255), Small motor is driven max speed, big motor spin according to "power" value (255 give the max speed for both motors).
Rumble duration and power can be freely setted up, it depends of your needs. 
The "timeInSeconds" parameter is the rumble duration in seconds (example : 0.1 will activate rumble motor for 100ms). Under 0.03s, the motors are not activated enough to give any effect.

Fonction using it :

	FORCETUBEVR void Rumble(uint8 power, float timeInSeconds);
	FORCETUBEVR void Shot(uint8 kickPower, uint8 rumblePower, float rumbleDuration);



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

	FORCETUBEVR void Kick(uint8 power);
	FORCETUBEVR void Shot(uint8 kickPower, uint8 rumblePower, float rumbleDuration);



----------------------------------------------------------Shot-----------------------------------------------------------------

This method is a combination of the both Kick and Rumble methods. So, "Shot(kickPower, rumblePower, rumbleDuration)" is equivalent to "Kick(kickPower)" and "Rumble(rumblePower, rumbleDuration)".



----------------------------------------------------------TempoToKickPower-----------------------------------------------------------------

Use it to get the maximum kick power according to the duration ("tempo") between two shots. 
You can't always put kick power to 255 (100%) because if your tempo is too short, the ForceTubeVR motor won't have the time to reset itself between two shots and you will have some loss of kicks. 
It is useful if you want to make an autoshot with the higher kick power without loss of kick.

You can use this fonction to get the kick power, in connection with :

FORCETUBEVR void Kick(uint8 power);
FORCETUBEVR void Shot(uint8 kickPower, uint8 rumblePower, float rumbleDuration);



----------------------------------------------------------SetActiveResearch-----------------------------------------------------------------

If you call it with "true" as "active" parameter, the plugin will maintain a thread to watch the connection state of ForceTubeVR and reconnect if needed (this is the default state).
With false, the thread will be desactivated.



----------------------------------------------------------GetBatteryLevel-------------------------------------------------------------------

Will return a uint8 between 0 and 100. This is the percent of battery remaining in the currently connected ForceTubeVR.



----------------------------------------------------------OpenAndroidBluetoothSettings------------------------------------------------------

Only on Android, will try to open the bluetooth settings. Does nothing on Windows.
If you call it with "true" as "isInVR" parameter, it will try to open it by OculusTV to make it work in OculusQuest environment. 
With false, it will directly call the default android bluetooth settings, so it won't work on Oculus Quest but will on all Android smartphones.



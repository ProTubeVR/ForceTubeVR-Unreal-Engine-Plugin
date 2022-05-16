# Unreal Engine ForceTube Plugin

This Unreal Engine plugin allows you to implement our ForceTube haptic technology into your game.

## Table of contents

- [Installation](https://github.com/ProTubeVR/ForceTubeVR-Unreal-Engine-Plugin/blob/master/readme.md#installation)
- [Usage](https://github.com/ProTubeVR/ForceTubeVR-Unreal-Engine-Plugin/blob/master/readme.md#usage)
- [Functions](https://github.com/ProTubeVR/ForceTubeVR-Unreal-Engine-Plugin/blob/master/readme.md#functions)
    - [InitAsync](https://github.com/ProTubeVR/ForceTubeVR-Unreal-Engine-Plugin/blob/master/readme.md#initasync)
    - [SetActive](https://github.com/ProTubeVR/ForceTubeVR-Unreal-Engine-Plugin/blob/master/readme.md#setactive)
    - [KickChannel](https://github.com/ProTubeVR/ForceTubeVR-Unreal-Engine-Plugin/blob/master/readme.md#kickchannel)
    - [RumlbleChannel](https://github.com/ProTubeVR/ForceTubeVR-Unreal-Engine-Plugin/blob/master/readme.md#rumblechannel)
    - [ShotChannel](https://github.com/ProTubeVR/ForceTubeVR-Unreal-Engine-Plugin/blob/master/readme.md#shotchannel)
    - [ListConnectedForcetube](https://github.com/ProTubeVR/ForceTubeVR-Unreal-Engine-Plugin/blob/master/readme.md#listconnectedforcetube)
    - [ListChannels](https://github.com/ProTubeVR/ForceTubeVR-Unreal-Engine-Plugin/blob/master/readme.md#listchannels)
    - [AddToChannel](https://github.com/ProTubeVR/ForceTubeVR-Unreal-Engine-Plugin/blob/master/readme.md#addtochannel)
    - [RemoveFromCHannel](https://github.com/ProTubeVR/ForceTubeVR-Unreal-Engine-Plugin/blob/master/readme.md#removefromchannel)
    - [ClearChannel](https://github.com/ProTubeVR/ForceTubeVR-Unreal-Engine-Plugin/blob/master/readme.md#clearchannel)
    - [UpdateSelectChannel](https://github.com/ProTubeVR/ForceTubeVR-Unreal-Engine-Plugin/blob/master/readme.md#updateselectchannel)
- [Weapons Settings](https://github.com/ProTubeVR/ForceTubeVR-Unreal-Engine-Plugin/blob/master/readme.md#weapons-settings)

## Installation
First, create a "Plugins" folder at the root of your project.  
Then, extract the plugin archive and copy it to the "Plugins" folder.  
Launch UE4 and make sure that the plugin is enabled (Edit -> Plugins -> Project -> Other -> FTUE4)

## Usage

This newer version gives you the possibility to administer the ForceTubes into channels to better manage single handed weapons : 
- (0) all (targets every ForceTubes, even those which aren't in any channels)
- (1) rifle (targets both riffleButt and riffleBolt channels)
- (2) rifleButt
- (3) rifleBolt
- (4) pistol1
- (5) pistol2
- (6) other
- (7) vest

You can now :
- Make ForceTubes rumble, kick or shoot (rumble + kick)
- Add a ForceTube to a channel
- Remove a ForceTube from a channel
- Clear a channel from its ForceTubes
- List all connected ForceTubes
- List all channels with their linked ForceTubes

The plugin contains it's own level and UI for you to test.

## Functions

All the following functions are  available for both C++ and blueprint mode and are static.

***
### InitAsync
`static void InitAsync(bool pistolsFirst = false)`

This function starts the bluetooth connection and links all the ForceTubes paired to the PC / Android headset.
You must call it once before calling any other function.

If paired, the ForceTubes will connect to your app and be placed in different channels in this order :
**rifleButt** -> rifleBolt -> pistol1 -> pistol2 -> other -> vest -> **rifleButt**

if `pistolFirst` is set to true, the ForceTubes will be placed like this :
**pistol1** -> pistol2 ->rifleButt -> rifleBolt -> other -> vest -> **pistol1**

You can later add or remove a ForceTube to/from one or several channel(s)
***
### SetActive
`static void SetActive(bool active)`

Active by default (no need to set it to true on start)

Determines wether if the app will try to connect with any paired ForceTube. The plugin will maintain a thread that will periodically try to connect every ForceTubes in your device's list of paired bluetooth devices.

*i.e : SetActive(true) will allow you to connect your ForceTube to your app. Turn it on, pair it with your device, the ForceTube will rumble to indicate it's connected to your app. While SetActive is set to false, if a new ForceTube is paired to your device, it will NOT automatically connect to your app (if an already connected ForceTube disconnects for any reasons, it will NOT automatically reconnect)*

***
### KickChannel
`static void KickChannel(uint8 power, ForceTubeVRChannel channel)`

Sends a Kick request to all the Forcetubes linked to the targeted channel.

**power** is a int between 0 and 255

**channel** is a value from `enum class ForceTubeVRChannel { all, rifle, rifleButt, rifleBolt, pistol1, pistol2, other, vest}`
***
### RumbleChannel
`static void RumbleChannel(uint8 power, float timeInSeconds, ForceTubeVRChannel channel)`

Sends a Rumble Request to all the Forcetubes linked to the targeted channel.

**power** is a int between 0 and 255

**timeInSeconds** is a float between 0.5 and 0 and represents the rumble duration

**channel** is a value from `enum class ForceTubeVRChannel { all, rifle, rifleButt, rifleBolt, pistol1, pistol2, other, vest}`
***
### ShotChannel
`static void ShotChannel(uint8 kickPower, uint8 rumblePower, float rumbleDuration, ForceTubeVRChannel channel)`

Sends both a Kick and a Rumble request to all the Forcetubes linked to the targeted channel.
***
### TempoToKickPower
`static uint8 TempoToKickPower(float tempo)`

When making an autoshot (i.e. : a burst or automatic weapon), you need to make sure that the solenoid has enough time to retract before sending another kick or else it'll skip some kicks

This function returns the max usable power according to the **tempo** in seconds (time between two shots)
You can use it with KickChannel and ShotChannel when making an autoshot

*i.e : TempoToKickPower(0.15) will returns the max power of two consecutive shots separated by 0.15 seconds (150ms)*
***
### GetBatteryLevel
`static uint8 GetBatteryLevel()`

Returns the battery level of the first ForceTube, kind of obsolete since now listing all channels also returns the battery level of each ForceTubes (kept for retro compatibility with some games).
***
### ListConnectedForceTube
`static FString ListConnectedForceTube()`

Returns a stringified JSON object containing all connected ForceTubes

Exemple of return :
```
{
  "Connected" : [
    "ForceTubeVR XXXXXXXXXXXXX",
    "ForceTubeVR YYYYYYYYYYYYY"
  ]
}
```
***
### ListChannels
`static FString ListChannels()`

Returns a stringified JSON object containing every channel with its ForceTubes

Exemple of return : 
```
{
  "channels" : 
  {
    "other" : [],
    "pistol1" : [],
    "pistol2" : [],
    "rifleBolt" : [
      {
        "batteryLevel" : 0,
	"name" : "ForceTubeVR XXXXXXXXXXXXX"
      }
    ],
    "rifleButt" : [
      {
        "batteryLevel" : 0,
	"name" : "ForceTubeVR YYYYYYYYYYYYY"
      }
    ],
    "vest" : []
  }
}
```
***
### AddToChannel
`static bool AddToChannel(int nChannel, FString sName)`

Adds a ForceTube to a channel

**nChannel** represents a channel as an int. Value between 2 and 7 (all : 0 and rifle : 1 aren't real channels)

**sName** is the name of the ForceTube as a FString

Exemple : 
`AddToChannel(3, "ForceTubeVR XXXXXXXXXXXXX")` will add the ForceTubeVR XXXXXXXXXXXXX to the rifleBolt channel
***
### RemoveFromChannel
`static bool RemoveFromChannel(int nChannel, FString sName)`

Removes a ForceTube from a channel

**nChannel** represents a channel as an int. Value between 2 and 7 (all : 0 and rifle : 1 aren't real channels) 

**sName** is the name of the ForceTube as a FString

Exemple : 
`RemoveFromCHannel(3, "ForceTubeVR XXXXXXXXXXXXX")` will remove the ForceTubeVR XXXXXXXXXXXXX from the rifleBolt channel
***
### ClearChannel
`static void ClearChannel(int nChannel)`

Clears a channel from any ForceTube

**nChannel** represents a channel as an int. Value between 2 and 7 (all : 0 and rifle : 1 aren't real channels)

Exemple : 
`ClearChannel(5)` will empty the pistol2 channel
***
### UpdateSelectChannel
`static TArray<FString> UpdateSelectChannel(FString connectedForceTubes)`

Converts the result of **ListConnectedForceTube()**  into an array of FStrings (I used this to create the ForceTube Dropdown button in the demo level but it could come in handy)

## Weapons Settings

You can adjust the rumble power according to your liking but the rumble duration should be somewhere between 25ms and 100ms 

Here are some raw settings for making autoshots :

| Weapon's Name | Rate of Fire (delay between auto shots) | Percentage of Power | Value of Power |
|:-------------:|:---------------------------------------:|:-------------------:|:--------------:|
|     M1014     |                  250ms                  |         100%        |       255      |
|     SPAS12    |                  250ms                  |         100%        |       255      |
|      SKS      |                  125ms                  |         95%         |       242      |
|     M39EMR    |                  111ms                  |         81%         |       206      |
|      AKM      |                  100ms                  |         70%         |       178      |
|       G3      |                  100ms                  |         70%         |       178      |
|      Mk16     |                  100ms                  |         70%         |       178      |
|      Mk17     |                  100ms                  |         70%         |       178      |
|    AKS-74U    |                   91ms                  |         61%         |       156      |
|      AUG      |                   91ms                  |         61%         |       156      |
|      PKM      |                   91ms                  |         61%         |       156      |
|     TAR21     |                   91ms                  |         61%         |       156      |
|      SA80     |                   83ms                  |         53%         |       135      |
|      SVD      |                   83ms                  |         53%         |       135      |
|      G36      |                   83ms                  |         53%         |       135      |
|      AK5C     |                   83ms                  |         53%         |       135      |
|      M249     |                   83ms                  |         53%         |       135      |
|      MP5      |                   83ms                  |         53%         |       135      |
|      AK12     |                   77ms                  |         47%         |       120      |
|      Mk18     |                   77ms                  |         47%         |       120      |
|     M16A4     |                   71ms                  |         41%         |       105      |
|      552      |                   66ms                  |         36%         |       92       |
|     Famas     |                   66ms                  |         36%         |       92       |
|      P90      |                   62ms                  |         32%         |       82       |
|      VAL      |                   62ms                  |         32%         |       82       |
|     M40A5     |               bolt action               |         100%        |       255      |
|      SV98     |               bolt action               |         100%        |       255      |

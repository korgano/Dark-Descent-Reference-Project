# How to mod Xenomorphs and Humanoid Enemies with uAssetGUI

This guide will explain how to mod xenomorph and humanoid enemies with uAssetGUI. These assets have specific dependencies that make it impossible to access their stats without the `.usmap` file in the `uAssetGUI Dependency` folder.

## Setting up uAssetGUI

To set up uAssetGUI, we will be following the steps from the [Getting Started With UAssetGUI](https://unofficial-modding-guide.com/posts/uassetmodding/) tutorial on Unofficial Modding Guide. These steps have been modified to reflect Aliens: Dark Descent.

```
Download Mappings file: Mapping File

Open UAssetGUI and set the Engine version to 4.27 at the top right drop-down.

Go to Utils > Import mappings… and select and open the mapping file downloaded from [uAssetGUI Dependency](uAssetGUI Dependency) and name it "Aliens: Dark Descent".

Finally next to the drop-down where you set the engine version - select the mapping file you just opened from the drop-down.
```

Once this is done, you can open all Aliens: Dark Descent ZenTools/Retoc extracted uAsset/uEXP pairs without issues.

## Where to look for various stats

You will working with the following files when it comes to modding xenomorphs and humanoid enemies:

- AlienClasses/Egg/PDA_Egg
- AlienClasses/Queen/PDA_ClassQueen_40HP
- AlienClasses/Queen/PDA_ClassQueen_80HP
- AlienClasses/Queen/PDA_ClassQueen_AtmosphericNightmare
- AlienClasses/Queen/PDA_ClassQueen_Default
- AlienClasses/Queen/PDA_ClassQueen_M02
- AlienClasses/PDA_ClassChestBurster
- AlienClasses/PDA_ClassCrusher
- AlienClasses/PDA_ClassDrone
- AlienClasses/PDA_ClassDrone_FacingTheBeast
- AlienClasses/PDA_ClassDrone_PrologueLatimer
- AlienClasses/PDA_ClassFacehugger
- AlienClasses/PDA_ClassPraetorian
- AlienClasses/PDA_ClassRunner
- AlienClasses/PDA_ClassTitan_Default
- AlienClasses/PDA_ClassWarrior

- MarineClasses/PDA_Class_DarwinEra_Cultist_Marlow
- MarineClasses/PDA_Class_DarwinEra_Cultist_Melee
- MarineClasses/PDA_Class_DarwinEra_Cultist_Range
- MarineClasses/PDA_Class_DarwinEra_Guardian_Main
- MarineClasses/PDA_Class_Synthetic_Enemy_Main
- MarineClasses/PDA_Class_Weyland

It is recommended that you use the uAsset/uEXP pairs provided in the (Enemies with Rewards)[Enemies with Rewards] directory. These assets have been augmented with the fields `CommandPointRewardedOnKill` and `ExperienceRewardedOnKill`, which can be set to whatever values you desire. Game defaults for these values are as follows:

```
CommandPointRewardedOnKill: 0.1 or 0.05 (Facehuggers and Darwin Era Cultists)
ExperienceRewardedOnKill: 0
```

Enemy stats will be located under `Export Data > Export 1 ([PDA NAME])`. See Below for visual examples of both types of asset:

![Stats page for the Chestburster](/Images/AliensDD-AlienStats.png)
![Stats page for the Weyland-Yutani Commandos](/Images/AliensDD-HumanoidStats.png)

Some stats require you to expand entries in the left hand menu to access the actual values. 
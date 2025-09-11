# Creating New Game Asset Files
Creating new content assets for Aliens: Dark Descent is one of the main uses for the `ASF_Updated` Unreal Project. However, to create content, you need to know **what kind** of asset you need to create.

This tutorial will go over the two main steps in content creation:
1. Finding out what type of asset to create.
2. Creating the asset itself in the editor.

There are two primary ways to find out asset type, and we'll go over both.

## Finding Asset Types with Fmodel
For detailed instructions on how to start using Fmodel, check out this YouTube tutorial:

[![Fmodel Tutorial](https://img.youtube.com/vi/5Y1E9y6OAK4/0.jpg)](https://www.youtube.com/watch?v=5Y1E9y6OAK4)

1. Download and install Fmodel. Fmodel is a tool for examining the data inside Unreal Engine 4+ games.
2. Add Aliens: Dark Descent to Fmodel through the Selector interface. The game uses UE4.27, and does **NOT** have an AES key.
3. Once the game is loaded into Fmodel, you should see a list of all the `.pak`/`.utoc` files. Set Loading Mode to `All`.

![Fmodel upon loading Aliens: Dark Descent.](/Images/Assets/ADD-asset-001.png)

4. Click `Load`.

![Loading Aliens: Dark Descent.](/Images/Assets/ADD-asset-002.png)

5. The interface will display the Folders. All files for Dark Descent are within folder `ASF`.

![Initial layer of Dark Descent folder structure.](/Images/Assets/ADD-asset-003.png)

6. Go to the `Content` folder. This is where the files you want to live.

![Dark Descent folder containing game content.](/Images/Assets/ADD-asset-004.png)

7. For this tutorial, we will look at an upgrade. Select the `Blueprint`, then `Data`. 

![Focus on Blueprint/Data when navigating through the file structure.](/Images/Assets/ADD-asset-005.png)

8. The `Data` folder contains most moddable files under a variety of folders. Select `Upgrades`.

![The Data folder under Blueprints is where most modding will occur.](/Images/Assets/ADD-asset-006.png)

9. Once you open the `Upgrades` folder, you will see a list of asset files.

![List of asset files in Dark Descent Upgrades folder.](/Images/Assets/ADD-asset-007.png)

10. Open `DT_Upgrades`. This file controls what upgrades are available to purchase in the game. Note the Class value: `DataTable`

![JSON style dump of DT_Upgrades file.](/Images/Assets/ADD-asset-008.png)

11. Check other files as necessary for their Class.

## Finding Asset Types with uAssetGUI

1. Open uAssetGUI. Follow the [Xenomorph and Humanoid Enemy Modding Guide](/Modding%20Guides
/xenomorph-cultist-modding.md) to ensure that you have the .usmap file loaded to ensure maximum file compatibility.
2. Open the folder containing your dumped Dark Descent assets and begin navigating to your target folder (for example, `/Blueprint/Data/Upgrades`).

![Navigating Dark Descent asset dump folders in uAssetGUi.](/Images/Assets/ADD-asset-009.png)

3. Open `DT_Upgrades`, then select `Import Data`. Under column `ClassName`, look for `Class`. The `ObjectName` column of that row will have the class type (`DataTable`).

![Finding the Class in the DT_Upgrades Import Data.](/Images/Assets/ADD-asset-010.png)

4. Open any other file in the `Upgrades` folder. In this case, `PDA_Upgrade_Backpack`. Selecting `Import Data` **will** show the `Class` (`UpgradeDataAsset`), but it is in a different location in the list.

![Finding the Class in the PDA_Upgrade_Backpack Import Data.](/Images/Assets/ADD-asset-011.png)

## Creating Assets in the ASF_Updated Project
Now that we know what assets to make (and modify), we can begin working in Unreal Engine.

**NOTE:** This is **not** a comprehensive showing of all the asset types and their settings. Some experimentation will be required.

### What Assets to NOT Create
Do **not** attempt to create the full Marine/enemy class files. They have so many references to other assets that they will require **massive** amounts of dummy files (blank files with the same names and locations of required assets). Modding these files will be **much** easier with uAssetGUI.

See the [Xenomorph and Humanoid Enemy Modding Guide](/Modding%20Guides
/xenomorph-cultist-modding.md) for more details.

1. Open the `ASF_Updated` uProject file in Unreal Engine 4.27. If necessary, set your content browser to `Content > Blueprint`.

![The default view of the Unreal content browser.](/Images/Assets/ADD-asset-012.png)

2. Navigate to `Content > Blueprint > Data > Upgrades`. As you can see here, I already have a variety of functional and dummy assets available from prior work.

![Populated Upgrades folder with functional and dummy assets.](/Images/Assets/ADD-asset-013.png)

3. To create a new asset, first right click in the content browser.

![Create Asset menu.](/Images/Assets/ADD-asset-014.png)

4. Hover over `Miscellaneous` to see a variety of asset types that can be created.

![The most common asset types under Miscellaneous are Data Asset, Data Table, String Table.](/Images/Assets/ADD-asset-015.png)

5. Select `Data Asset` from the list.

![Data Asset highlighted for creation.](/Images/Assets/ADD-asset-016.png)

6. This will then give you a modal labelled `Pick Data Asset Class`. There's a fairly lengthy list, since these were defined in code by the developers. You can type `UpgradeDataAsset` into the search bar to narrow down the list.

![The Pick Data Asset Class modal shows all data asset types available for creation.](/Images/Assets/ADD-asset-017.png)

![The search bar on the Pick Data Asset Class can filter down the list.](/Images/Assets/ADD-asset-018.png)

7. Name the newly created file. Sticking with the established name scheme of the folder is a good idea, especially if you're working with DataTables later. In this case, name the asset `PDA_Upgrade_ITEM`.

![Name your new Data Asset file.](/Images/Assets/ADD-asset-019.png)

8. open the data asset to configure it.

## Configuring a Data Asset
Data Assets have **many** settings, with many settings being dependent on the specific type of asset you have created. This section will therefore focus on familiarizing you with **how** to configure a data asset, but will also be useful for certain asset creation processes.

1. Open your new data asset. Since this is an upgrade data asset, it will come in two sections.

If you need help/inspiration on how to configure the asset, examine similar assets in Fmodel.

![A balnk upgrade data asset.](/Images/Assets/ADD-asset-020.png)

2. The `Class Meshes` field is going to be ignored in 99.999999% of circumstances. Unless you have 3D model/texture assets for new accessories, it is absolutely useless.

The first field to pay attention to is `Production Cost`. Expand secion, then click `Edit` for `Key (Gameplay Tag)`. This will give a long list of options that can be referenced.

![Aliens: Dark Descent gameplay tag list.](/Images/Assets/ADD-asset-021.png)

3. For `Production Cost`, select `Resource`, then `Material`. Type a whole number in the `Value (Int)` field.

![Selecting `Resource.Material`.](/Images/Assets/ADD-asset-022.png)

4. We can skip `Authorized Marine Class Query` for the moment, because its functionality and set up is seen later.

`Prerequesite Attributes` is an optional array that is also duplicated later. Clicking the dropdown allows you to pick any attribute asset, which controls the perks Marines get. Theoretically, you can use this to make specific items/attributes that only take effect if Marines have multiple specific attributes, but this has not been tested.

**NOTE**: If you want to use the vanilla game attributes, you **will** need to create dummy files in `Content > Blueprint > Data > MarineAttributes` with the correct names.

![Aliens: Dark Descent attribute list.](/Images/Assets/ADD-asset-023.png)

5. Next is `ShortDescription`. This interface also applies to `Title` and `Description`.

The best way to handle this is to create a `StringTable` file under `Content > StringTable`. The first dropdown will be the specific StringTable, then the second will be a specific key. (For example `NewItems.DemoAssetShort`.)

![Aliens: Dark Descent ShortDescription/Title/Description interface where you can reference string table values.](/Images/Assets/ADD-asset-024.png)

6. `Attribute Tag` is another `GameplayTag` field. Here, you want to expand the `Add New Gameplay Tag` swction. In the `Name` field, you will type `Upgrade.Marine.ITEM`.

![Aliens: Dark Descent gameplay tag list focusing on Upgrade tags.](/Images/Assets/ADD-asset-025.png)

7. `Icon` requires you to import a 128x128 PNG file. For consistency, place it in `Content > Texture > UI > Icons > Attributes`. Retaining the naming scheme of `T_Icon_Attributes_NAME` is optional.

![Aliens: Dark Descent interface for selecting icon/tecxture files.](/Images/Assets/ADD-asset-026.png)

8. `Small Icon` requires importing a 56x58 PNG file. For consistency, place it in `Content > Texture > UI > Icons > Attributes`. Retaining the naming scheme of `T_Icon_Attributes_Little_NAME` is optional.

![Aliens: Dark Descent interface for selecting small icon files.](/Images/Assets/ADD-asset-027.png)

9. `Attribute Effects` are the assets that actually apply the stat modifiers. This is an array that theoretically can support multiple effects, but has not been tested.

In this example, we will apply two. **Note:** The interface allows you to pick **any** `Attribute Effect`, from **any** folder.

![Aliens: Dark Descent interface for selecting attribute effects.](/Images/Assets/ADD-asset-028.png)

![Selecting attribute effect and seeing its file path.](/Images/Assets/ADD-asset-029.png)

10. `Consumable Items at Start` allows you to add extra supplies to a soldier at the start of a mission. The options are `AmmoClip`, `CarryingCapacity`, `MedicalSupplies`, `SentryGun`, and `Tool`.

Set `Value (Int)` to a whole number to add supplies.

![Aliens: Dark Descent gameplay tag list focusing on Supplies tags.](/Images/Assets/ADD-asset-030.png)

11. `Multi Level Attribute` and `Lower Level Attribute Tag` are only required when you have something that requires multiple levels, like Sharpshooter 1/2/3 or the Tactical Drone upgrades.

![Supporting multiple levels requires clicking a check box and then selecting an attribute tag that a unit must have.](/Images/Assets/ADD-asset-031.png)

12. `Query to Respect on Marine Attributes` is a fairly complicated system of logical querying, which may not have complete parity with what the developers had. You will probably want to use `All Tags Match` if you want to restrict an item/attribute to a specific class.

![Aliens: Dark Descent Tag Editor for Query to Respect for an attribute/upgrade.](/Images/Assets/ADD-asset-032.png)

13. `Unlock Marine Rank` is a simple dropdown with 6 ranks:

- `Private` = Level 2
- `Specialist` = Level 3
- `Veteran` = Level 6
- `Hero` = Level 10
- `Legend` = Level 15

![Dropdown showing the Marine rank levels that unlock various skills/upgrades.](/Images/Assets/ADD-asset-033.png)

14. `Forbidden Classes` requires dummy assets in `Content > Blueprint > Data > MarineClasses` to select the class you do **not** want the attribute/upgrade to apply to.

**NOTE:** This might be easier to accomplish through the use of a `No Expressions Match`/`No Tags Match` `Query to Respect on Marine Attributes`.

![Dropdown showing the Marine rank levels that unlock various skills/upgrades.](/Images/Assets/ADD-asset-034.png)
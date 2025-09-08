# Cooking Project Assets to Pack with Retoc
Cooking is the process of converting project assets from development friendly formats into memory usage and/or performance optimized formats for use in games.

The process generates `.uEXP`/`.uAsset` files, which can be packaged by retoc, allowing modders to skip UE4.27's lengthy packaging process, **AND** combine simple uAssetGUI file mods with newly created files.

# Process
1. Open the `ASF_Updated` project file with Unreal Engine 4.27. This project has a number of dummy asset files that will generate non-functional cooked assets.

![UE4.27 ASF_Updated project interface.](/Modding%20Guides/Images/ADD-cooking-001.png)

2. Click `File`.

![Clicking file in the UE4.27 ASF_Updated project interface.](/Modding%20Guides/Images/ADD-cooking-002.png)

3. Click `Cook Content for Windows`.

![Clicking Cook Content for Windows in UE4.27 ASF_Updated project interface.](/Modding%20Guides/Images/ADD-cooking-003.png)

4. The cooking process will immediately begin. It will be fairly fast, depending on the complexity and file size of your assets.

![Cooking content message in UE4.27 ASF_Updated project interface.](/Modding%20Guides/Images/ADD-cooking-004.png)

5. Open up File Exporer/your file management app and navigate to where you're storing the `ASF_Updated` project folder. (Ex: `D:\EGS\Projects\ASF_Updated\`)

6. Navigate to the `Saved` folder. (Ex: `D:\EGS\Projects\ASF_Updated\Saved\`)

![Clicking on Cooked folder in ASF_Updated project Saved folder.](/Modding%20Guides/Images/ADD-cooking-005.png)

7. You should see a folder named `Cooked`, which is where all your cooked `.uEXP`/`.uAsset` files will be. They will be several folders down, first appearing at the `Content` folder. (Ex: `D:\EGS\Projects\ASF_Updated\Saved\Cooked\WindowsNoEditor\ASF\Content\`)

![Cooked assets at ASF_Updated\Saved\Cooked\WindowsNoEditor\ASF\Content\.](/Modding%20Guides/Images/ADD-cooking-006.png)

8. Navigate to the specific folder where your created assets reside. (Ex: `D:\EGS\Projects\ASF_Updated\Saved\Cooked\WindowsNoEditor\ASF\Content\Blueprint\Data\Upgrades`)

![Cooked Upgrade asset files at ASF\Content\Blueprint\Data\Upgrades.](/Modding%20Guides/Images/ADD-cooking-007.png)

9. Copy the `.uEXP`/`.uAsset` files to a new/existing mod folder (ex: `D:\AliensDarkDescent\SomeModName\ASF\Content\Blueprint\Data\Upgrades`).
10. Follow the [retoc guide](Modding%20Guides/retoc-guide.md) to generate the `.pak`/`.utoc`/`.ucas` files for the mod.
# How to Use Retoc to Extract Files and Pack Mods

## What is Retoc?

[Retoc is a command line utility that allows for extraction and repacking of Zen IO Store assets.](https://github.com/trumank/retoc) Aliens: Dark Descent, other Unreal Engine 4.27 games, and all UE5+ games use this format.

For modding with uAssetGUI, the `to-legacy` option is required to extract files from the game. `to-zen` is required to repack the files.

For ease of use, please use the files found under (Generator Files\Retoc).

## Packing Mods and Extracting Assets

![Retoc TUW GUI set to pack mod files with version set to UE4_27, folder path to assets, and filename set.](/Modding%20Guides/Images/retoc-gui-tutorials-01.png)

To pack a mod, do the following:
- Click browse and find the folder containing your modded files.
- Copy the folder path from the modded files path, paste it in the `Output .utoc File` box.
- Tack on your mod's file name to the end of the path.
- Set engine version to `UE4_27`.
- Optional: Set a file name in a `Batch file name` to create a script for redoing the command.

To switch to extracting content, click `Menu` in the top left corner, then pick `Unpack GUI`:
![Retoc TUW GUI with selector for repacking and unpacking IOstore assets open in the top left corner.](/Modding%20Guides/Images/retoc-gui-tutorials-02.png)

To extract files from the game, do the following:
![Retoc TUW GUI with selector for repacking and unpacking IOstore assets open in the top left corner.](/Modding%20Guides/Images/retoc-gui-tutorials-03.png)

- Click browse for `Input path` and find the folder containing the game's `Content/Pak`.
- Click browse for `Output directory` and set your output folder.
- Optional: check the boxes for skipping conversion/compression of shader libraries.
- Optional: Use a filter like `-f GOP_` to select specific files to extract.


# Adding More Starting Marines

## 

## Increasing the number of starting Marines from 10 to 11

**Part 1**

This guide, while labelled as Basic, assumes the reader has completed the ‘[Installation](https://docs.google.com/document/d/1EM_19oTMVMTLGHRn6P2hYsg3I2L7yrqU91Dwhgr9F30/edit?usp=sharing)’ and ‘My First Mod’ tutorials and has some familiarity with .json files. If you aren’t familiar with .json files this isn’t a big concern for this guide, but you should make a point of becoming more comfortable editing these files when modding for Dark Descent. Many changes that can be made in uAssetGUI can also be made in a .json file.

To begin, let’s open up the ‘PDA\_BMStart.uasset’ located in ‘Content/Blueprint/Data/BaseManagement’ in the folder you keep your Extracted/Unpacked Files. If you don’t have this file, open up Retoc-Tuw and Unpack all the .pak files for Dark Descent while using the filter ‘-f Blueprint’, this will provide you what you need. **Though be warned, doing so will overwrite any other Blueprint files you might already have.**

Once we have the .uasset file open in uAssetGUI you should immediately save it as a .json file somewhere easily accessible within your Master Folder. If you’ve followed the Installation Guide you can drop it in your ‘Working’ folder. Once saved, go ahead and open it up using Notepad++ or whatever program you’ve downloaded that’s capable of reading .json files. 

Scroll all the way down to Line 256 and we can get started. You’re going to be copy & pasting a large code block and it’s very important that you ensure that you cover everything within it (between and including Lines 256 and 715\) otherwise there are going to be errors later. Line 256 should only have a single character on it, a ‘{‘, this is the opening bracket for this code block. You’re going to want to start here and copy everything from this Line to Line 715\. You’ll be able to follow a highlighted line if you select the opening bracket (the ‘{‘) all the way to Line 715\. **Once again, ensure everything in-between is correctly selected as well, but also that on Line 715 you select both the closing bracket (the ‘}’) and the ‘,’ after it.** When you’re sure everything’s selected you can right click \-\> copy or use the shortcut Ctrl+C. 

**Part 2**

With this code block still saved to your clipboard, scroll all the way back up to Line 256 where we started and click just before the ‘{‘. Hit enter once so that everything is moved down a line and that Line 256 is now empty. Click back up to Line 256 and Paste in the Code Block you have copied into it. Once that’s done, your view might have moved all the way down to the bottom of what you just pasted in. While you’re here, double-check that the last line you just pasted in was ‘},’ and then scroll back up to Line 256\.

At this point we’ve successfully added a new Marine to our Starting Roster, however they are a duplicate of a Marine already in there, Name and all. So let’s go about changing this. You can save the .json file now that you’ve made this change and then open it up using uAssetGUI. Go to Export Data \-\> Export 1 \-\> Starting Marines. If your change has been made correctly the number after Starting Marines should now show (11). Expand Starting Marines and select the first Entry. This is our duplicate Marine that needs some changes. 

With the first Entry selected the Editor pane of uAssetGUI should now be filled. Go down to ‘Trait’ at number 16 and double-click ‘PDA\_Trait\_Conspirator’. Backspace what’s in there and replace it with ‘PDA\_Trait\_Jinx’ without the ‘’ (if you want to use another Trait you can, just look at the other Marine Entries and copy one of their Traits instead). When that’s typed out, hit Enter and the box below it should get selected. Return to the Left Pane and Expand the first StartingMarines Entry by clicking the ‘+’ button next to it. Click ‘Customisation’ at the bottom, and the Editor Pane should get filled up once again.

Changing the name of a Marine isn’t as straight-forward as one might expect. The Game reads from a selection of names from a StringTable, so we can’t go naming our Marine ‘Dirty Harry’ unless we add that corresponding name to said StringTable. For now let’s give him a less well-known name, ‘ColtonFoster’, which is in the StringTable. Make sure there are no spaces in this name, and hit Enter when you’re done. 

The way things are set up right now is that the Game will randomize our new Marine’s appearance when a New Game is started so you don’t need to change any of those values. For those curious, you could mess around with the numerical values of these Indexes (FacialHair, BodyScar etc.) if you want and test it in-game. Different values will give you different results, and should be added in an ascending way, starting at 0\. In many cases ‘-1’ is the Value associated with Randomize when it comes to Marine Customisation. 

If you want to change your Marine’s gender you need to alter both the Gender and VoiceProfile entries in the Editor Pane. Start by double-clicking ‘EGender::MALE’ and change it to ‘EGender::FEMALE’. Now move down to ‘EVoiceProfile::MALE\_1’ and change this to ‘EVoiceProfile::FEMALE\_1’. If you simply want to change a Marine’s VoiceProfile you can change ‘1’ to ‘2’ or vice-versa.

With our changes made, let’s save our File in uAssetGUI and make sure we call it ‘PDA\_BMStart’ and save it in the .uasset file type. From here if we use Retoc-Tuw to repack this file into a .pak we’ll find our new Marine in our Deployment Menu when we go on our first run to Dead Hills. Because we placed our new Marine at the top of the Starting Marines list, he’ll appear first in our squad for this mission, giving us an easy way to verify that our change has worked.

**Wrapping Up**

There are other options we can choose to alter when we add our new Starting Marine including Starting Level, Starting XP and Mission Count. Don’t be afraid to experiment with these on your own account. The best way to learn how to mod any game is through experimentation and trying things out. Just be sure you always have a backup saved in-case you mess up\!
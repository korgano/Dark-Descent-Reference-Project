# Hacking Doors From Terminal

A partial capture of the Blueprint code controlling door hacking.

Variables and many types of functions are not fully reverse engineerable from these images, but they do show how the code works.

Missing functions have local variables that aren't parseable at the moment.

All images made with [UE Blueprint Graph Viewer](https://github.com/glgen/UEBlueprintGraphViewer/releases).

## File Location
`/Game/Blueprint/TacticalMode/Interaction/Terminal/BP_InteractiveComponent_FromTerminal`

## Ubergraph
![BP_InteractiveComponent_FromTerminal ubergraph showing main Blueprint code.](../Images/BP-Hacking-FromTerminal/-Game-Blueprint-TacticalMode-Interaction-Terminal-BP_InteractiveComponent_FromTerminal_UnlockDoor_Ubergraph.png)

## Functions
Several of these are based on Override functions that can be selected in the SDK.

### Does Need Supplies
![Does Need Supplies Function - based on Override Function](../Images/BP-Hacking-FromTerminal/-Game-Blueprint-TacticalMode-Interaction-Terminal-BP_InteractiveComponent_FromTerminal_UnlockDoor_DoesNeedSupplies.png)

### Get Door
![Get Door Function](../Images/BP-Hacking-FromTerminal/-Game-Blueprint-TacticalMode-Interaction-Terminal-BP_InteractiveComponent_FromTerminal_UnlockDoor_GetDoor.png)

### Get Resource Needed
![Get Resource Needed Function - based on Override Function](../Images/BP-Hacking-FromTerminal/-Game-Blueprint-TacticalMode-Interaction-Terminal-BP_InteractiveComponent_FromTerminal_UnlockDoor_GetResourceNeeded.png)

### Has Hacker Expert
![Has Hacker Expert Function](../Images/BP-Hacking-FromTerminal/-Game-Blueprint-TacticalMode-Interaction-Terminal-BP_InteractiveComponent_FromTerminal_UnlockDoor_HasHackerExpert.png)

### Is Character Able to Interact
![Is Character Able to Interact - based on Override Function](../Images/BP-Hacking-FromTerminal/-Game-Blueprint-TacticalMode-Interaction-Terminal-BP_InteractiveComponent_FromTerminal_UnlockDoor_IsCharacterAbleToInteract.png)

### Is Interaction Allowed
![Is Interaction Allowed - based on Override Function](../Images/BP-Hacking-FromTerminal/-Game-Blueprint-TacticalMode-Interaction-Terminal-BP_InteractiveComponent_FromTerminal_UnlockDoor_IsInteractionAllowed.png)

### Is Interaction Available
![Is Interaction Available - based on Override Function](../Images/BP-Hacking-FromTerminal/-Game-Blueprint-TacticalMode-Interaction-Terminal-BP_InteractiveComponent_FromTerminal_UnlockDoor_IsInteractionAvailable.png)

### Update Terminal Screen
![Update Terminal Screen - based on Override Function](../Images/BP-Hacking-FromTerminal/-Game-Blueprint-TacticalMode-Interaction-Terminal-BP_InteractiveComponent_FromTerminal_UnlockDoor_UpdateTerminalScreen.png)
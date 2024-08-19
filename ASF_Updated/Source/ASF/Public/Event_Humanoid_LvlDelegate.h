#pragma once
#include "CoreMinimal.h"
#include "Event_Humanoid_LvlDelegate.generated.h"

class AHumanoid;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEvent_Humanoid_Lvl, AHumanoid*, Character, int32, _OldLvl, int32, _NewLvl);


#pragma once
#include "CoreMinimal.h"
#include "Event_Humanoid_XpDelegate.generated.h"

class AHumanoid;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEvent_Humanoid_Xp, AHumanoid*, Character, int32, _OldXp, int32, _NewXp);


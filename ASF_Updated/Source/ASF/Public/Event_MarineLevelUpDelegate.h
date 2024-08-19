#pragma once
#include "CoreMinimal.h"
#include "Event_MarineLevelUpDelegate.generated.h"

class AHumanoid;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_MarineLevelUp, AHumanoid*, Marine, int32, NbLevelUp);


#pragma once
#include "CoreMinimal.h"
#include "Event_Humanoid_boolDelegate.generated.h"

class AHumanoid;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_Humanoid_bool, AHumanoid*, Character, bool, B);


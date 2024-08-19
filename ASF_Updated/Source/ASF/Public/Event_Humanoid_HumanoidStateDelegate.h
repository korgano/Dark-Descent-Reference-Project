#pragma once
#include "CoreMinimal.h"
#include "EnumHumanoidState.h"
#include "Event_Humanoid_HumanoidStateDelegate.generated.h"

class AHumanoid;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_Humanoid_HumanoidState, AHumanoid*, Character, EnumHumanoidState, State);


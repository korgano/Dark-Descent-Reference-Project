#pragma once
#include "CoreMinimal.h"
#include "Event_Humanoid_ActionManagerDelegate.generated.h"

class AHumanoid;
class UHumanoidActionManager;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_Humanoid_ActionManager, AHumanoid*, _Character, UHumanoidActionManager*, _HumanoidActionManager);


#pragma once
#include "CoreMinimal.h"
#include "Event_HumanoidActionManager_ActionDelegate.generated.h"

class UAction;
class UHumanoidActionManager;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_HumanoidActionManager_Action, UHumanoidActionManager*, HumanoidActionManager, UAction*, Action);


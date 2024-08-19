#pragma once
#include "CoreMinimal.h"
#include "Event_HumanoidActionManagerDelegate.generated.h"

class UHumanoidActionManager;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_HumanoidActionManager, UHumanoidActionManager*, HumanoidActionManager);


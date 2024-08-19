#pragma once
#include "CoreMinimal.h"
#include "EventBroadcastParams.h"
#include "Event_TMEventSystem_EventBroadcastParams_boolDelegate.generated.h"

class ATMEventSystem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEvent_TMEventSystem_EventBroadcastParams_bool, ATMEventSystem*, EventSystem, const FEventBroadcastParams&, Params, bool, bIsReward);


#pragma once
#include "CoreMinimal.h"
#include "EnumAiMobilityState.h"
#include "Event_AIAlien_MovingStateChangedDelegate.generated.h"

class AAIController_Alien;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEvent_AIAlien_MovingStateChanged, AAIController_Alien*, AIController, EnumAiMobilityState, OldState, EnumAiMobilityState, NewState);


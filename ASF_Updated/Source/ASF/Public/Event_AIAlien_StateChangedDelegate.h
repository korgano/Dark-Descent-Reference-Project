#pragma once
#include "CoreMinimal.h"
#include "EnumAiState.h"
#include "Event_AIAlien_StateChangedDelegate.generated.h"

class AAIController_Alien;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEvent_AIAlien_StateChanged, AAIController_Alien*, AIController, EnumAiState, OldState, EnumAiState, NewState);


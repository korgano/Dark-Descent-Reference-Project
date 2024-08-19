#pragma once
#include "CoreMinimal.h"
#include "EnumAiEnemyMarineState.h"
#include "Event_AIMarine_StateChangedDelegate.generated.h"

class AAiController_Humanoid;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEvent_AIMarine_StateChanged, AAiController_Humanoid*, AIController, EnumAiEnemyMarineState, OldState, EnumAiEnemyMarineState, NewState);


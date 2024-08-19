#pragma once
#include "CoreMinimal.h"
#include "EnumAiEnemyMarineState.h"
#include "Event_Spawner_SquadStateDelegate.generated.h"

class AAIController_Squad;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_Spawner_SquadState, AAIController_Squad*, AIController_Squad, EnumAiEnemyMarineState, SquadState);


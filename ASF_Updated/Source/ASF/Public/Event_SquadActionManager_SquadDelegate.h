#pragma once
#include "CoreMinimal.h"
#include "Event_SquadActionManager_SquadDelegate.generated.h"

class ASquad;
class USquadActionManager;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_SquadActionManager_Squad, USquadActionManager*, SquadActionManager, ASquad*, Squad);


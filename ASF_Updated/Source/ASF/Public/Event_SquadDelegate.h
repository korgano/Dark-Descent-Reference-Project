#pragma once
#include "CoreMinimal.h"
#include "Event_SquadDelegate.generated.h"

class ASquad;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_Squad, ASquad*, Squad);


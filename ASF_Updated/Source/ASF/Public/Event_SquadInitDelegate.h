#pragma once
#include "CoreMinimal.h"
#include "Event_SquadInitDelegate.generated.h"

class ASquad;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_SquadInit, ASquad*, Squad);


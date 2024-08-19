#pragma once
#include "CoreMinimal.h"
#include "Event_EscapeZone_SquadDelegate.generated.h"

class AEscapeZone;
class ASquad;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_EscapeZone_Squad, AEscapeZone*, EscapeZone, ASquad*, Squad);


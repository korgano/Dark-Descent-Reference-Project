#pragma once
#include "CoreMinimal.h"
#include "Event_ASFPlayerState_SquadDelegate.generated.h"

class AASFPlayerState;
class ASquad;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_ASFPlayerState_Squad, AASFPlayerState*, PlayerState, ASquad*, Squad);


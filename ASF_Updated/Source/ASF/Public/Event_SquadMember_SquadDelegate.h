#pragma once
#include "CoreMinimal.h"
#include "Event_SquadMember_SquadDelegate.generated.h"

class ASquad;
class USquadMember;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_SquadMember_Squad, USquadMember*, SquadMember, ASquad*, Squad);


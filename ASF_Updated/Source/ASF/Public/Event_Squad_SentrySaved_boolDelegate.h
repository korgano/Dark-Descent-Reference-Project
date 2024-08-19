#pragma once
#include "CoreMinimal.h"
#include "SentrySaved.h"
#include "Event_Squad_SentrySaved_boolDelegate.generated.h"

class ASquad;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEvent_Squad_SentrySaved_bool, ASquad*, _Squad, const FSentrySaved&, _SentrySaved, bool, _Added);


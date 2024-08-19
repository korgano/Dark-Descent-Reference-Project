#pragma once
#include "CoreMinimal.h"
#include "Event_Squad_MovementCompletedDelegate.generated.h"

class ASquad;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_Squad_MovementCompleted, ASquad*, Squad);


#pragma once
#include "CoreMinimal.h"
#include "Event_Squad_IntDelegate.generated.h"

class ASquad;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_Squad_Int, ASquad*, Squad, int32, Value);


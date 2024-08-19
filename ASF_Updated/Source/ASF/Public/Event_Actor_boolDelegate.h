#pragma once
#include "CoreMinimal.h"
#include "Event_Actor_boolDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_Actor_bool, AActor*, Owner, bool, Visibility);


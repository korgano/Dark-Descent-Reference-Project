#pragma once
#include "CoreMinimal.h"
#include "GameplayEvent_EventDelegate.generated.h"

class AGameplayEvent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGameplayEvent_Event, AGameplayEvent*, GameplayEvent);


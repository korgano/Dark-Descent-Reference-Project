#pragma once
#include "CoreMinimal.h"
#include "GameplayAction_EventDelegate.generated.h"

class UGameplayAction;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGameplayAction_Event, UGameplayAction*, GameplayAction);


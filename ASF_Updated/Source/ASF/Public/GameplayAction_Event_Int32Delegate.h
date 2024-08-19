#pragma once
#include "CoreMinimal.h"
#include "GameplayAction_Event_Int32Delegate.generated.h"

class UGameplayAction;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGameplayAction_Event_Int32, UGameplayAction*, GameplayAction, int32, Status);


#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FactionPhaseEndDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FFactionPhaseEndDelegate, const FGameplayTag&, IncomingPhase);


#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FactionPhaseStartDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FFactionPhaseStartDelegate, const FGameplayTag&, PreviousPhase);


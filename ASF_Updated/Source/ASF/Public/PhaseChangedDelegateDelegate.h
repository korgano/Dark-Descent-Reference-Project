#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "PhaseChangedDelegateDelegate.generated.h"

class UFactionSystemic;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FPhaseChangedDelegate, UFactionSystemic*, FactionSystemic, const FGameplayTag&, OldPhase, const FGameplayTag&, NewPhase);


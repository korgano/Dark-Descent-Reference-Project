#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "PatrolAndGuardPathUpdatesDelegateDelegate.generated.h"

class UAlienSystemic;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FPatrolAndGuardPathUpdatesDelegate, UAlienSystemic*, AlienSystemic, const FGameplayTag&, OldPhase, const FGameplayTag&, NewPhase);


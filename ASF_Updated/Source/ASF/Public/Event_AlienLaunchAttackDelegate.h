#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Event_AlienLaunchAttackDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_AlienLaunchAttack, AActor*, ThingHited, FGameplayTag, AttackTag);


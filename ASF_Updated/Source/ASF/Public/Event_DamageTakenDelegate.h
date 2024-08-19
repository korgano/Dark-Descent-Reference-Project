#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EnumAlienAttackSide.h"
#include "Event_DamageTakenDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEvent_DamageTaken, AActor*, Actor, FGameplayTag, BodyPartHit, EnumAlienAttackSide, AttackSide);


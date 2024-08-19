#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Event_Actor_GameplayTagDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_Actor_GameplayTag, AActor*, ActorWounded, FGameplayTag, Tag);


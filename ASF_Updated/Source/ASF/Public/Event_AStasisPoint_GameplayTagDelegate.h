#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Event_AStasisPoint_GameplayTagDelegate.generated.h"

class AStasisPoint;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_AStasisPoint_GameplayTag, AStasisPoint*, StasisPoint, FGameplayTag, GameplayTag);


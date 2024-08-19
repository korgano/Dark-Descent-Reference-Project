#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Event_UEnnemyTrackingComponent_FGameplayTagDelegate.generated.h"

class UEnnemyTrackingComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_UEnnemyTrackingComponent_FGameplayTag, UEnnemyTrackingComponent*, InteractiveActor, FGameplayTag, NewPhase);


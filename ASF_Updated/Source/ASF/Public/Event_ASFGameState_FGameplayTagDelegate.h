#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Event_ASFGameState_FGameplayTagDelegate.generated.h"

class AASFGameState_TacticalMode;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_ASFGameState_FGameplayTag, AASFGameState_TacticalMode*, GameState, FGameplayTag, Tag);


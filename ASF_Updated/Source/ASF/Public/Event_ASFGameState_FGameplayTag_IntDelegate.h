#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Event_ASFGameState_FGameplayTag_IntDelegate.generated.h"

class AASFGameState_TacticalMode;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEvent_ASFGameState_FGameplayTag_Int, AASFGameState_TacticalMode*, GameState, FGameplayTag, Tag, int32, Number);


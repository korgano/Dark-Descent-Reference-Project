#pragma once
#include "CoreMinimal.h"
#include "EnumCharacterReactionType.h"
#include "Event_AnimReactionDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_AnimReaction, EnumCharacterReactionType, NewReaction);


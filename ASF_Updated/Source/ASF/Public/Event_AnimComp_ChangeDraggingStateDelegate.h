#pragma once
#include "CoreMinimal.h"
#include "EnumCharacterDraggingState.h"
#include "Event_AnimComp_ChangeDraggingStateDelegate.generated.h"

class AASFCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEvent_AnimComp_ChangeDraggingState, EnumCharacterDraggingState, AbductionState, AASFCharacter*, OtherCharacter, bool, _NoAnimation);


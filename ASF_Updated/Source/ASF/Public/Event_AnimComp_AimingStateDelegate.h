#pragma once
#include "CoreMinimal.h"
#include "EnumCharacterAimingState.h"
#include "Event_AnimComp_AimingStateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_AnimComp_AimingState, EnumCharacterAimingState, State);


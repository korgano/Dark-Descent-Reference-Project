#pragma once
#include "CoreMinimal.h"
#include "EnumJumpAnimPhase.h"
#include "Event_JumpDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_Jump, EnumJumpAnimPhase, JumpType, float, TimeJump);


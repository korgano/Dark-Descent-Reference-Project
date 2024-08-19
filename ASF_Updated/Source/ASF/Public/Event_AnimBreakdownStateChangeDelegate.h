#pragma once
#include "CoreMinimal.h"
#include "EnumCharacterBreakdownType.h"
#include "Event_AnimBreakdownStateChangeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_AnimBreakdownStateChange, EnumCharacterBreakdownType, NewBreakdownType);


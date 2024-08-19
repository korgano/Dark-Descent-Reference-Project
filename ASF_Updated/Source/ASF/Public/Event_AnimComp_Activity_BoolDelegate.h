#pragma once
#include "CoreMinimal.h"
#include "Event_AnimComp_Activity_BoolDelegate.generated.h"

class UActivity;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_AnimComp_Activity_Bool, UActivity*, Activity, bool, ValueBool);


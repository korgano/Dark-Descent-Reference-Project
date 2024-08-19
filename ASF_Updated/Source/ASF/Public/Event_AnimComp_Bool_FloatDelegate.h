#pragma once
#include "CoreMinimal.h"
#include "Event_AnimComp_Bool_FloatDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_AnimComp_Bool_Float, bool, ValueBool, float, ValueFloat);


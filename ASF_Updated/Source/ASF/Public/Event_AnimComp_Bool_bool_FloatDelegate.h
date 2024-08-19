#pragma once
#include "CoreMinimal.h"
#include "Event_AnimComp_Bool_bool_FloatDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEvent_AnimComp_Bool_bool_Float, bool, _ValueBool, bool, _ValueBool2, float, ValueFloat);


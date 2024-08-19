#pragma once
#include "CoreMinimal.h"
#include "Event_AnimComp_FloatDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_AnimComp_Float, float, Value);


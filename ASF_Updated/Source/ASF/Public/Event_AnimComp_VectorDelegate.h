#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Event_AnimComp_VectorDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_AnimComp_Vector, FVector, Value);


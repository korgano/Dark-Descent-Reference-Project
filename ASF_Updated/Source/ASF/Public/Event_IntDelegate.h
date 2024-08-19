#pragma once
#include "CoreMinimal.h"
#include "Event_IntDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_Int, int32, ID);


#pragma once
#include "CoreMinimal.h"
#include "Event_UAIActionComponentDelegate.generated.h"

class UAIActionComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_UAIActionComponent, UAIActionComponent*, UAIActionComponent);


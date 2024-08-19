#pragma once
#include "CoreMinimal.h"
#include "Event_CocoonDelegate.generated.h"

class ACocoon;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_Cocoon, ACocoon*, Cocoon);


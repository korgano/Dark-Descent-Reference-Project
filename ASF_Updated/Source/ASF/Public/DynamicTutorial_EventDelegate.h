#pragma once
#include "CoreMinimal.h"
#include "DynamicTutorial_EventDelegate.generated.h"

class UDynamicTutorial;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDynamicTutorial_Event, UDynamicTutorial*, DynamicTutorial);


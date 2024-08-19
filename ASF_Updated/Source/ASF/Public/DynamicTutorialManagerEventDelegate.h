#pragma once
#include "CoreMinimal.h"
#include "DynamicTutorialManagerEventDelegate.generated.h"

class UDynamicTutorialManagerComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDynamicTutorialManagerEvent, UDynamicTutorialManagerComponent*, DynamicTutorialManager);


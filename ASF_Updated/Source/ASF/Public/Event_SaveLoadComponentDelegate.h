#pragma once
#include "CoreMinimal.h"
#include "Event_SaveLoadComponentDelegate.generated.h"

class USaveLoadComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_SaveLoadComponent, USaveLoadComponent*, SaveLoadComponent);


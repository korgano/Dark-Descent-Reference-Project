#pragma once
#include "CoreMinimal.h"
#include "Event_OnActionReadyDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_OnActionReady, UObject*, _BindedObject);


#pragma once
#include "CoreMinimal.h"
#include "DelayOutputPinRefDelegate.generated.h"

class UAsyncCheckLoopWithTimeout;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDelayOutputPinRef, UAsyncCheckLoopWithTimeout*, ReferenceAsyncAction);


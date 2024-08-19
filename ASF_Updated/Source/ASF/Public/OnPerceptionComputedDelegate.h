#pragma once
#include "CoreMinimal.h"
#include "OnPerceptionComputedDelegate.generated.h"

class UPOIDefaultContainer;
class UTask_AsyncPerception;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPerceptionComputed, UTask_AsyncPerception*, AsyncPerception, UPOIDefaultContainer*, Result);


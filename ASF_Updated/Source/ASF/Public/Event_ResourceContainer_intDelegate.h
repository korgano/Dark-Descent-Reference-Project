#pragma once
#include "CoreMinimal.h"
#include "Event_ResourceContainer_intDelegate.generated.h"

class UResourceContainer;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_ResourceContainer_int, UResourceContainer*, Resource, int32, NewValue);


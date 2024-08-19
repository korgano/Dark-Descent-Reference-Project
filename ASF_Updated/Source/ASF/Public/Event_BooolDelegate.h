#pragma once
#include "CoreMinimal.h"
#include "Event_BooolDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_Boool, bool, B);


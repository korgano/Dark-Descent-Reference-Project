#pragma once
#include "CoreMinimal.h"
#include "Event_ActivityDelegate.generated.h"

class UActivity;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_Activity, UActivity*, Activity);


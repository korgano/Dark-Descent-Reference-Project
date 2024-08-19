#pragma once
#include "CoreMinimal.h"
#include "Event_ARoomDelegate.generated.h"

class ARoom;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_ARoom, ARoom*, Room);


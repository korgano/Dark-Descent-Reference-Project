#pragma once
#include "CoreMinimal.h"
#include "Event_AlienBreach_StartDelegate.generated.h"

class ADoor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_AlienBreach_Start, ADoor*, _AttackedDoor);


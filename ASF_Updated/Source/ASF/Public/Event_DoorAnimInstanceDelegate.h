#pragma once
#include "CoreMinimal.h"
#include "Event_DoorAnimInstanceDelegate.generated.h"

class UDoorAnimInstance;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_DoorAnimInstance, UDoorAnimInstance*, DoorAnimInstance);


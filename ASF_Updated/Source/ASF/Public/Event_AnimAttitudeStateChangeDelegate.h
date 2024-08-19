#pragma once
#include "CoreMinimal.h"
#include "EnumCharacterAnimAttitude.h"
#include "Event_AnimAttitudeStateChangeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_AnimAttitudeStateChange, EnumCharacterAnimAttitude, NewAttitudeType);


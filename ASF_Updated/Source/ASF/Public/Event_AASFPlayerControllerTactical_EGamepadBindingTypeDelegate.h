#pragma once
#include "CoreMinimal.h"
#include "EGamepadBindingType.h"
#include "Event_AASFPlayerControllerTactical_EGamepadBindingTypeDelegate.generated.h"

class AASFPlayerControllerTactical;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_AASFPlayerControllerTactical_EGamepadBindingType, AASFPlayerControllerTactical*, _ASFPlayerController, EGamepadBindingType, _GamepadBindingType);


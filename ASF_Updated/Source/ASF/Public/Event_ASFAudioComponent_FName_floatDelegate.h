#pragma once
#include "CoreMinimal.h"
#include "Event_ASFAudioComponent_FName_floatDelegate.generated.h"

class UASFAudioComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEvent_ASFAudioComponent_FName_float, UASFAudioComponent*, Player, FName, Param, float, Value);


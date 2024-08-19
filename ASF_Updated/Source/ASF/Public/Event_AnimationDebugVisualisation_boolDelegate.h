#pragma once
#include "CoreMinimal.h"
#include "Event_AnimationDebugVisualisation_boolDelegate.generated.h"

class AAnimationDebugVisualisation;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_AnimationDebugVisualisation_bool, AAnimationDebugVisualisation*, ObjectSecleted, bool, Selected);


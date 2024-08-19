#pragma once
#include "CoreMinimal.h"
#include "Event_CommandPointsComponent_float_boolDelegate.generated.h"

class UCommandPointsComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FEvent_CommandPointsComponent_float_bool, UCommandPointsComponent*, _CommandPointsComponent, float, _OldCompletion, float, _NewCompletion, bool, _DisplayFeedback);


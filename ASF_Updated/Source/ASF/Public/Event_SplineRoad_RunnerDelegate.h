#pragma once
#include "CoreMinimal.h"
#include "Event_SplineRoad_RunnerDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_SplineRoad_Runner, AActor*, Runner);


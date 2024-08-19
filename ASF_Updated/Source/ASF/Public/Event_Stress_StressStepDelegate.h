#pragma once
#include "CoreMinimal.h"
#include "EStressStep.h"
#include "Event_Stress_StressStepDelegate.generated.h"

class UStress_Component;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEvent_Stress_StressStep, UStress_Component*, Stress, EStressStep, _OldStressStep, EStressStep, _NewStressStep);


#pragma once
#include "CoreMinimal.h"
#include "OutputPin_Task_FloatDelegate.generated.h"

class UTask;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOutputPin_Task_Float, UTask*, Task, float, Value);


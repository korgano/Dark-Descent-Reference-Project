#pragma once
#include "CoreMinimal.h"
#include "Event_ObjectiveValidatorComponentDelegate.generated.h"

class UObjectiveValidatorComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_ObjectiveValidatorComponent, UObjectiveValidatorComponent*, ObjectiveValidator);


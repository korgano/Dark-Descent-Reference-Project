#pragma once
#include "CoreMinimal.h"
#include "Event_Action_ActionStepDelegate.generated.h"

class UAction;
class UActionStep;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_Action_ActionStep, UAction*, Action, UActionStep*, ActionStep);


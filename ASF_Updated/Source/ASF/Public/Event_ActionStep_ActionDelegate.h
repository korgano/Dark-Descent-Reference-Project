#pragma once
#include "CoreMinimal.h"
#include "Event_ActionStep_ActionDelegate.generated.h"

class UAction;
class UActionStep;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_ActionStep_Action, UActionStep*, ActionStep, UAction*, Action);


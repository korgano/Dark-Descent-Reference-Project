#pragma once
#include "CoreMinimal.h"
#include "EnumActionStatus.h"
#include "Event_ActionStep_EnumActionStatusDelegate.generated.h"

class UActionStep;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_ActionStep_EnumActionStatus, UActionStep*, ActionStep, EnumActionStatus, Status);


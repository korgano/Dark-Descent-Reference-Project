#pragma once
#include "CoreMinimal.h"
#include "Event_ActionStep_ActivityDelegate.generated.h"

class UActionStep_Activity;
class UActivity;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_ActionStep_Activity, UActionStep_Activity*, ActionStep, UActivity*, Activity);


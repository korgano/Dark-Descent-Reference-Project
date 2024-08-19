#pragma once
#include "CoreMinimal.h"
#include "Event_Squad_HumanoidMarine_EnumDestroyReasonDelegate.generated.h"

class AHumanoidMarine;
class ASquad;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_Squad_HumanoidMarine_EnumDestroyReason, ASquad*, Squad, AHumanoidMarine*, Character);


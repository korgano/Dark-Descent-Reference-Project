#pragma once
#include "CoreMinimal.h"
#include "Event_Squad_HumanoidMarineDelegate.generated.h"

class AHumanoidMarine;
class ASquad;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_Squad_HumanoidMarine, ASquad*, Squad, AHumanoidMarine*, Character);


#pragma once
#include "CoreMinimal.h"
#include "Event_Mission_AActorDelegate.generated.h"

class AActor;
class AMission;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_Mission_AActor, AMission*, Mission, AActor*, PerceiveGATrigger);


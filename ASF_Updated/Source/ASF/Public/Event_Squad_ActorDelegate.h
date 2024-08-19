#pragma once
#include "CoreMinimal.h"
#include "Event_Squad_ActorDelegate.generated.h"

class AActor;
class ASquad;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_Squad_Actor, ASquad*, Squad, AActor*, Actor);


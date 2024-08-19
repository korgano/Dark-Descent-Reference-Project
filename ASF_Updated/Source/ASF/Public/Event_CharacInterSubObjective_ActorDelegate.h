#pragma once
#include "CoreMinimal.h"
#include "Event_CharacInterSubObjective_ActorDelegate.generated.h"

class AActor;
class UCharacInteractionSubObjComp;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_CharacInterSubObjective_Actor, UCharacInteractionSubObjComp*, subobjective, AActor*, InteractedActor);


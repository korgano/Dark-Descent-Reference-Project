#pragma once
#include "CoreMinimal.h"
#include "Event_AnimComp_ActorDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_AnimComp_Actor, AActor*, Actor);


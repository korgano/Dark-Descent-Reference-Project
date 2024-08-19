#pragma once
#include "CoreMinimal.h"
#include "Event_AInGameCamera_ActorDelegate.generated.h"

class AActor;
class AInGameCamera;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_AInGameCamera_Actor, AInGameCamera*, Camera, AActor*, Actor);


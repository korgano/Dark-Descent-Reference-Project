#pragma once
#include "CoreMinimal.h"
#include "Event_NavigationalDisplayComponent_ActorDelegate.generated.h"

class AActor;
class UNavigationalDisplayComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_NavigationalDisplayComponent_Actor, UNavigationalDisplayComponent*, NavigationalDisplay, AActor*, Actor);


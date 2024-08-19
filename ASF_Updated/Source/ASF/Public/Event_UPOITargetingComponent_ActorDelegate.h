#pragma once
#include "CoreMinimal.h"
#include "Event_UPOITargetingComponent_ActorDelegate.generated.h"

class AActor;
class UPOITargetingComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_UPOITargetingComponent_Actor, UPOITargetingComponent*, _EnnemyTargetingComponent, AActor*, _SpotedEnemy);


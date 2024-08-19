#pragma once
#include "CoreMinimal.h"
#include "Event_UPOITargetingComponent_Actor_ActorDelegate.generated.h"

class AActor;
class UPOITargetingComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEvent_UPOITargetingComponent_Actor_Actor, UPOITargetingComponent*, _EnnemyTargetingComponent, AActor*, _OldTarget, AActor*, _NewTarget);


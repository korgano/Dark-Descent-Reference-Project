#pragma once
#include "CoreMinimal.h"
#include "Event_AIAlien_TargetChangedDelegate.generated.h"

class AAIController_Alien;
class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEvent_AIAlien_TargetChanged, AAIController_Alien*, AIController, AActor*, OldTarget, AActor*, NewTarget);


#pragma once
#include "CoreMinimal.h"
#include "Event_AIGunShip_TargetChangedDelegate.generated.h"

class AAIController_GunShip;
class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEvent_AIGunShip_TargetChanged, AAIController_GunShip*, AIController, AActor*, OldTarget, AActor*, NewTarget);


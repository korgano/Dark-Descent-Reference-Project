#pragma once
#include "CoreMinimal.h"
#include "EnumAiGunshipState.h"
#include "Event_AIGunShip_StateChangedDelegate.generated.h"

class AAIController_GunShip;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEvent_AIGunShip_StateChanged, AAIController_GunShip*, AIController, EnumAiGunshipState, OldState, EnumAiGunshipState, NewState);


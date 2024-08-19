#pragma once
#include "CoreMinimal.h"
#include "Event_UEnnemyTrackingSystem_AASFCharacterDelegate.generated.h"

class AASFCharacter;
class UEnnemyTrackingSystem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_UEnnemyTrackingSystem_AASFCharacter, UEnnemyTrackingSystem*, EnnemyTrackingSystem, AASFCharacter*, EnemyTracking);


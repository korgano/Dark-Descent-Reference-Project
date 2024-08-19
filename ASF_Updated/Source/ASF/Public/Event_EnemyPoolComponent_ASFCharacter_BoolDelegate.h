#pragma once
#include "CoreMinimal.h"
#include "Event_EnemyPoolComponent_ASFCharacter_BoolDelegate.generated.h"

class AASFCharacter;
class UEnemyPoolComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEvent_EnemyPoolComponent_ASFCharacter_Bool, UEnemyPoolComponent*, EnemyPoolComponent, AASFCharacter*, Enemy, bool, IsDead);


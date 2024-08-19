#pragma once
#include "CoreMinimal.h"
#include "Event_UAttackComponent_UAttackDelegate.generated.h"

class UAttack;
class UAttackComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_UAttackComponent_UAttack, UAttackComponent*, AttackComponent, UAttack*, UsedAttack);


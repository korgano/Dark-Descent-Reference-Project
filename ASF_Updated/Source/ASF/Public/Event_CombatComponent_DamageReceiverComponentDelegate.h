#pragma once
#include "CoreMinimal.h"
#include "DamageResultStruct.h"
#include "Event_CombatComponent_DamageReceiverComponentDelegate.generated.h"

class UCombatComponent;
class UDamageReceiverComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEvent_CombatComponent_DamageReceiverComponent, UCombatComponent*, CombatComponent, UDamageReceiverComponent*, TargetComponent, const FDamageResultStruct&, DamageResult);


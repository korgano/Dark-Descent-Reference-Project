#pragma once
#include "CoreMinimal.h"
#include "Event_CombatComponent_ASFCharacterDelegate.generated.h"

class AASFCharacter;
class UCombatComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_CombatComponent_ASFCharacter, UCombatComponent*, CombatComponent, AASFCharacter*, Character);


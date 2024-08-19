#pragma once
#include "CoreMinimal.h"
#include "Event_AttackSelectedDelegate.generated.h"

class AASFCharacter;
class UAttack;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEvent_AttackSelected, AASFCharacter*, Character, UAttack*, OldAttack, UAttack*, NewAttack);


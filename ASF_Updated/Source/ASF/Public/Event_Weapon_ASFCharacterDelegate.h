#pragma once
#include "CoreMinimal.h"
#include "Event_Weapon_ASFCharacterDelegate.generated.h"

class AASFCharacter;
class AWeapon;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_Weapon_ASFCharacter, AWeapon*, Weapon, AASFCharacter*, Character);


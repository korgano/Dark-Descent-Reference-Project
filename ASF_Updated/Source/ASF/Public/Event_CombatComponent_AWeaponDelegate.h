#pragma once
#include "CoreMinimal.h"
#include "Event_CombatComponent_AWeaponDelegate.generated.h"

class AWeapon;
class UCombatComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_CombatComponent_AWeapon, UCombatComponent*, CombatComponent, AWeapon*, Weapon);


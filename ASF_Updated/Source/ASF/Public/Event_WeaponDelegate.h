#pragma once
#include "CoreMinimal.h"
#include "Event_WeaponDelegate.generated.h"

class AWeapon;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_Weapon, AWeapon*, Weapon);


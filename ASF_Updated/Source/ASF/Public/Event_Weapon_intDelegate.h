#pragma once
#include "CoreMinimal.h"
#include "Event_Weapon_intDelegate.generated.h"

class AWeapon;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_Weapon_int, AWeapon*, Weapon, int32, I);


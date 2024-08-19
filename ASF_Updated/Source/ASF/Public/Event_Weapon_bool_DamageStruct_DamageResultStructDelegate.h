#pragma once
#include "CoreMinimal.h"
#include "DamageResultStruct.h"
#include "DamageStruct.h"
#include "Event_Weapon_bool_DamageStruct_DamageResultStructDelegate.generated.h"

class AWeapon;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FEvent_Weapon_bool_DamageStruct_DamageResultStruct, AWeapon*, Weapon, bool, bResult, const FDamageStruct&, DamageStruct, const FDamageResultStruct&, DamageResultStruct);


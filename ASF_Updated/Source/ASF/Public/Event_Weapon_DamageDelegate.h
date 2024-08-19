#pragma once
#include "CoreMinimal.h"
#include "DamageResultStruct.h"
#include "WeaponTargetStruct.h"
#include "Event_Weapon_DamageDelegate.generated.h"

class AWeapon;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FEvent_Weapon_Damage, AWeapon*, _Weapon, FWeaponTargetStruct, _Target, bool, _bIsSuccess, const FDamageResultStruct&, _DamageResult);


#pragma once
#include "CoreMinimal.h"
#include "Event_Humanoid_WeaponDelegate.generated.h"

class AHumanoid;
class AWeapon;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_Humanoid_Weapon, AHumanoid*, Character, AWeapon*, Weapon);


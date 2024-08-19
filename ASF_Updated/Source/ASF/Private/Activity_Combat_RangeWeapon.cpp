#include "Activity_Combat_RangeWeapon.h"
#include "EnumActivityType.h"

UActivity_Combat_RangeWeapon::UActivity_Combat_RangeWeapon() {
    this->ActivityType = EnumActivityType::FIRING;
    this->bForceOwnerRender = false;
    this->CombatComponent = NULL;
    this->AnimationComponent = NULL;
    this->CombatRangeWeaponStep = EnumCombatRangeWeaponStep::AIMING_ORIENTATION;
    this->Target = NULL;
    this->CantRunEffect = NULL;
    this->FireAtWillEffect = NULL;
    this->TargetedEffect = NULL;
}

void UActivity_Combat_RangeWeapon::OnEndFiring() {
}

void UActivity_Combat_RangeWeapon::Firing() {
}

void UActivity_Combat_RangeWeapon::AimAtTarget() {
}



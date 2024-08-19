#include "MarineClassDataAssets.h"

UMarineClassDataAssets::UMarineClassDataAssets() {
    this->ClassTier = EMarineClassTier::RECRUIT;
    this->Bravery = 0.00f;
    this->AimingRotationSpeed = 0.00f;
    this->SocketTorchLight = TEXT("HeadSpotlightSocket");
    this->SocketWeaponEquipedPrimary = TEXT("R_Weapon_jnt");
    this->SocketWeaponEquipedSecondary = TEXT("R_Weapon_jnt");
    this->IsBodypartedMesh = false;
    this->EnableClothSimulation = false;
    this->AnimClass = NULL;
    this->AnimClassBaseManagement = NULL;
    this->SquadMemberLimit = 0;
    this->MinDelayBeforeMove = 0.10f;
    this->MaxDelayBeforeMove = 0.60f;
    this->SaveOnExtract = true;
    this->CharacterPrecision = 50.00f;
    this->InitialCloseRangePrecisionBonus = 20.00f;
    this->InitialCloseRangeDistance = 500.00f;
    this->CharacterMinimalHitChance = 10.00f;
    this->SoftCoverDodge_ForTarget = 30.00f;
    this->RunningDodge_ForTarget = 20.00f;
    this->PriorityInteractionBonus = 0.00f;
    this->bCanHaveItem = true;
}

bool UMarineClassDataAssets::HasAttributeWithTag(FGameplayTag _Tag) const {
    return false;
}



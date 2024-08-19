#include "GunShipClassDataAsset.h"

UGunShipClassDataAsset::UGunShipClassDataAsset() {
    this->TimeBetweenRoamTransitions = 10.00f;
}

TArray<FGunshipMovementProfile> UGunShipClassDataAsset::GetAllProfiles() const {
    return TArray<FGunshipMovementProfile>();
}



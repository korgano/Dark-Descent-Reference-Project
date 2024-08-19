#include "BM_Room_DataAsset.h"

UBM_Room_DataAsset::UBM_Room_DataAsset() {
    this->bIsAvailableAtStart = true;
    this->RepairMaterialsCost = 0;
}

FRoomUpgrade UBM_Room_DataAsset::GetUpgrade(FGameplayTag _Tag) const {
    return FRoomUpgrade{};
}



#include "IndoorCameraBoundary.h"

AIndoorCameraBoundary::AIndoorCameraBoundary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bOnlyRoofFade = false;
}



FSubLevelID AIndoorCameraBoundary::GetIndoorCameraBoundarySubLevelID_Implementation() const {
    return FSubLevelID{};
}



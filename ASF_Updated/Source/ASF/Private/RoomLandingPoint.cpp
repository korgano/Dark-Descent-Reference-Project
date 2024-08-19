#include "RoomLandingPoint.h"

ARoomLandingPoint::ARoomLandingPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

FRotator ARoomLandingPoint::GetOrientation_Implementation() const {
    return FRotator{};
}



#include "Grip.h"

AGrip::AGrip(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void AGrip::SetBestLocalPosition(FVector _BestLocalPosition) {
}

void AGrip::InitBestLocalPosition_Implementation(AHumanoid* _Humanoid) {
}

FVector AGrip::GetSizeGrip_Implementation() const {
    return FVector{};
}

FVector AGrip::GetBestLocalPositionOnVector(FVector _BoneReferencePosition, FVector _VectorDirection) {
    return FVector{};
}

FVector AGrip::GetBestLocalPosition() const {
    return FVector{};
}

FTransform AGrip::GetBestInteractionTransform_Implementation() {
    return FTransform{};
}



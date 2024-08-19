#include "TargetableObjectData.h"

UTargetableObjectData::UTargetableObjectData() {
    this->targetType = EnumTargetType::DOOR;
    this->DirectionWeight = 1.00f;
}

FVector UTargetableObjectData::GetLastComputedDirection() {
    return FVector{};
}

FVector UTargetableObjectData::GetGlobalTargetPoint() {
    return FVector{};
}

FVector UTargetableObjectData::ComputeTargetPoint(AActor* Origine, FVector _SquadCenter) {
    return FVector{};
}



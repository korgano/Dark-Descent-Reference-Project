#include "TargetableSegment.h"

UTargetableSegment::UTargetableSegment() {
    this->MaxDistFromNormal = 500.00f;
    this->DistanceBtwPoints = 100.00f;
}

TArray<FVector> UTargetableSegment::GeneratePointAllongNormal(FVector Origine, FVector Normal, float Z) {
    return TArray<FVector>();
}



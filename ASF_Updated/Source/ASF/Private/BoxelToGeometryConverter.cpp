#include "BoxelToGeometryConverter.h"

UBoxelToGeometryConverter::UBoxelToGeometryConverter() {
    this->BoxelSize = 0.00f;
    this->GridSize = 0;
}

void UBoxelToGeometryConverter::InitBoxelConverter(float _BoxelSize, int32 _GridSize) {
}

TArray<FPolygone> UBoxelToGeometryConverter::GetPolygones() {
    return TArray<FPolygone>();
}

void UBoxelToGeometryConverter::ComputeGeometryVertex() {
}

bool UBoxelToGeometryConverter::CanAddBoxelAtLocation(int32 X, int32 Y) {
    return false;
}

void UBoxelToGeometryConverter::AddBoxel(FVector BoxelPos, int32 X, int32 Y) {
}



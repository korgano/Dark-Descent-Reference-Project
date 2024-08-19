#include "ASFSplineComponent.h"

UASFSplineComponent::UASFSplineComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UASFSplineComponent::removeSplineMeshComponentOnOwner(UActorComponent* Component) {
}

void UASFSplineComponent::GetSplinePointsLocation(TArray<FVector>& _PointLocations, TEnumAsByte<ESplineCoordinateSpace::Type> _CoordinateSpace) {
}

void UASFSplineComponent::GetSplineBounds(FVector& _Origin, FVector& _BoxExtend, TArray<FVector>& _PointLocations, TEnumAsByte<ESplineCoordinateSpace::Type> _CoordinateSpace) {
}

void UASFSplineComponent::AfterPostEditChangeProperty_Implementation() {
}

USplineMeshComponent* UASFSplineComponent::addSplineMeshComponentOnOwner() {
    return NULL;
}



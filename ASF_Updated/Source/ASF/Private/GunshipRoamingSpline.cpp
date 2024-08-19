#include "GunshipRoamingSpline.h"
#include "Components/SplineComponent.h"

AGunshipRoamingSpline::AGunshipRoamingSpline(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Spline = CreateDefaultSubobject<USplineComponent>(TEXT("Spline"));
}

USplineComponent* AGunshipRoamingSpline::GetSpline() const {
    return NULL;
}

FVector AGunshipRoamingSpline::GetEvadeApproachLocationDelta() const {
    return FVector{};
}



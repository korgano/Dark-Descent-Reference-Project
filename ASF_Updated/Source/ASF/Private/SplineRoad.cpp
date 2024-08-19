#include "SplineRoad.h"
#include "Components/ArrowComponent.h"
#include "Components/SplineComponent.h"
#include "Components/StaticMeshComponent.h"

ASplineRoad::ASplineRoad(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("Arrow"));
    this->Spline = CreateDefaultSubobject<USplineComponent>(TEXT("Spline"));
    this->Arrow = (UArrowComponent*)RootComponent;
    this->ArrowNavigational = CreateDefaultSubobject<UArrowComponent>(TEXT("NavigationalArrow"));
    this->StartFeedback = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Start"));
    this->EndFeedback = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("End"));
    this->VelocityMax = 1000.00f;
    this->Acceleration = 100.00f;
    this->Deceleration = 200.00f;
    this->Spline->SetupAttachment(RootComponent);
    this->StartFeedback->SetupAttachment(RootComponent);
    this->EndFeedback->SetupAttachment(RootComponent);
}

void ASplineRoad::UpdateShape() {
}

void ASplineRoad::TryAttach() {
}

void ASplineRoad::RegisterPreviousRoad(ASplineRoad* R) {
}

void ASplineRoad::RegisterNextRoad(ASplineRoad* R) {
}

void ASplineRoad::OnPreviousRoadRemoved(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

void ASplineRoad::OnNextRoadRemoved(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

FRotator ASplineRoad::GetWorldRotationForSplineLocation(FSplineRoad_Location Loc) {
    return FRotator{};
}

FVector ASplineRoad::GetWorldLocationForSplineLocation(FSplineRoad_Location Loc) {
    return FVector{};
}

TArray<ASplineRoad*> ASplineRoad::FindPathTo(ASplineRoad* _From, ASplineRoad* _Dest) {
    return TArray<ASplineRoad*>();
}

void ASplineRoad::Detach() {
}

void ASplineRoad::DestroyRoad() {
}



#include "CurvedProjectile.h"
#include "Components/SceneComponent.h"
#include "Components/SplineComponent.h"
#include "Components/StaticMeshComponent.h"
#include "DynamiqueSaveLoadComponent.h"

ACurvedProjectile::ACurvedProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent "));
    this->DynamicSaveLoadComponent = CreateDefaultSubobject<UDynamiqueSaveLoadComponent>(TEXT("DynamicSaveLoadComponent"));
    this->SceneComponent = (USceneComponent*)RootComponent;
    this->StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent"));
    this->MotionStarted = false;
    this->StartTime = 0.00f;
    this->StaticMeshComponent->SetupAttachment(RootComponent);
    this->SplineComponent->SetupAttachment(RootComponent);
}

void ACurvedProjectile::StartMotion_Implementation(FVector _Destination) {
}

void ACurvedProjectile::SetProjectileDestination(FVector _Destination) {
}

void ACurvedProjectile::BuildSpline_Implementation(FVector _Destination) {
}



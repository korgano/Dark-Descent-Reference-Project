#include "PlacementRestrictionArea.h"
#include "Components/ArrowComponent.h"
#include "Components/SceneComponent.h"

APlacementRestrictionArea::APlacementRestrictionArea(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root Component"));
    this->RotationArrowComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("Rotation Arrow Component"));
    this->AreaShapeComponent = NULL;
    this->RestrictionAngle = 0.00f;
    this->RotationFeedbackLength = 200.00f;
    this->RotationArrowComponent->SetupAttachment(RootComponent);
}

void APlacementRestrictionArea::RevealRotation_Implementation(const FVector& StartLocation) {
}

void APlacementRestrictionArea::RevealLocation_Implementation() {
}

void APlacementRestrictionArea::RevealAll() {
}

bool APlacementRestrictionArea::IsRotationAuthorized_Implementation(const FRotator& Rotation) const {
    return false;
}

bool APlacementRestrictionArea::IsLocationInArea_Implementation(const FVector& Location) const {
    return false;
}

void APlacementRestrictionArea::InitializeRestrictionArea_Implementation() {
}

void APlacementRestrictionArea::HideRotation_Implementation() {
}

void APlacementRestrictionArea::HideLocation_Implementation() {
}

void APlacementRestrictionArea::HideAll() {
}

float APlacementRestrictionArea::GetRotationFeedbackLength() const {
    return 0.0f;
}

float APlacementRestrictionArea::GetRestrictionAngle() const {
    return 0.0f;
}

UShapeComponent* APlacementRestrictionArea::GetAreaShapeComponent() const {
    return NULL;
}



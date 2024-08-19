#include "CharacterRailSplineComponent.h"

UCharacterRailSplineComponent::UCharacterRailSplineComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MinimumDistanceBetweenDepartures = 400.00f;
    this->LerpToFinalStandingRotationOnLastSegment = true;
    this->GiveHandToAnimatorOnLastSegment = true;
}

void UCharacterRailSplineComponent::UpdateCharacterDataOnIndexIncrease(FRailDrivenCharacterData& CharacterData) {
}

void UCharacterRailSplineComponent::UnbindFromCharacterRailUpdate(AASFCharacter* Character, const FCharacterRailDelegate& Delegate) {
}

void UCharacterRailSplineComponent::UnbindFromCharacterDrop(AASFCharacter* Character, const FCharacterRailDropDelegate& Delegate) {
}

void UCharacterRailSplineComponent::OnCharacterDied(AASFCharacter* ActorKilled, const FDamageResultStruct& DamageResult) {
}

void UCharacterRailSplineComponent::OnCharacterDestroyed(AActor* ActorDestroyed) {
}

bool UCharacterRailSplineComponent::IsLerpingRotationOnFinalSegment() const {
    return false;
}

bool UCharacterRailSplineComponent::IsCharacterDriven(AASFCharacter* Character) const {
    return false;
}

FRailPointData UCharacterRailSplineComponent::GetRailPointDataForPointIndex(int32 PointIndex, bool& Found) const {
    return FRailPointData{};
}

FRailDrivenCharacterData UCharacterRailSplineComponent::GetRailDrivenDataForCharacter(AASFCharacter* Character, bool& Found) const {
    return FRailDrivenCharacterData{};
}

float UCharacterRailSplineComponent::GetMinimumDistanceBetweenDepartures() const {
    return 0.0f;
}

FTransform UCharacterRailSplineComponent::GetFinalTransform() const {
    return FTransform{};
}

FRotator UCharacterRailSplineComponent::GetFinalRotation() const {
    return FRotator{};
}

FVector UCharacterRailSplineComponent::GetFinalLocation() const {
    return FVector{};
}

FRailPointData UCharacterRailSplineComponent::FindRailPointDataForPointIndex(int32 PointIndex, bool& Found) const {
    return FRailPointData{};
}

FRailPointData UCharacterRailSplineComponent::FindRailPointDataForCharacter(AASFCharacter* Character, bool& Found) const {
    return FRailPointData{};
}

void UCharacterRailSplineComponent::DropCharacter(AASFCharacter* Character, bool ResetRotation) {
}

void UCharacterRailSplineComponent::DriveCharacter(AASFCharacter* Character) {
}

bool UCharacterRailSplineComponent::CanDriveNewCharacter() const {
    return false;
}

bool UCharacterRailSplineComponent::CanDriveCharacter(AASFCharacter* Character) const {
    return false;
}

void UCharacterRailSplineComponent::BindToCharacterRailUpdate(AASFCharacter* Character, const FCharacterRailDelegate& Delegate) {
}

void UCharacterRailSplineComponent::BindToCharacterDrop(AASFCharacter* Character, const FCharacterRailDropDelegate& Delegate) {
}



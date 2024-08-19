#include "RestComponent.h"

URestComponent::URestComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bGalvanizingPresence = false;
    this->DataAsset = NULL;
    this->bShouldTryAmbushOnNextRest = true;
    this->bForceSucceedAmbushOnNextRest = false;
    this->AmbushSpawnProbability = 0;
}

void URestComponent::StartRestPhase_Implementation() {
}

bool URestComponent::ShouldTryAmbushOnNextRest() const {
    return false;
}

bool URestComponent::ShouldSpawnAmbush() const {
    return false;
}

bool URestComponent::ShouldForceAmbushOnNextRest() const {
    return false;
}

void URestComponent::SetShouldTryAmbushOnNextRest(bool ShouldTryAmbush, bool ForceSucceedAmbush) {
}

void URestComponent::ResolveRestEnding() {
}

void URestComponent::ResetAmbushProperties() {
}

void URestComponent::PlayBlackScreenSound() {
}

void URestComponent::EndRestPhase_Implementation() {
}

int32 URestComponent::ComputeAmbushSpawnProbability() {
    return 0;
}

void URestComponent::CompleteRestPhase_Implementation() {
}

void URestComponent::ApplyRestEffects_Implementation() {
}



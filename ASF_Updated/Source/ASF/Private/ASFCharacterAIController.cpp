#include "ASFCharacterAIController.h"
#include "Navigation/CrowdFollowingComponent.h"

AASFCharacterAIController::AASFCharacterAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UCrowdFollowingComponent>(TEXT("PathFollowingComponent"))) {
    this->StatComponent = NULL;
    this->bIsPathValid = false;
    this->PathLength = 0.00f;
    this->DestinationActor = NULL;
    this->DestinationAcceptanceRadius = 50.00f;
    this->bOverwatchAsk = false;
    this->bOverWatchAskActif = false;
    this->OverWatch_ActorTarget = NULL;
    this->AimingRotationSpeed = 270.00f;
}

void AASFCharacterAIController::UpdateCurrentAimingDirection(float _DeltaTime) {
}

void AASFCharacterAIController::SetOverWatchLocation(AActor* _ActorTarget, FVector _LocationTarget) {
}

void AASFCharacterAIController::SetOverwatchAsk(bool _bOrientation_IsFollowing) {
}

void AASFCharacterAIController::SetDestinationToPosition(FVector Position, bool Rotate) {
}

void AASFCharacterAIController::SetDestinationToActor(AActor* Target, bool Rotate) {
}

void AASFCharacterAIController::SetDestinationAcceptanceRadius() {
}

void AASFCharacterAIController::SaveDestination() {
}

void AASFCharacterAIController::RestoreDestination() {
}

void AASFCharacterAIController::ResetCurrentAimingDirection() {
}

bool AASFCharacterAIController::IsPathValide() const {
    return false;
}

bool AASFCharacterAIController::IsOverwatchAskActif() {
    return false;
}

bool AASFCharacterAIController::IsAimingAtLocation(FVector _TargetLocation, float _angleTolerance) {
    return false;
}

FVector AASFCharacterAIController::GetTargetMeshLocationToAimAt() {
    return FVector{};
}

FVector AASFCharacterAIController::GetSavedDestination() const {
    return FVector{};
}

float AASFCharacterAIController::GetPathLength() const {
    return 0.0f;
}

bool AASFCharacterAIController::GetOverwatchAsk() {
    return false;
}

FVector AASFCharacterAIController::GetOverWatch_LocationTarget() {
    return FVector{};
}

FVector AASFCharacterAIController::GetDestination(float& AcceptanceRadius) const {
    return FVector{};
}

FVector AASFCharacterAIController::GetCurrentAimingDirection() {
    return FVector{};
}

TArray<FCharacterSightProperties> AASFCharacterAIController::GetControllerSight() {
    return TArray<FCharacterSightProperties>();
}

void AASFCharacterAIController::DetachDestinationFromActor() {
}



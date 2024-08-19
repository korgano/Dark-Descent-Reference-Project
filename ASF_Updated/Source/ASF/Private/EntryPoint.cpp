#include "EntryPoint.h"
#include "Tinda_EffectHandlerComponent.h"

AEntryPoint::AEntryPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EffectHandlerComponent = CreateDefaultSubobject<UTinda_EffectHandlerComponent>(TEXT("EffectHandlerComponent"));
    this->EntryPointWeight = 1.00f;
    this->bOverrideZ = false;
    this->ZOverride = 0.00f;
    this->Distance_SpawnAPC = 1000.00f;
    this->Velocity_SpawnAPC = -1.00f;
    this->bPlayCanAskMovement = true;
    this->bSelectableForMissionLaunch = true;
    this->bIsATransitionNotInPlace = false;
}

void AEntryPoint::StartExit_Implementation() {
}

void AEntryPoint::StartEnter_Implementation() {
}

void AEntryPoint::OnSubLevelHandlerSet(AASFGameModeBase_TacticalMode* GameMode, ASubLevelHandler* SubLevelHander) {
}

bool AEntryPoint::IsSelectableForMissionLaunch_Implementation() const {
    return false;
}

FRotator AEntryPoint::GetRotationToSpawnCharacter_Implementation(AASFCharacter* _Character) {
    return FRotator{};
}

FRotator AEntryPoint::GetOrientation_Implementation() const {
    return FRotator{};
}

TSoftClassPtr<UMapFeedbackDataProperties> AEntryPoint::GetOpenDataProperties_Implementation() const {
    return NULL;
}

FVector AEntryPoint::GetLocationToSpawnSquad_Implementation() {
    return FVector{};
}

FVector AEntryPoint::GetLocationToSpawnCharacter_Implementation(AASFCharacter* _Character) {
    return FVector{};
}

AEntryPoint* AEntryPoint::GetEntryPointToSpawnSquad(UObject* WorldContextObject) {
    return NULL;
}

FRotator AEntryPoint::GetCameraInitialRotation_Implementation() {
    return FRotator{};
}

void AEntryPoint::AskAPCMovement_Implementation(const FString& _APCName, EMovementOrderFrom MovementOrderFrom) {
}



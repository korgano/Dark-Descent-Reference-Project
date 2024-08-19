#include "Cocoon.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "CommonSaveLoadComponent.h"

ACocoon::ACocoon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root Component"));
    this->StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Static Mesh"));
    this->SaveComponent = CreateDefaultSubobject<UCommonSaveLoadComponent>(TEXT("Common Save Load Component"));
    this->HostedHumanoidPendingReady = NULL;
    this->bHasBeenOpened = false;
    this->bHasSpawnedDefaultHumanoid = false;
    this->HostedHumanoid = NULL;
    this->HostedHumanoidOpenCocoonComponent = NULL;
    this->CocoonEffect = NULL;
    this->CocoonReleasingEffect = NULL;
    this->DisableHostedHumanoidPhysic = false;
    this->StaticMesh->SetupAttachment(RootComponent);
}

void ACocoon::UnHostHumanoid() {
}

void ACocoon::ReleaseHostedHumanoid() {
}

void ACocoon::OnSubLevelLoaded(ASubLevelHandler* Handler, const FString& StreamingLevel) {
}

void ACocoon::OnSubLevelHandlerSet(AASFGameModeBase_TacticalMode* GameMode, ASubLevelHandler* SubLevelHandler) {
}

void ACocoon::OnHostHumanoidMeshLoaded(AASFCharacter* Character) {
}

void ACocoon::OnDefaultHumanoidSpawning(AASFGameModeBase_TacticalMode* GameMode, AHumanoid* Humanoid) {
}

bool ACocoon::IsHostingHumanoid() const {
    return false;
}

void ACocoon::HostHumanoid(AHumanoid* Humanoid) {
}

void ACocoon::HandleNewHost_Implementation(AHumanoid* NewHost) {
}

void ACocoon::HandleHostReleasing_Implementation(AHumanoid* ReleasedHost) {
}

void ACocoon::HandleHostReleased_Implementation(AHumanoid* ReleasedHost) {
}

void ACocoon::HandleAlreadyOpened_Implementation() {
}

UInteractiveComponent* ACocoon::GetHostedHumanoidOpenCocoonComponent() const {
    return NULL;
}

AHumanoid* ACocoon::GetHostedHumanoid() const {
    return NULL;
}

void ACocoon::CutNextCreepWeb_Implementation() {
}

bool ACocoon::CanHostHumanoid(AHumanoid* Humanoid) const {
    return false;
}

void ACocoon::AnimationReleaseFinished(AHumanoid* Humanoid) {
}



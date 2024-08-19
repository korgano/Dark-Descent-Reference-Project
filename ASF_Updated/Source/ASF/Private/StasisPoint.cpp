#include "StasisPoint.h"
#include "Components/ArrowComponent.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "CommonSaveLoadComponent.h"

AStasisPoint::AStasisPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("StasisRootComponent"));
    this->DefaultNavArea = NULL;
    this->IsSpawned = false;
    this->AlienLeftStasisPoint = false;
    this->StasisRootComponent = (USceneComponent*)RootComponent;
    this->ArrowComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("ArrowComponent"));
    this->PathFindingBox = CreateDefaultSubobject<UBoxComponent>(TEXT("PathFindingBoxComponent"));
    this->AlienOnStase = NULL;
    this->SaveLoadComponent = CreateDefaultSubobject<UCommonSaveLoadComponent>(TEXT("CommonSaveLoadComponent"));
    this->Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StasisPointMeshComponent"));
    this->ArrowComponent->SetupAttachment(RootComponent);
    this->PathFindingBox->SetupAttachment(ArrowComponent);
    this->Mesh->SetupAttachment(ArrowComponent);
}

void AStasisPoint::UnregisterFromAlienSystemic() {
}

void AStasisPoint::SpawnAlienOnBeginPlay() {
}

void AStasisPoint::SetStasisPointState(FGameplayTag _NewState) {
}

void AStasisPoint::RemoveAlienFromStasisPoint_Implementation() {
}

void AStasisPoint::RegisterToAlienSystemic() {
}

void AStasisPoint::OnSystemicActivatedOnEventSystem(ATMEventSystem* EventSystem, UFactionSystemic* FactionSystemic) {
}

void AStasisPoint::OnSpawn_Implementation(AAlien* Alien) {
}

void AStasisPoint::OnEventSystemSetOnGameMode(AASFGameModeBase_TacticalMode* _GameMode, ATMEventSystem* _EventSystem) {
}

void AStasisPoint::OnAlienNewState(AAIController_Alien* AIController, EnumAiState OldState, EnumAiState NewState) {
}

void AStasisPoint::OnAlienActionStop(UAIActionComponent* _AIActionComponent, UAIAction* _Action, EnumAIActionStatus _AIActionStatus) {
}

bool AStasisPoint::IsStasisPointDisable() const {
    return false;
}

bool AStasisPoint::IsStasisPointAvailableForClass(const TSoftClassPtr<AAlien>& Alien) const {
    return false;
}

bool AStasisPoint::IsStasisPointAvailable_Implementation(AAlien* Alien) {
    return false;
}

void AStasisPoint::HandleRegistrationToAlienSystemic_Implementation(UAlienSystemic* AlienSystemic) {
}

FGameplayTag AStasisPoint::GetXenoTechProjectBlueprint_Implementation() const {
    return FGameplayTag{};
}

FGameplayTag AStasisPoint::GetStasisTypeTag() const {
    return FGameplayTag{};
}

FVector AStasisPoint::GetStasisPointEntrance() const {
    return FVector{};
}

UStaticMeshComponent* AStasisPoint::GetMesh() const {
    return NULL;
}

void AStasisPoint::EnableNavigationOnStasisPoint() {
}

void AStasisPoint::DettachAlienToTheMesh_Implementation(AAlien* Alien) {
}

void AStasisPoint::AttachAlienToTheMesh_Implementation(AAlien* Alien) {
}

void AStasisPoint::AddAlienToStasisPoint_Implementation(AAlien* Alien) {
}



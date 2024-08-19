#include "HumanoidTactical.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SpotLightComponent.h"
#include "MapFeedbackDataComponent.h"
#include "MarineCoverComponent.h"
#include "MarinesAIActionComponent.h"
#include "SkillManagerComponent.h"
#include "SquadMember.h"
#include "TrackedComponent.h"

AHumanoidTactical::AHumanoidTactical(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CoverComponent = CreateDefaultSubobject<UMarineCoverComponent>(TEXT("CoverComponent"));
    this->NbBulletPrimaryWeaponSaved = 0;
    this->NbBulletSecondaryWeaponSaved = 0;
    //this->OverheadSpotLight = CreateDefaultSubobject<USpotLightComponent>(TEXT("OverheadSpotLight"));
    const FProperty* p_Mesh_Parent = GetClass()->FindPropertyByName("Mesh");
    this->SkillManagerComponent = CreateDefaultSubobject<USkillManagerComponent>(TEXT("SkillManagerComponent"));
    this->TrackedComponent = CreateDefaultSubobject<UTrackedComponent>(TEXT("TrackedComponent"));
    this->MapFeedbackDataComponent = CreateDefaultSubobject<UMapFeedbackDataComponent>(TEXT("MapFeedbackDataComponent"));
    this->Squad = NULL;
    this->SquadMemberComponent = CreateDefaultSubobject<USquadMember>(TEXT("SquadMemberComponent"));
    this->bFollowFormation = true;
    this->DestinationPrevisualisationActor = NULL;
    this->DestinationPrevisualisationActorClass = NULL;
    this->AI_ActionComponent = CreateDefaultSubobject<UMarinesAIActionComponent>(TEXT("AI_ActionComponent"));
    this->TimerBetweenSaveTransform = 0.50f;
    this->CurrentDelayBeforeNextTransformSave = 0.00f;
    this->bNeedToUseSavedTransformForSave = false;
    //this->OverheadSpotLight->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
}

void AHumanoidTactical::WeaponFired(AWeapon* Weapon) {
}

void AHumanoidTactical::WeaponChanged_Implementation(UCombatComponent* _CombatComponent, AWeapon* _Weapon) {
}

void AHumanoidTactical::ShowHumanoid() {
}

void AHumanoidTactical::SetSquad(ASquad* _Squad) {
}

void AHumanoidTactical::SetCustomLoot(const FSpawnedHumanCustomLoot& InCustomLoot) {
}

void AHumanoidTactical::LeaveExtractionTransport(const FString& _TransportName) {
}

bool AHumanoidTactical::IsindependantFromSquad() {
    return false;
}

bool AHumanoidTactical::HumanoidFollowFormationAsAlly() {
    return false;
}

bool AHumanoidTactical::HumanoidFollowFormation() {
    return false;
}

void AHumanoidTactical::HideHumanoid() {
}

UTrackedComponent* AHumanoidTactical::GetTrackedComponent() const {
    return NULL;
}

ASquad* AHumanoidTactical::GetSquad() {
    return NULL;
}

USkillManagerComponent* AHumanoidTactical::GetSkillManagerComponent() const {
    return NULL;
}

USpotLightComponent* AHumanoidTactical::GetOverheadSpotLight() const {
    return NULL;
}

UMapFeedbackDataComponent* AHumanoidTactical::GetMapFeedbackDataComponent() const {
    return NULL;
}

UInventoryComponent* AHumanoidTactical::GetInventory() {
    return NULL;
}

UCombatComponent* AHumanoidTactical::GetCombatComponent() const {
    return NULL;
}

UMarinesAIActionComponent* AHumanoidTactical::GetActionComponent() {
    return NULL;
}

void AHumanoidTactical::EnterExtractionTransport(const FString& _TransportName, bool _IsExtracted) {
}

void AHumanoidTactical::AddCustomLoot(const FSpawnedHumanCustomLoot& InCustomLoot) {
}
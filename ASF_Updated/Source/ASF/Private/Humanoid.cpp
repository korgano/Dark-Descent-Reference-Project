#include "Humanoid.h"
#include "Components/AudioComponent.h"
#include "Components/CapsuleComponent.h"
#include "AC_Trauma.h"
#include "ASFHumanoidMovementComponent.h"
#include "AnimationComponentHumanoid.h"
#include "HumanoidActionManager.h"
#include "MarineStatComponent.h"

AHumanoid::AHumanoid(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UASFHumanoidMovementComponent>(TEXT("CharMoveComp"))) {
    this->StatComponent = CreateDefaultSubobject<UMarineStatComponent>(TEXT("MarineStatComponent"));
    this->AnimationComponent = CreateDefaultSubobject<UAnimationComponentHumanoid>(TEXT("AnimationComponent"));
    this->DataAsset = NULL;
    this->bIsInitialized = false;
    this->PhaseEffect = NULL;
    this->HumanoidID = -1;
    this->MissionCount = 0;
    this->LostHealth = 0.00f;
    this->bHasNewAvailableUpgrade = false;
    this->Trait = NULL;
    this->TurnOfDeath = -1;
    this->InitialBravery = 0;
    this->Type = Neutral;
    this->AC_Trauma = CreateDefaultSubobject<UAC_Trauma>(TEXT("AC_Trauma"));
    this->PreviewUpgrade = NULL;
    this->SaveOnExtract = true;
    this->NbXPPoints = 0;
    this->Level = 1;
    this->LevelGain = 0;
    this->bIsHovered = false;
    this->InteractiveObjectCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("InteractiveObjectCapsule"));
    this->TakePositionActionClass = NULL;
    this->MoveFormationActionClass = NULL;
    this->HumanoidActionManager = NULL;
    this->HumanoidActionManagerClass = UHumanoidActionManager::StaticClass();
    this->RotationVelocity = 3.00f;
    this->ReasonOnDestroy = EnumDestroyReason::DESTROYED;
    this->DestinationActor = NULL;
    this->DeathSlideAlreadyPlayed = false;
    this->VoiceComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("AudioComponent"));
    this->CurrentMarineSlot = NULL;
    this->HostCocoon = NULL;
    this->MaxStressStepAchieved = EStressStep::Cool;
    this->FOWVisibilityComp = NULL;
    this->bUseURO = true;
}

void AHumanoid::VacateCurrentMarineSlot() {
}

bool AHumanoid::UpdateNewAvailableUpgrades(EMarineRank _NewUpgradeTier) {
    return false;
}

void AHumanoid::UpdateClassPerks() {
}

void AHumanoid::ToDataCarrierMarine(FDataCarrierMarine& _DataCarrierMarine) const {
}

void AHumanoid::SetupLight() {
}

void AHumanoid::SetTrait(UTrait_DataAsset* _Trait) {
}

void AHumanoid::SetRotationVelocity(float _RotationVelocity) {
}

void AHumanoid::SetRandomizedPerkPicks(TArray<UMarineAttributeDataAssets*> _PerkPicks) {
}

void AHumanoid::SetPreviewUpgrade(UUpgradeDataAssets* _Upgrade) {
}

void AHumanoid::SetMeshFromClass_Implementation(UMarineClassDataAssets* _ClassAsset) {
}

void AHumanoid::SetLevelGain(int32 _LevelGain) {
}

void AHumanoid::SetHumanoidID(int32 _Id) {
}

void AHumanoid::SetHostCocoon(ACocoon* Cocoon, bool BypassReleaseAnimation) {
}


void AHumanoid::SetDestinationActor(AActor* _DestinationActor) {
}

void AHumanoid::SetDeathSlideAlreadyPlayed(bool _DeathSlideAlreadyPlayed) {
}

void AHumanoid::SetCustomizationName(const FString& _Name) {
}

void AHumanoid::SetCustomization(FMarineCustomization _Customization) {
}

void AHumanoid::SetClass(UMarineClassDataAssets* _ClassAsset) {
}

void AHumanoid::SetBodyOrientation(FVector _BodyOrientation) {
}


void AHumanoid::ResetLostHealth() {
}


void AHumanoid::RemoveWound(FGameplayTag _WoundTag) {
}

void AHumanoid::RemoveUpgrade(FGameplayTag _UpgradeTag) {
}

void AHumanoid::RemoveTrait(UTrait_DataAsset* _Asset) {
}

void AHumanoid::RemoveState(FGameplayTag _AttributeTag) {
}

void AHumanoid::RemovePerk(FGameplayTag _AttributeTag) {
}

void AHumanoid::RemoveNewAvailableUpgrade(UUpgradeDataAssets* _Upgrade) {
}

void AHumanoid::RemoveBodypartMeshFromMarine(FGameplayTag BodyPartTag) {
}

void AHumanoid::RemoveAttachedSceneComponent(USceneComponent* _SceneComponent) {
}

void AHumanoid::PreloadWeaponTraitAndTrauma() {
}

void AHumanoid::OnWoundReceived(AActor* _ActorWounded, const FDamageResultStruct& _Damage) {
}

void AHumanoid::OnVoiceAudioFinished() {
}

void AHumanoid::OnSubLevelLoaded(ASubLevelHandler* Handler, const FString& StreamingLevel) {
}

void AHumanoid::OnSelfDeath(AASFCharacter* killedActor, const FDamageResultStruct& _DamageResult) {
}

void AHumanoid::OnMeshLoadIsFinished() {
}

void AHumanoid::OnEnemyPhaseChanged(UFactionSystemic* FactionSystemic, const FGameplayTag& OldPhase, const FGameplayTag& NewPhase) {
}

void AHumanoid::OnDamageReceived(AActor* _ActorWounded, const FDamageResultStruct& _Damage) {
}

void AHumanoid::OccupyMarineSlot(AMarineSlot* _Slot) {
}

bool AHumanoid::NeedsProstheticLimb() const {
    return false;
}

void AHumanoid::MergeBodypartsSkeletalMeshes() {
}

void AHumanoid::LoadDataCarrierMarine(const FDataCarrierMarine& _DataCarrierMarine) {
}

bool AHumanoid::IsWounded() const {
    return false;
}

bool AHumanoid::IsTreated() const {
    return false;
}

bool AHumanoid::IsTrainedForWeapon(UWeaponAttribute_DataAsset* _WeaponAttribute) const {
    return false;
}

bool AHumanoid::IsTrained() const {
    return false;
}

bool AHumanoid::IsTired() const {
    return false;
}

bool AHumanoid::IsPerkActive(FGameplayTag _AttributeTag) const {
    return false;
}

bool AHumanoid::IsInIntensiveTraining() const {
    return false;
}

bool AHumanoid::IsExhausted() const {
    return false;
}

bool AHumanoid::IsDead() const {
    return false;
}

bool AHumanoid::IsAvailable() const {
    return false;
}

void AHumanoid::InitInventory() {
}

void AHumanoid::InitializeAttributeAndClass() {
}

bool AHumanoid::HasUpperLevelPerk(FGameplayTag _AttributeTag) const {
    return false;
}

bool AHumanoid::HasUpgrade(FGameplayTag _UpgradeTag) const {
    return false;
}

bool AHumanoid::HasTraitWithTag(const FGameplayTag& TraitTag) const {
    return false;
}

bool AHumanoid::HasTrait(UTrait_DataAsset* TraitDataAsset) const {
    return false;
}

bool AHumanoid::HasState(FGameplayTag _AttributeTag) const {
    return false;
}

bool AHumanoid::HasPrerequisitesForUpgrade(UUpgradeDataAssets* _Upgrade) const {
    return false;
}

bool AHumanoid::HasPerk(FGameplayTag _AttributeTag) const {
    return false;
}

bool AHumanoid::HasClassTierUpgrade() const {
    return false;
}

void AHumanoid::HandleReleasedFromCocoon_Implementation(ACocoon* Cocoon, bool BypassReleaseAnimation) {
}

void AHumanoid::HandleHostedInCocoon_Implementation(ACocoon* Cocoon) {
}

int32 AHumanoid::GetWoundCount(EnumWound _WoundType) const {
    return 0;
}

TArray<UWeaponAttribute_DataAsset*> AHumanoid::GetWeaponAttributes() const {
    return TArray<UWeaponAttribute_DataAsset*>();
}

UWeaponAttribute_DataAsset* AHumanoid::GetWeaponAttributeForSlot(FGameplayTag _WeaponSlot) const {
    return NULL;
}

EVoiceProfile AHumanoid::GetVoiceProfile() const {
    return EVoiceProfile::NONE;
}

UAudioComponent* AHumanoid::GetVoiceComponent() const {
    return NULL;
}

TArray<UUpgradeDataAssets*> AHumanoid::GetUpgradeAssets() const {
    return TArray<UUpgradeDataAssets*>();
}

UTrait_DataAsset* AHumanoid::GetTrait() const {
    return NULL;
}

int32 AHumanoid::GetStateDuration(FGameplayTag _AttributeTag) const {
    return 0;
}

FString AHumanoid::GetShortName() const {
    return TEXT("");
}

float AHumanoid::GetRotationVelocity() const {
    return 0.0f;
}

FGameplayTag AHumanoid::GetRequiredProstheticLimb() const {
    return FGameplayTag{};
}

TArray<UMarineAttributeDataAssets*> AHumanoid::GetPerkAttributes() const {
    return TArray<UMarineAttributeDataAssets*>();
}

int32 AHumanoid::GetNbXPPoints() const {
    return 0;
}

FVector AHumanoid::GetNavigationLocation() const {
    return FVector{};
}

FText AHumanoid::GetNameText() const {
    return FText::GetEmpty();
}

FString AHumanoid::GetName(EMarineNameDisplayMode _DisplayMode) const {
    return TEXT("");
}

int32 AHumanoid::GetMissionCount() const {
    return 0;
}

EMarineRank AHumanoid::GetMarineRank() const {
    return EMarineRank::ROOKIE;
}

int32 AHumanoid::GetLevelGain() const {
    return 0;
}

int32 AHumanoid::GetLevel() const {
    return 0;
}

int32 AHumanoid::GetInitialBravery() {
    return 0;
}

int32 AHumanoid::GetHumanoidID() const {
    return 0;
}

ACocoon* AHumanoid::GetHostCocoon() const {
    return NULL;
}

FGameplayTagContainer AHumanoid::GetHiddenMeshTags() const {
    return FGameplayTagContainer{};
}

EGender AHumanoid::GetGender() const {
    return EGender::NEUTRAL;
}

FString AHumanoid::GetFullName() const {
    return TEXT("");
}

int32 AHumanoid::GetDisplayLevel_Implementation() const {
    return 0;
}

AActor* AHumanoid::GetDestinationActor() {
    return NULL;
}

bool AHumanoid::GetDeathSlideAlreadyPlayed() const {
    return false;
}

FMarineCustomization AHumanoid::GetCustomization() const {
    return FMarineCustomization{};
}

AMarineSlot* AHumanoid::GetCurrentMarineSlot() const {
    return NULL;
}

int32 AHumanoid::GetCurrentLODLevel() const {
    return 0;
}

int32 AHumanoid::GetCommonPerkSlotCount() const {
    return 0;
}

FGameplayTag AHumanoid::GetClassTag() const {
    return FGameplayTag{};
}

int32 AHumanoid::GetCarryingCapacity(FGameplayTag _Tag) const {
    return 0;
}


TArray<USkeletalMeshComponent*> AHumanoid::GetBodyPartMeshComponents(FGameplayTag _BodyPartTag) {
    return TArray<USkeletalMeshComponent*>();
}

FVector AHumanoid::GetBodyOrientation() const {
    return FVector{};
}

void AHumanoid::ForceLODOnMesh(int32 InNewForcedLOD) {
}

void AHumanoid::FillRandomizedPerkPicks() {
}

void AHumanoid::FillRandomizedClassPicks() {
}

void AHumanoid::EnableSkeletalRender(bool _IsEnable, USkinnedMeshComponent* _SKComp) {
}

void AHumanoid::EnableHumanoidRender(bool _IsEnable) {
}

bool AHumanoid::DecreaseStateDuration(FGameplayTag _AttributeTag) {
    return false;
}

void AHumanoid::ClearWounds() {
}

void AHumanoid::ClearRandomizedPerkPicks() {
}

void AHumanoid::ClearAllNextActionsAndActivities() {
}

void AHumanoid::ClearAllActionsAndActivities() {
}


bool AHumanoid::CanTrain() const {
    return false;
}

bool AHumanoid::CanLevelUp() const {
    return false;
}

bool AHumanoid::CanAutoHealTrauma() const {
    return false;
}

void AHumanoid::ApplyWeaponAttribute(UWeaponAttribute_DataAsset* _WeaponAttribute, bool _UpdateMesh) {
}

void AHumanoid::ApplyVisualCustomization() {
}

void AHumanoid::ApplyDefaultWeaponAttributes() {
}

void AHumanoid::AddXPPoints(int32 _XpGained) {
}

void AHumanoid::AddWound(FGameplayTag _WoundTag) {
}

void AHumanoid::AddUpgrade(UUpgradeDataAssets* _Upgrade) {
}

void AHumanoid::AddState(UMarineAttributeDataAssets* _Attribute, int32 _Duration) {
}

void AHumanoid::AddRequiredProstheticLimb() {
}

void AHumanoid::AddProstheticLimb(const FGameplayTag& _LimbTag) {
}

void AHumanoid::AddPerk(UMarineAttributeDataAssets* _Attribute) {
}

void AHumanoid::AddNewAvailableUpgrade(UUpgradeDataAssets* _Upgrade) {
}

void AHumanoid::AddMedbayRecoveryDuration(int32 _Days) {
}

void AHumanoid::AddLostHealth(float _Health) {
}

void AHumanoid::AddBodypartMeshToMarine(USkeletalMesh* NewBodyPart, UPhysicsAsset* PhysicsAsset, FGameplayTag BodyPartTag, bool IsMainMesh) {
}

void AHumanoid::AddAttachedSceneComponent(USceneComponent* _SceneComponent) {
}

UAction* AHumanoid::AddAction(UAction* _Action) {
    return NULL;
}



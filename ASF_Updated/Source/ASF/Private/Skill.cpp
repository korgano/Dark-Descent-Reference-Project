#include "Skill.h"

USkill::USkill() {
    this->bNeedToBeEmptyHanded = false;
    this->NeedWeaponCompatibility = false;
    this->CanBeChain = false;
    this->AnimationType = EActivityAnimationType::NONE;
    this->bShouldBeVisibleInCombatMenu = true;
    this->Cooldown = 0.00f;
    this->bIsInBackGround = false;
    this->bCanBeCanceledByStop = false;
    this->bCanBeCanceledByDamage = false;
    this->bCanBeCanceledByDamageOnlyMelee = true;
    this->bCanBeCanceledByImmobilization = false;
    this->bManualyUpdateInstigator = false;
    this->bForceManualyUpdateInstigator = false;
    this->bIsLocked = false;
    this->bIsHighlightForTutorial = false;
    this->SkillSelectionStatus = ESkillSelectionStatus::UNSELECTED;
    this->InstigatorCombatComp = NULL;
    this->SkillFeedback = NULL;
    this->bCanEmitteAINoise = false;
    this->AINoiseLoudness = 1.00f;
    this->Instigator = NULL;
    this->AINoiseMaxRange = 0.00f;
    this->Squad = NULL;
    this->bSwitchInstigator = false;
    this->PDA_Skill = NULL;
}

void USkill::Validate_Implementation() {
}

void USkill::UpdateInstigator_Implementation() {
}

void USkill::Unselect_Implementation(bool _Validated) {
}

void USkill::Unlock() {
}

void USkill::UnInitLaunch_Implementation(EnumActionStatus _Status) {
}

void USkill::TickEvent(float _DeltaTime) {
}

void USkill::SwitchToPreviousInstigator() {
}

void USkill::SwitchToNextInstigator() {
}

void USkill::SwitchSkillInBackGround_Implementation() {
}

void USkill::SwitchSkillBackToForeGround_Implementation() {
}

void USkill::StopTick() {
}

void USkill::SetSkillSelectionStatus(ESkillSelectionStatus _SkillSelectionStatus) {
}

void USkill::SetSkillFeedback(ASkillFeedback* _SkillFeedback) {
}

void USkill::SetShouldBeVisibleInCombatMenu(bool _bVisibility) {
}

void USkill::SetIsHilightForTutorial(bool bNewHilight) {
}

void USkill::SetInstigator(AHumanoidTactical* _Instigator) {
}

void USkill::SetForcedSavedStartLocationEvent_Implementation(FVector _Location) {
}

AHumanoidTactical* USkill::SelectPreviousInstigator_Implementation(const TArray<AHumanoidTactical*>& _PotentialInstigators) {
    return NULL;
}

AHumanoidTactical* USkill::SelectNextInstigator_Implementation(const TArray<AHumanoidTactical*>& _PotentialInstigators) {
    return NULL;
}

AHumanoidTactical* USkill::SelectBestInstigator_Implementation(const TArray<AHumanoidTactical*>& _PotentialInstigators) {
    return NULL;
}

void USkill::Select_Implementation() {
}

void USkill::PlaySkillAcknow_Implementation() {
}

void USkill::OnSubLevelLoaded(ASubLevelHandler* Handler, const FString& StreamingLevel) {
}

void USkill::OnInstigatorWeaponChanged(UCombatComponent* CombatComponent, AWeapon* Weapon) {
}

void USkill::OnInstigatorDamageReceived(AActor* ActorWounded, const FDamageResultStruct& Damage) {
}

void USkill::OnCooldownFinished_Internal_Implementation() {
}

void USkill::OnActivityTick_Implementation(float _DeltaTime) {
}

void USkill::Lock() {
}

void USkill::LaunchSkill_Implementation() {
}

bool USkill::IsTargetValid_Intern_Implementation() {
    return false;
}

bool USkill::IsTargetValid() {
    return false;
}

bool USkill::IsSkillSelected() const {
    return false;
}

bool USkill::IsLocked() const {
    return false;
}

bool USkill::IsInCooldown() {
    return false;
}

bool USkill::IsHilightForTutorial() const {
    return false;
}

void USkill::InitSkill_Implementation() {
}

void USkill::InitLaunch_Implementation() {
}

USkill* USkill::GetSquadSkill() const {
    return NULL;
}

ASquad* USkill::GetSquad() const {
    return NULL;
}

FVector USkill::GetSkillTargetLocation_Implementation() {
    return FVector{};
}

FText USkill::GetSkillName() const {
    return FText::GetEmpty();
}

UTexture2D* USkill::GetSkillIcon_Little_Implementation() {
    return NULL;
}

UTexture2D* USkill::GetSkillIcon() const {
    return NULL;
}

ASkillFeedback* USkill::GetSkillFeedback() const {
    return NULL;
}

EActivityAnimationType USkill::GetSkillAnimationType() {
    return EActivityAnimationType::NONE;
}

bool USkill::GetShouldBeVisibleInCombatMenu() {
    return false;
}

TArray<AHumanoidTactical*> USkill::GetPotentialInstigators(TMap<AActor*, FGameplayTagContainer>& ErrorTagContairers) {
    return TArray<AHumanoidTactical*>();
}

bool USkill::GetNeedToBeEmptyHanded() {
    return false;
}

FGameplayTag USkill::GetItemNeededForSwapping_Implementation() {
    return FGameplayTag{};
}

FGameplayTagContainer USkill::GetItemNeeded_Implementation() {
    return FGameplayTagContainer{};
}

AHumanoidTactical* USkill::GetInstigator() const {
    return NULL;
}

float USkill::GetCooldownRemainingTime() {
    return 0.0f;
}

float USkill::GetCooldownElapsedTime() {
    return 0.0f;
}

float USkill::GetCooldown() {
    return 0.0f;
}

FVector USkill::GetCharacterOrientation_Desired_Implementation() {
    return FVector{};
}

FVector USkill::GetCharacterAimingLocation_Desired_Implementation() {
    return FVector{};
}

void USkill::ForceStopCooldown() {
}

void USkill::ForceStartCooldown() {
}

void USkill::EndSkill(EnumActionStatus _Status) {
}

void USkill::CheckTags_SwitchBackground(UTinda_EffectHandlerComponent* EffectHandler, FGameplayTag Effect, bool bAdded) {
}

void USkill::CancelSkillIndoor_Implementation() {
}

bool USkill::CanBeLaunched_BySquad_Implementation(TMap<AActor*, FGameplayTagContainer>& ErrorTagContairersMap) {
    return false;
}

bool USkill::CanBeLaunched_ByInstigator_Implementation(FGameplayTagContainer& ErrorReasons) {
    return false;
}

bool USkill::CanBeLaunched_Implementation(TArray<AHumanoidTactical*>& potentialInstigators, TMap<AActor*, FGameplayTagContainer>& ErrorTagContairersMap) {
    return false;
}



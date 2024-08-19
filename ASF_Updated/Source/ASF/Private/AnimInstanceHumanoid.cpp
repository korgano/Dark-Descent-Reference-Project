#include "AnimInstanceHumanoid.h"

UAnimInstanceHumanoid::UAnimInstanceHumanoid() {
    this->RagdollGetUpMontage = NULL;
    this->HumanoidClass = EnumHumanoidClass::MARINE;
    this->Gender = EGender::NEUTRAL;
    this->bIsInInteraction = false;
    this->PlayRateInteraction = 0.00f;
    this->CurrentActivityType = EActivityAnimationType::NONE;
    this->CurrentActivity = NULL;
    this->CurrentInteractiveComponent = NULL;
    this->bCurrentActivityNeedEndAnim = false;
    this->bIsUnconscious = false;
    this->fWeldSign = 0.00f;
    this->fWeldStart = 0.00f;
    this->fWeldScale = 0.00f;
    this->AnimWelding = NULL;
    this->AnimUnwelding = NULL;
    this->bEndSearchCrateWithClose = false;
    this->AnimStance = EnumCharacterAnimStance::STANDING;
    this->Attitude = EnumCharacterAnimAttitude::RELAXED;
    this->nIdLootCorpseVariation = 0;
    this->bIsStressed = false;
    this->LookatDistance = 750.00f;
    this->DeathSlideTimer = -1.00f;
    this->BreakdownState = EnumCharacterBreakdownType::NONE;
    this->LocomotionOwner = EnumMarineLocomotionOwner::INGAME;
    this->PowerLoaderMesh = NULL;
    this->APCEnterCorrectionTimer = 0.00f;
    this->APCLeaveTimer = -1.00f;
    this->APCLeaveOrientation = 0.00f;
    this->APCLeaveVelocity = 0.00f;
    this->APCLeaveVelocityScale = 0.00f;
    this->CarriedItem = EnumCharacterCarriedItem::NOT_SET;
    this->CarriedMarine = NULL;
    this->CarrierCharacter = NULL;
    this->CarrierType = EnumCarrierType::MARINE;
    this->AnimCarryTaker = NULL;
    this->AnimCarryTaked = NULL;
    this->MontageCarryTaker = NULL;
    this->MontageCarryTaked = NULL;
    this->bMeshIsAttachedToCarrier = false;
    this->IsWeaponVisible = true;
    this->CurrentWeaponVisibility = true;
    this->CocoonState = EnumCocoonState::NONE;
    this->IsInReleaseCocoonMove = false;
    this->CurrentTimerReleaseCocoon = 0.00f;
    this->TimerReleaseCocoon = 0.00f;
    this->AnimReleaseCocoon = NULL;
    this->WearingFacehuggerState = EnumCharacterWearingFacehuggerState::NONE;
    this->TackleStartAnim = NULL;
    this->AttackChoreography = EnumAlienAttackType::NONE;
    this->SlideTime = 0.40f;
    this->CurveTackle = NULL;
    this->CurrentHealedPart = EnumCharacterHealingPart::NONE;
    this->bResteEnPiece = false;
    this->WoundedLegState = EnumDismemberedState::NONE;
    this->SyringeMesh = NULL;
    this->SyringeMeshClass = NULL;
    this->bStandingCanMove = false;
}

void UAnimInstanceHumanoid::UpdateTackle(float DeltaSeconds) {
}

void UAnimInstanceHumanoid::UpdateReleaseCocoon(float fDeltaSeconds) {
}

void UAnimInstanceHumanoid::UpdateFacehuggerState_Implementation(float fDeltaSeconds) {
}

void UAnimInstanceHumanoid::UpdateDeathSlide(float fDeltaSeconds) {
}

void UAnimInstanceHumanoid::UpdateCharacterLookatNPC(float DeltaSeconds) {
}

void UAnimInstanceHumanoid::UpdateCharacterLookat(float DeltaSeconds) {
}

void UAnimInstanceHumanoid::UpdateAPCLeave(float fDeltaSeconds) {
}

void UAnimInstanceHumanoid::UpdateAPCEnterCorrection(float fDeltaSeconds) {
}

void UAnimInstanceHumanoid::SwapItem_Implementation(FGameplayTag ItemTag, float SwapTime) {
}

void UAnimInstanceHumanoid::StopReleaseCocoonMove() {
}

void UAnimInstanceHumanoid::StopDragging_Implementation(bool _NoAnimation) {
}

void UAnimInstanceHumanoid::StartWelding(float WeldSign, float WeldAnimationDuration, UActivity* Activity) {
}

void UAnimInstanceHumanoid::StartReleaseCocoonMove() {
}

void UAnimInstanceHumanoid::StartDragging_Implementation(bool _NoAnimation) {
}

void UAnimInstanceHumanoid::StartDragged_Implementation(bool _NoAnimation) {
}

void UAnimInstanceHumanoid::SpawnSyringe() {
}

void UAnimInstanceHumanoid::SetWeaponVisibility(bool IsVisible) {
}

void UAnimInstanceHumanoid::SetSyringeVisibility(bool bNewVisibility) {
}

void UAnimInstanceHumanoid::SetLyingDown_Implementation() {
}

void UAnimInstanceHumanoid::SendStopCurrentActivity() {
}

void UAnimInstanceHumanoid::SendStopActivity(UActivity* Activity) {
}

void UAnimInstanceHumanoid::RemoveFromPlay(AASFCharacter* Character) {
}

void UAnimInstanceHumanoid::ReleaseCocoonFinish() {
}

void UAnimInstanceHumanoid::OnWeaponChanged_Implementation(AWeapon* Weapon) {
}

void UAnimInstanceHumanoid::OnUnconsciousEffectChange(UTinda_EffectHandlerComponent* EffectHandler, FGameplayTag Effect, bool bAdded) {
}

void UAnimInstanceHumanoid::OnItemChanged_Implementation(AASFCharacter* Character, AItem* Item) {
}

void UAnimInstanceHumanoid::OnFacehuggerEffectChange(UTinda_EffectHandlerComponent* EffectHandler, FGameplayTag Effect, bool bAdded) {
}

void UAnimInstanceHumanoid::OnChangeAttackChoreography_Implementation(EnumAlienAttackType AttackType, AASFCharacter* OtherCharacter, FVector Destination) {
}

void UAnimInstanceHumanoid::OnAttitudeChange(EnumCharacterAnimAttitude NewAttitude) {
}

void UAnimInstanceHumanoid::OnAlertEffectChange(UTinda_EffectHandlerComponent* EffectHandler, FGameplayTag Effect, bool bAdded) {
}

void UAnimInstanceHumanoid::KillYourself_Implementation() {
}

void UAnimInstanceHumanoid::InstantSwap() {
}

EnumCharacterCarriedItem UAnimInstanceHumanoid::GetItemEnumFromTag_Implementation(FGameplayTag ItemTag) {
    return EnumCharacterCarriedItem::HANDGUN;
}

void UAnimInstanceHumanoid::DropSyringe() {
}

void UAnimInstanceHumanoid::DropEndAnimForCarrier() {
}

void UAnimInstanceHumanoid::DropEndAnimForCarried() {
}

void UAnimInstanceHumanoid::DeathSlide_Implementation() {
}

void UAnimInstanceHumanoid::CheckUnconscious(float DeltaSeconds) {
}

void UAnimInstanceHumanoid::ChangeLocomotionOwner_Implementation(EnumMarineLocomotionOwner OwnerEnum, UObject* Owner) {
}

void UAnimInstanceHumanoid::ChangeCocoonState_Implementation(ACocoon* Cocoon, EnumCocoonState NewCocoonState) {
}

void UAnimInstanceHumanoid::ChangeBreakdown(EnumCharacterBreakdownType NewBreakdownType) {
}

void UAnimInstanceHumanoid::ChangeAdorationState(bool IsInAdoration) {
}

void UAnimInstanceHumanoid::CarryEndAnimForCarrier() {
}

void UAnimInstanceHumanoid::CarryEndAnimForCarried() {
}

void UAnimInstanceHumanoid::CancelCarryForCarrier() {
}

void UAnimInstanceHumanoid::CancelCarryForCarried() {
}

void UAnimInstanceHumanoid::AddToPlay(AASFCharacter* Character, const FVector& Location) {
}

void UAnimInstanceHumanoid::ActivityStart_Implementation(UActivity* Activity) {
}

void UAnimInstanceHumanoid::ActivityEnd_Implementation(UActivity* Activity) {
}

void UAnimInstanceHumanoid::ActionStop_Implementation(FGameplayTag ActionStateTag) {
}

void UAnimInstanceHumanoid::ActionStart_Implementation(FGameplayTag ActionStateTag) {
}



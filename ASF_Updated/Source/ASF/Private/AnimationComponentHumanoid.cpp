#include "AnimationComponentHumanoid.h"

UAnimationComponentHumanoid::UAnimationComponentHumanoid(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AimingState = EnumCharacterAimingState::IDLE;
    this->Attitude = EnumCharacterAnimAttitude::RELAXED;
    this->HeightState = EnumCharacterHeightState::REGULAR_HEIGHT;
    this->BreakdownType = EnumCharacterBreakdownType::NONE;
    this->ReactionType = EnumCharacterReactionType::UNDERFIRE;
    this->LocomotionOwnerType = EnumMarineLocomotionOwner::INGAME;
}

void UAnimationComponentHumanoid::SwapWeaponOtago() {
}

void UAnimationComponentHumanoid::StopReload() {
}

void UAnimationComponentHumanoid::StopInteractiveComponentInteraction(UInteractiveComponent* InteractiveComponent) {
}

void UAnimationComponentHumanoid::SetReactionType(EnumCharacterReactionType _ReactionType) {
}

void UAnimationComponentHumanoid::SetLocomotionOwner(EnumMarineLocomotionOwner OwnerEnum, UObject* Owner) {
}

void UAnimationComponentHumanoid::SetHealedStatus(EnumCharacterHealingPart HealedPart) {
}

void UAnimationComponentHumanoid::SetHeadAndLightLookAt(bool Activate) {
}

void UAnimationComponentHumanoid::SetCocoonState(ACocoon* Cocoon, EnumCocoonState CocoonState) {
}

void UAnimationComponentHumanoid::SetBreakdownType(EnumCharacterBreakdownType _BreakdownType) {
}

void UAnimationComponentHumanoid::SetAttitude(EnumCharacterAnimAttitude _Attitude) {
}

void UAnimationComponentHumanoid::SetAimingState(EnumCharacterAimingState NewAimingState) {
}

void UAnimationComponentHumanoid::SendMarineToOtagoRoom(FGameplayTag Tag) {
}

void UAnimationComponentHumanoid::ReleaseCocoonFinished(AHumanoid* Humanoid) {
}

void UAnimationComponentHumanoid::PlayWalkMarineSelection() {
}

void UAnimationComponentHumanoid::PlayThrowItem(FVector _Direction, float _LaunchDuration) {
}

void UAnimationComponentHumanoid::PlaySwapWeapon(bool IsMainWeapon, float SwapTime) {
}

void UAnimationComponentHumanoid::PlaySwapItem(FGameplayTag ItemTag, float SwapTime) {
}

void UAnimationComponentHumanoid::PlayShotgunBlast(float Duration) {
}

void UAnimationComponentHumanoid::PlaySergentOrder(FVector OrderLocation) {
}

void UAnimationComponentHumanoid::PlayReload(float ReloadTime) {
}

void UAnimationComponentHumanoid::PlayInteractiveComponentInteraction(UInteractiveComponent* InteractiveComponent) {
}

void UAnimationComponentHumanoid::LaunchGrenade() {
}

bool UAnimationComponentHumanoid::IsUnconscious() const {
    return false;
}

bool UAnimationComponentHumanoid::IsLyingDown() const {
    return false;
}

FVector UAnimationComponentHumanoid::GetWeldingLocation() const {
    return FVector{};
}

AASFCharacter* UAnimationComponentHumanoid::GetCarrierCharacter() {
    return NULL;
}

AASFCharacter* UAnimationComponentHumanoid::GetCarriedCharacter() {
    return NULL;
}

void UAnimationComponentHumanoid::FinishShotgunBlast(float Duration) {
}

void UAnimationComponentHumanoid::ChangeBaseManagementMode(EnumBaseManagementMode Mode) {
}

void UAnimationComponentHumanoid::CancelEnterPowerLoader() {
}



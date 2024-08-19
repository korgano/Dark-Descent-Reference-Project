#include "AnimationComponentAlien.h"

UAnimationComponentAlien::UAnimationComponentAlien(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AlienClass = EnumAlienClass::DRONE;
    this->AnimPhase = EnumAlienAnimPhase::SPAWN;
    this->JumpAnimPhase = EnumJumpAnimPhase::NONE;
    this->Alien = NULL;
    this->SavedSpeed = 0.00f;
    this->SpawnWithAnimation = false;
    this->bIsInTheAir = false;
    this->CurrentLocomotion = EnumAlienLocomotionType::RUN2LEG;
    this->NextLocomotion = EnumAlienLocomotionType::NONE;
}

void UAnimationComponentAlien::UpdateLocomotionType(EnumAlienLocomotionType AlienLocomotionType) {
}

bool UAnimationComponentAlien::TransitionNeedAnimation(EnumAlienAnimPhase AnimPhaseFrom, EnumAlienAnimPhase AnimPhaseTo) const {
    return false;
}

void UAnimationComponentAlien::StopLocomotion(float StopDuration, EnumStopType _StopType) {
}

void UAnimationComponentAlien::StopCrouching() {
}

void UAnimationComponentAlien::StartScream(float Duration) {
}

void UAnimationComponentAlien::StartJumping(EnumJumpAnimPhase JumpType, float TimeJump) {
}

void UAnimationComponentAlien::StartHiss(float Duration) {
}

void UAnimationComponentAlien::StartDodging(EnumDodgingType DodgeType, FVector Destination, float TimeDodge, float IdleAfterDodge) {
}

void UAnimationComponentAlien::StartCrouching() {
}

void UAnimationComponentAlien::StartBreaching(ADoor* _AttackedDoor) {
}

EnumAlienLocomotionType UAnimationComponentAlien::ShouldChangeLocomotion(FVector Destination, float Speed) {
    return EnumAlienLocomotionType::RUN2LEG;
}

void UAnimationComponentAlien::SetLocomotionOwner(EnumAlienLocomotionOwner OwnerType, UObject* Owner) {
}

void UAnimationComponentAlien::SetIsInTheAir(bool IsInTheAir) {
}

void UAnimationComponentAlien::SetAnimPhase(EnumAlienAnimPhase NewAnimPhase) {
}

void UAnimationComponentAlien::SetAlienClass(EnumAlienClass NewAlienClass) {
}

void UAnimationComponentAlien::RotateInMove(float TurnAngle, float TurnDelay) {
}

bool UAnimationComponentAlien::NeedSpawnAnim() const {
    return false;
}

void UAnimationComponentAlien::FinishGrab(bool Kill) {
}

void UAnimationComponentAlien::EndBreaching(bool _bSuccess) {
}

bool UAnimationComponentAlien::CanJump() const {
    return false;
}



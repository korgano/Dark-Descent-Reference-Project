#include "Attack.h"

UAttack::UAttack() {
    this->bForceShifting = true;
    this->LastTimeLaunch = 0.00f;
    this->RangeAcceptanceRadius = 10.00f;
    this->AttackSelectionDistance = 0.00f;
    this->RangeMutipliedByScale = true;
    this->FrameCooldown = 0;
    this->AttackPriority = EnumAttackPriority::MEDIUM;
    this->Chance = 0.00f;
    this->MaxRange = 0.00f;
    this->MinRange = 0.00f;
    this->AcceptanceRadius_AttackMode = 150.00f;
    this->bCanDash = true;
    this->bCanDashBack = false;
    this->bScriptedAttack = false;
    this->AttackCooldown = 0.00f;
    this->ProbabilityToUseAttack = 0.00f;
    this->ProbabilityToUseDashToReachNextTarget = 0.00f;
    this->IABattleRange = 0.00f;
    this->DA_Damage_Attack = NULL;
    this->ActorTarget = NULL;
    this->DashEffect = NULL;
    this->AttackEffect = NULL;
    this->AttackComponent = NULL;
    this->SecondeCooldown = 0.00f;
}

void UAttack::TestRotation(UASFCharacterMovementComponent* MovementComponent, bool _bRootMotion, float _Angle) {
}

bool UAttack::ShouldUseAttack(AAIController* OwnerController, APawn* ControlledPawn, bool FromPosition, bool allowAcceptanceRadius, bool _UseProbability) {
    return false;
}

void UAttack::OnAttackAnimEnded_Implementation() {
}

void UAttack::OnAnimHit_Implementation(AActor* TargetHit, UAttackMontageDataAsset* DataAssetAttack) {
}

float UAttack::GetMaxRange() {
    return 0.0f;
}

float UAttack::GetDamageMin() {
    return 0.0f;
}

float UAttack::GetDamageMax() {
    return 0.0f;
}

float UAttack::GetCooldown() const {
    return 0.0f;
}

UAttackComponent* UAttack::GetAttackComponent() const {
    return NULL;
}

void UAttack::DoDamage_Implementation(AActor* _Target, FHitSoundStruct& HitSoundStruct) {
}

void UAttack::Dash_Implementation(float dashTime) {
}

bool UAttack::CanDash_Implementation() {
    return false;
}



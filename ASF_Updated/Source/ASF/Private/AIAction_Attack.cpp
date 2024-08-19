#include "AIAction_Attack.h"

UAIAction_Attack::UAIAction_Attack() {
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
    this->bAnticipateTargetMovement = false;
    this->bCanFail = false;
    this->bStartFromFurtherDist = false;
    this->FurtherDist = 0.00f;
    this->AttackCooldown = 0.00f;
    this->ProbabilityToUseAttack = 0.00f;
    this->ProbabilityToUseDashToReachNextTarget = 0.00f;
    this->IABattleRange = 0.00f;
    this->DA_Damage_Attack = NULL;
    this->Character = NULL;
    this->CharacterController = NULL;
    this->ActorTarget = NULL;
    this->DashEffect = NULL;
    this->AttackEffect = NULL;
    this->ActionComponent = NULL;
    this->SecondeCooldown = 0.00f;
    this->DisableRotationAfterHit = NULL;
}

void UAIAction_Attack::TestRotation(UASFCharacterMovementComponent* MovementComponent, bool _bRootMotion, float _Angle) {
}

bool UAIAction_Attack::ShouldUseAttack(AAIController* OwnerController, APawn* ControlledPawn, bool FromPosition, bool allowAcceptanceRadius, bool _UseProbability) {
    return false;
}

void UAIAction_Attack::OnAttackAnimEnded_Implementation() {
}

void UAIAction_Attack::OnAnimHit_Implementation(AActor* TargetHit, UAttackMontageDataAsset* DataAssetAttack) {
}

float UAIAction_Attack::GetMaxRange() {
    return 0.0f;
}

float UAIAction_Attack::GetDamageMin() {
    return 0.0f;
}

float UAIAction_Attack::GetDamageMax() {
    return 0.0f;
}

float UAIAction_Attack::GetCooldown() const {
    return 0.0f;
}

AASFCharacter* UAIAction_Attack::GetCharacter() {
    return NULL;
}

void UAIAction_Attack::GetAttackHitSoundStruct_Implementation(UAttackMontageDataAsset* DataAssetAttack, FHitSoundStruct& HitSoundStruct) {
}

UAIActionComponent* UAIAction_Attack::GetAttackComponent() const {
    return NULL;
}

void UAIAction_Attack::DoDamage_Implementation(AActor* _Target, FHitSoundStruct& HitSoundStruct) {
}

void UAIAction_Attack::Dash_Implementation(float dashTime) {
}

bool UAIAction_Attack::CanDash_Implementation() {
    return false;
}



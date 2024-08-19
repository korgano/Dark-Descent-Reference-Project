#include "AttackComponent.h"

UAttackComponent::UAttackComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ASFCharacter = NULL;
    this->ASFController = NULL;
    this->AIActionComponent = NULL;
    this->SelectedAttack = NULL;
    this->TargetAttackedEffect = NULL;
    this->bIsAttacking = false;
    this->bCanOverrideCurrentAttack = true;
    this->GeneralCooldown = 1.00f;
    this->LastTimeLaunch = 0.00f;
}

bool UAttackComponent::UpdateSelectedAttack(bool _CanOverrideAttack, bool _OnlyUseableAttack) {
    return false;
}

bool UAttackComponent::StopAttack(UAttack* _Attack) {
    return false;
}

bool UAttackComponent::StartAttack() {
    return false;
}

UAttack* UAttackComponent::SelectAttack(UAttack* _SelectedAttack, bool _CanBeOverride) {
    return NULL;
}

void UAttackComponent::RemoveAttackedEffectToTarget() {
}

bool UAttackComponent::IsAttacking() const {
    return false;
}

UAttack* UAttackComponent::GetSelectedAttack() const {
    return NULL;
}

float UAttackComponent::GetRemainingCD() const {
    return 0.0f;
}

float UAttackComponent::GetClosestAttackRange() {
    return 0.0f;
}

bool UAttackComponent::GetCanOverrideCurrentAttack() const {
    return false;
}

TArray<FAttackTargetProperties> UAttackComponent::GetAvaillableAttack(AAIController* AiControllerAlien, bool FromPosition) const {
    return TArray<FAttackTargetProperties>();
}

UAttack* UAttackComponent::GetAttackWithTag(FGameplayTag _Attacktag) const {
    return NULL;
}

void UAttackComponent::BeginSubLevelUnLoad(ASubLevelHandler* Handler, const FString& StreamingLevel) {
}

void UAttackComponent::AddAttackedEffectToTarget(AActor* _Target, TSoftClassPtr<UTinda_Effect> AttackedEffectClass) {
}



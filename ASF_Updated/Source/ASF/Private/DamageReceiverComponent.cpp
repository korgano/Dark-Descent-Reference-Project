#include "DamageReceiverComponent.h"

UDamageReceiverComponent::UDamageReceiverComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseImpactReaction = false;
    this->ImpactDuration = 2.00f;
    this->KillModuleClass = NULL;
    this->KillModule = NULL;
}

bool UDamageReceiverComponent::SetDamageStruct(FDamageResultStruct& DamageResult, AASFCharacter* asCharacter, FDamageStruct& Damage) {
    return false;
}

void UDamageReceiverComponent::OnStunDamage(FDamageResultStruct& _DamageResult, float _OldLife, float _NewLife) {
}

void UDamageReceiverComponent::OnLifeChanged_Implementation(FDamageResultStruct& _DamageResult, float _OldLife, float _NewLife) {
}

void UDamageReceiverComponent::OnImpact(FDamageResultStruct& _Damage) {
}

void UDamageReceiverComponent::HitSfx(const FHitSoundStruct& HitSoundStruct, const FDamageResultStruct& DamageResult) {
}

void UDamageReceiverComponent::HealWound(FGameplayTag _WoundTag) {
}

void UDamageReceiverComponent::HealLightWound() {
}

void UDamageReceiverComponent::HealLife(float _Value) {
}

void UDamageReceiverComponent::HealHeavyWound() {
}

void UDamageReceiverComponent::HealArmor(float _Value) {
}

EnumWound UDamageReceiverComponent::GetWoundStateForLifeValue(float _Life) {
    return EnumWound::FULL_LIFE;
}

UKillModule* UDamageReceiverComponent::GetKillModule() const {
    return NULL;
}

FGameplayTag UDamageReceiverComponent::GetImpactReaction(float _ImpactForce) {
    return FGameplayTag{};
}

float UDamageReceiverComponent::GetImpactForce(bool _CleanImpact) {
    return 0.0f;
}

void UDamageReceiverComponent::GetActorHitPoints(TArray<FVector>& HitPoints) {
}

FDamageResultStruct UDamageReceiverComponent::DoDamage(FDamageStruct Damage, const FHitSoundStruct& HitSoundStruct) {
    return FDamageResultStruct{};
}

void UDamageReceiverComponent::ClearKillModule() {
}

void UDamageReceiverComponent::ApplyLightWound(FDamageResultStruct& _Damage, TSoftClassPtr<UTinda_Effect> _ForceWoundEfFect) {
}

void UDamageReceiverComponent::ApplyHeavyWound(FDamageResultStruct& _Damage, TSoftClassPtr<UTinda_Effect> _ForceWoundEfFect) {
}

void UDamageReceiverComponent::ApplyDamage(FDamageResultStruct& DamageResult, const FHitSoundStruct& HitSoundStruct) {
}

void UDamageReceiverComponent::ApplyCritic(FDamageResultStruct& _DamageResult) {
}

void UDamageReceiverComponent::AddImpactReaction(float _ImpactForce) {
}



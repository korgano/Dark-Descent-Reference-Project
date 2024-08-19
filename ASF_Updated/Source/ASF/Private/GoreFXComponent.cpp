#include "GoreFXComponent.h"

UGoreFXComponent::UGoreFXComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UGoreFXComponent::OnWoundReceived_Implementation(AActor* _Actor, const FDamageResultStruct& _DamageResult) {
}

void UGoreFXComponent::OnDeath_Implementation(AASFCharacter* _Character, const FDamageResultStruct& _DamageResult) {
}

void UGoreFXComponent::OnDamageReceived_Implementation(AActor* _Actor, const FDamageResultStruct& _DamageResult) {
}

void UGoreFXComponent::OnBleedStateChanged_Implementation(UTinda_EffectHandlerComponent* _EffectHandler, FGameplayTag _EffectTag, bool _bAdded) {
}



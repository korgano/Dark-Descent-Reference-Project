#include "Tinda_Effect.h"

UTinda_Effect::UTinda_Effect() {
    this->bNeedTick = false;
    this->bNeedToBeSaved = false;
    this->PDAHoldingDuration = NULL;
    this->Duration = 0.00f;
    this->TimeOfApplication = 0.00f;
    this->StackingPolicy = EnumStackingPolicy::REFRESH;
    this->MaximumActiveParallelEffects = 0;
    this->Source = NULL;
    this->Target = NULL;
    this->TargetAsActor = NULL;
    this->bIsActive = false;
    this->bIsStased = false;
}

void UTinda_Effect::UpdateEffect() {
}

EnumTryApplyEffectResult UTinda_Effect::TryApply(UObject* _Source, AActor* _Target) {
    return EnumTryApplyEffectResult::HAS_REFRESHED;
}

void UTinda_Effect::SetIsStased(bool _IsStased) {
}

void UTinda_Effect::OnEndDurationEvent() {
}

bool UTinda_Effect::IsStased() const {
    return false;
}

bool UTinda_Effect::IsActive() const {
    return false;
}

UTinda_EffectHandlerComponent* UTinda_Effect::GetTarget() const {
    return NULL;
}

UObject* UTinda_Effect::GetSource() const {
    return NULL;
}

float UTinda_Effect::GetRemainingDuration() const {
    return 0.0f;
}

UTinda_Effect* UTinda_Effect::FastCreateEffect(UObject* _WorldContextObject, FName _Name, TArray<FGameplayTag> _EffectsTagToApply, TArray<FModifier> _Modifiers, FGameplayTagQuery _QueryToRespect, bool _bNeedToBeSaved, EnumStackingPolicy _StackingPolicy, float _Duration) {
    return NULL;
}

UTinda_Effect* UTinda_Effect::FastCreateAndTryApplyEffect(UObject* _Source, AActor* _Target, FName _Name, TArray<FGameplayTag> _EffectsTagToApply, TArray<FModifier> _Modifiers, FGameplayTagQuery _QueryToRespect, bool _bNeedToBeSaved, EnumStackingPolicy _StackingPolicy, float _Duration) {
    return NULL;
}

void UTinda_Effect::EndEffect() {
}

void UTinda_Effect::EndDuration_Implementation() {
}


void UTinda_Effect::DeactivateEffect_Implementation() {
}

UTinda_Effect* UTinda_Effect::CreateTindaEffectWithClass(UObject* _WorldContextObject, TSoftClassPtr<UTinda_Effect> _EffectClass) {
    return NULL;
}

UTinda_Effect* UTinda_Effect::CreateAndTryApplyTindaEffectWithClass(UObject* _Source, AActor* _Target, TSoftClassPtr<UTinda_Effect> _EffectClass) {
    return NULL;
}

void UTinda_Effect::ComputeDuration_Implementation() {
}

void UTinda_Effect::BeforeSaving_Implementation() {
}

void UTinda_Effect::AnotherEffectActivationUpdated(UTinda_EffectHandlerComponent* EffectHandler, UTinda_Effect* Effect) {
}

void UTinda_Effect::ActivateEffect_Implementation() {
}



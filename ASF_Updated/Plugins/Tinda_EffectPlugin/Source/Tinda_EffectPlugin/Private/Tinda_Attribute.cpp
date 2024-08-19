#include "Tinda_Attribute.h"

UTinda_Attribute::UTinda_Attribute() {
}

void UTinda_Attribute::UnregisterAttributeFromEffectHandler(AActor* ActorWithEffectHandlerComponent) {
}

void UTinda_Attribute::RemoveEffectFromArray(UTinda_Effect* _EffectToRemove, TArray<FEffectModifier>& _Array) {
}

void UTinda_Attribute::RegisterAttributeToEffectHandler(AActor* ActorWithEffectHandlerComponent) {
}

void UTinda_Attribute::OnNewEffectActivated(UTinda_EffectHandlerComponent* _EffectHandler, UTinda_Effect* _Effect) {
}

void UTinda_Attribute::OnEffectUpdated(UTinda_Effect* _Effect) {
}

void UTinda_Attribute::OnEffectDeactivated(UTinda_Effect* _DeactivatedEffect) {
}

void UTinda_Attribute::InitAttributeWithMinMax_BP(FGameplayTag _TagName, float _BaseValue, float _MinValue, float _MaxValue, TArray<FGameplayTag> _AdditionalTagPath) {
}

void UTinda_Attribute::InitAttributeWithMinMax(FGameplayTag _TagName, float _BaseValue, float _MinValue, float _MaxValue, TArray<FGameplayTag> _AdditionalTagPath) {
}

void UTinda_Attribute::InitAttribute_BP(FGameplayTag _TagName, float _BaseValue, TArray<FGameplayTag> _AdditionalTagPath) {
}

void UTinda_Attribute::InitAttribute(FGameplayTag _TagName, float _BaseValue, TArray<FGameplayTag> _AdditionalTagPath) {
}

FGameplayTagContainer UTinda_Attribute::GetTagPath() const {
    return FGameplayTagContainer{};
}

FGameplayTag UTinda_Attribute::GetTagName() const {
    return FGameplayTag{};
}

TArray<FEffectModifier> UTinda_Attribute::GetModifiers() {
    return TArray<FEffectModifier>();
}

float UTinda_Attribute::GetMinValue() const {
    return 0.0f;
}

float UTinda_Attribute::GetMaxValue() const {
    return 0.0f;
}

UTinda_Attribute* UTinda_Attribute::GetLongestAttribute(TArray<UTinda_Attribute*>& _Attributes) {
    return NULL;
}

float UTinda_Attribute::GetCurrentValue() const {
    return 0.0f;
}

float UTinda_Attribute::GetBaseValue() const {
    return 0.0f;
}



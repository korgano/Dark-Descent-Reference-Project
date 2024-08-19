#include "Stress_Component.h"

UStress_Component::UStress_Component(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StatComponent = NULL;
    this->StressStep = EStressStep::Cool;
    this->DamageReceiverComponent = NULL;
    this->AnimationComponent = NULL;
    this->FilterClass_WithBlockingDoors = NULL;
    this->StressComponent_DataAsset = NULL;
    this->RestDataAsset = NULL;
    this->StressAcknowsAsset = NULL;
}

EStressStep UStress_Component::UpdateStressStep_Increase(int32 nbStepUp) {
    return EStressStep::Cool;
}

EStressStep UStress_Component::UpdateStressStep_Decrease(int32 nbStepDown) {
    return EStressStep::Cool;
}

void UStress_Component::ShelterHeal(ASquad* _Squad) {
}

void UStress_Component::RemoveStressStep(const TSoftClassPtr<UStressEffect>& _ForceEffect) {
}

bool UStress_Component::IsAvailableStressEffect(const TSoftClassPtr<UStressEffect>& _EffectClass) const {
    return false;
}

void UStress_Component::HealStress(float _HealValue, bool _UseMultiplier, bool _bDislpayFeedback) {
}

float UStress_Component::GetStressHealMultiplier() {
    return 0.0f;
}

float UStress_Component::GetStressDamageMultiplier() {
    return 0.0f;
}

UStress_DataAsset* UStress_Component::GetDataAssetForStressStep(EStressStep _StressStep) {
    return NULL;
}

void UStress_Component::GetCurrentStressDescription(TArray<UStressEffect_DataAsset*>& _Desc) {
}

void UStress_Component::DoStressDamage(const FStressDamage& _Damage) {
}

void UStress_Component::DoDamageOverTime() {
}

void UStress_Component::ClearStress() {
}

void UStress_Component::BindSubLevelHandler() {
}

void UStress_Component::ApplyStressStep(const TSoftClassPtr<UStressEffect>& _ForceEffect) {
}



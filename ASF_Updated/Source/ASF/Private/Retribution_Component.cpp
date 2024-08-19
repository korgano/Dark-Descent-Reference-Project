#include "Retribution_Component.h"

URetribution_Component::URetribution_Component(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Squad = NULL;
    this->RetributionDataAsset = NULL;
    this->RetributionMode = false;
    this->RetributionAmount = 0.00f;
    this->RetributionMultiplier = NULL;
}

void URetribution_Component::RetributionTimerOver() {
}

void URetribution_Component::OnSquadMemberRemoved(ASquad* _Squad, AHumanoidMarine* Character) {
}

void URetribution_Component::OnSquadMemberAdded(ASquad* _Squad, AHumanoidMarine* Character) {
}

void URetribution_Component::OnMemberNewStressStep(UStress_Component* Stress, EStressStep _OldStressStep, EStressStep _NewStressStep) {
}

void URetribution_Component::OnMemberDeath(AASFCharacter* ActorKilled, const FDamageResultStruct& _DamageResult) {
}

void URetribution_Component::OnMemberDamageReceived(AActor* ActorWounded, const FDamageResultStruct& Damage) {
}

bool URetribution_Component::IsRetributionModeActivated() const {
    return false;
}

URetribution_DataAsset* URetribution_Component::GetRetributionDataAsset() const {
    return NULL;
}

float URetribution_Component::GetRetributionAmount() const {
    return 0.0f;
}

bool URetribution_Component::CanActivateRetribution() const {
    return false;
}

void URetribution_Component::AddRetribution(float _Amount) {
}

void URetribution_Component::ActivateRetribution() {
}



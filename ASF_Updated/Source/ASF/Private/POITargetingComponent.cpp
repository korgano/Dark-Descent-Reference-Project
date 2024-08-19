#include "POITargetingComponent.h"

UPOITargetingComponent::UPOITargetingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Character = NULL;
    this->Target = NULL;
    this->KeepTarget = false;
    this->UseMultithreading = true;
    this->SpotEnemy = false;
    this->TargetEffect = NULL;
    this->HasTargetEffect = NULL;
    this->bWeaponPerceptionValid = false;
}

AActor* UPOITargetingComponent::UpdateTarget(UPOIDefaultContainer* TargetResult, bool ForceSelect) {
    return NULL;
}

void UPOITargetingComponent::UpdateEffects(AActor* NewTarget) {
}

void UPOITargetingComponent::SightLost() {
}

void UPOITargetingComponent::SelectTarget(AActor* NewTarget, bool _KeepTarget) {
}

void UPOITargetingComponent::RunWeaponDetection_Task(UPOIDefaultContainer* _SightResult, FOnDetectionUpdatedBP Delegate_BP, const FPerceptionDelegate& Delegate_CPP) {
}

UPOIDefaultContainer* UPOITargetingComponent::RunWeaponDetection(UPOIDefaultContainer* _SightResult) {
    return NULL;
}

void UPOITargetingComponent::RunTargetDetection_Task(UPOIDefaultContainer* _SightResult, FOnDetectionUpdatedBP Delegate_BP, const FPerceptionDelegate& Delegate_CPP) {
}

UPOIDefaultContainer* UPOITargetingComponent::RunTargetDetection(UPOIDefaultContainer* _SightResult) {
    return NULL;
}

void UPOITargetingComponent::RunSpotPhaseDetection_Task(UPOIDefaultContainer* _SightResult, FOnDetectionUpdatedBP Delegate_BP, const FPerceptionDelegate& Delegate_CPP) {
}

UPOIDefaultContainer* UPOITargetingComponent::RunSpotPhaseDetection(UPOIDefaultContainer* _SightResult) {
    return NULL;
}

void UPOITargetingComponent::RunSightDetection_Task(UPOIDefaultContainer* _SightResult, FOnDetectionUpdatedBP Delegate_BP, const FPerceptionDelegate& Delegate_CPP) {
}

UPOIDefaultContainer* UPOITargetingComponent::RunSightDetection() {
    return NULL;
}

void UPOITargetingComponent::RemoveTargetEffect() {
}

void UPOITargetingComponent::OnCharacterDeath(AASFCharacter* ActorKilled, const FDamageResultStruct& _DamageResult) {
}

void UPOITargetingComponent::InitTargetingComponent() {
}

bool UPOITargetingComponent::GetWeaponHasATarget() const {
    return false;
}

TSoftClassPtr<UTinda_Effect> UPOITargetingComponent::GetTargetEffetClass() const {
    return NULL;
}

AActor* UPOITargetingComponent::GetTarget() const {
    return NULL;
}

TArray<UAIPointOfInterestContainer*> UPOITargetingComponent::GetDynamicPOIContainer() const {
    return TArray<UAIPointOfInterestContainer*>();
}

void UPOITargetingComponent::ForceSpot(AActor* SpotedActor) {
}

void UPOITargetingComponent::EnablePOIPerceptionLayer(FGameplayTag _PerceptionTag, int32 _LayerOrder) {
}

void UPOITargetingComponent::DisablePOIPerceptionLayer(FGameplayTag _PerceptionTag) {
}

void UPOITargetingComponent::ComputeAdditionalPerceptions_Task(UPOIDefaultContainer* _PerceptionResult, FOnDetectionUpdatedBP Delegate_BP, const FPerceptionDelegate& Delegate_CPP, int32 LayerIdx) {
}

UPOIDefaultContainer* UPOITargetingComponent::ComputeAdditionalPerceptions(UPOIDefaultContainer* _PerceptionResult) {
    return NULL;
}

void UPOITargetingComponent::ClearSightDetection() {
}

void UPOITargetingComponent::BeginSubLevelUnLoad(ASubLevelHandler* Handler, const FString& StreamingLevel) {
}



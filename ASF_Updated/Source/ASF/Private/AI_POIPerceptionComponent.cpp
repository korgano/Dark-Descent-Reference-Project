#include "AI_POIPerceptionComponent.h"

UAI_POIPerceptionComponent::UAI_POIPerceptionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->POIPerception_DataAsset = NULL;
    this->POIAsyncSchedulerComponent = NULL;
    this->Character = NULL;
    this->ASFCharacterAIController = NULL;
    this->PerceptionSenseConfig = NULL;
    this->PerceptionStimuliConfig = NULL;
    this->POIPerceptionContainer = NULL;
    this->SelfContainer = NULL;
    this->bPerceptionDisableForFrame = false;
}

void UAI_POIPerceptionComponent::UpdateSight_Implementation() {
}

UPOIDefaultContainer* UAI_POIPerceptionComponent::UpdatePerceptionFromResult_Task(UTask_AsyncPerception*& _OutAsyncComputation, const TArray<FGameplayTag>& ResultTags, FGameplayTag _PerceptionSense, EnumPOIResearchType RunMode, const FGameplayTagContainer& EmitterCategories, bool _GenerateEvent, bool _NeedPerception, bool _UseMultiThreading) {
    return NULL;
}

UPOIDefaultContainer* UAI_POIPerceptionComponent::UpdatePerceptionFromResult(const TArray<FGameplayTag>& ResultTags, FGameplayTag _PerceptionSense, EnumPOIResearchType RunMode, const FGameplayTagContainer& EmitterCategories, bool _GenerateEvent, bool _NeedPerception) {
    return NULL;
}

UPOIDefaultContainer* UAI_POIPerceptionComponent::UpdatePerceptionFromPool_Task(UTask_AsyncPerception*& _OutAsyncComputation, const TArray<FGameplayTag>& PoolTags, FGameplayTag _PerceptionSense, EnumPOIResearchType RunMode, const FGameplayTagContainer& EmitterCategories, bool _GenerateEvent, bool _NeedPerception, bool _UseMultiThreading) {
    return NULL;
}

UPOIDefaultContainer* UAI_POIPerceptionComponent::UpdatePerceptionFromPool(const TArray<FGameplayTag>& PoolTags, FGameplayTag _PerceptionSense, EnumPOIResearchType RunMode, const FGameplayTagContainer& EmitterCategories, bool _GenerateEvent, bool _NeedPerception) {
    return NULL;
}

UPOIDefaultContainer* UAI_POIPerceptionComponent::UpdatePerception_Task(UTask_AsyncPerception*& _OutAsyncComputation, const TArray<UAIPointOfInterestContainer*>& PerceptionContainer, FGameplayTag _PerceptionSense, EnumPOIResearchType RunMode, const FGameplayTagContainer& EmitterCategories, bool _GenerateEvent, bool _NeedPerception, bool _UseMultiThreading) {
    return NULL;
}

UPOIDefaultContainer* UAI_POIPerceptionComponent::UpdatePerception(TArray<UAIPointOfInterestContainer*> PerceptionContainer, FGameplayTag _PerceptionSense, EnumPOIResearchType RunMode, const FGameplayTagContainer& EmitterCategories, bool _GenerateEvent, bool _NeedPerception) {
    return NULL;
}

void UAI_POIPerceptionComponent::SwapPOIContainer(UPOIDefaultContainer* _Container) {
}

void UAI_POIPerceptionComponent::SetPOIPerceptionContainer(UPOIDefaultContainer* _POIPerceptionContainer) {
}

UPOIDefaultContainer* UAI_POIPerceptionComponent::LateUpdatePerception(UTask_AsyncPerception* _AsyncPerception) {
    return NULL;
}

bool UAI_POIPerceptionComponent::IsPOIPerceptionEnable() const {
    return false;
}

bool UAI_POIPerceptionComponent::IsInit() const {
    return false;
}

void UAI_POIPerceptionComponent::InitPOIPerception(UPOIPerception_DataAsset* _POIPerception_DataAsset) {
}

bool UAI_POIPerceptionComponent::HasSense(FGameplayTag GameplayTag) const {
    return false;
}

UAIPointOfInterestVolatile* UAI_POIPerceptionComponent::GetStimuli(FGameplayTag StimuliTag) {
    return NULL;
}

UAIPointOfInterestVolatile* UAI_POIPerceptionComponent::GetSense(FGameplayTag SenseTag) {
    return NULL;
}

UPOIDefaultContainer* UAI_POIPerceptionComponent::GetSelfContainer() const {
    return NULL;
}

UPOIDefaultContainer* UAI_POIPerceptionComponent::GetPOIPerceptionContainer() const {
    return NULL;
}

UAI_POIAsyncSchedulerComponent* UAI_POIPerceptionComponent::GetPOIAsyncSchedulerComponent() const {
    return NULL;
}

UAIPointOfInterestConfig* UAI_POIPerceptionComponent::GetPerceptionStimuliConfig() const {
    return NULL;
}

UAIPointOfInterestConfig* UAI_POIPerceptionComponent::GetPerceptionSenseConfig() const {
    return NULL;
}

UPOIDefaultContainer* UAI_POIPerceptionComponent::GetPerceptionResult(FGameplayTag _PerceptionSense) const {
    return NULL;
}

UPOIDefaultContainer* UAI_POIPerceptionComponent::GetInitPerceptionResult(FGameplayTag _PerceptionSense) {
    return NULL;
}

void UAI_POIPerceptionComponent::EnablePOIPerception() {
}

void UAI_POIPerceptionComponent::EnablePerception() {
}

void UAI_POIPerceptionComponent::DisablePOIPerception() {
}

void UAI_POIPerceptionComponent::DisablePerceptionForFrame() {
}

UPOIDefaultContainer* UAI_POIPerceptionComponent::ComputePerception_Implementation(FGameplayTag __PerceptionTag) {
    return NULL;
}

void UAI_POIPerceptionComponent::ComputeAllPerceptions_Implementation() {
}

void UAI_POIPerceptionComponent::ClearPerceptionResult(FGameplayTag _PerceptionSense) {
}

bool UAI_POIPerceptionComponent::CanPerceive(const FGameplayTag& _PerceptionTag) const {
    return false;
}

void UAI_POIPerceptionComponent::ApplyPerceptionCooldown(FGameplayTag PerceptionTag) {
}

void UAI_POIPerceptionComponent::AddPOIPerception(UPOIPerception_DataAsset* _POIPerception_DataAsset, UPointOfInterest_DataAsset* NewPerception_DataAsset) {
}



#include "Task_AsyncPerception.h"

UTask_AsyncPerception::UTask_AsyncPerception() {
    this->bIsAsync = false;
    this->bIsCpp = false;
    this->POIPerceptionComponent = NULL;
    this->POIAsyncSchedulerComponent = NULL;
    this->PerceptionSense = NULL;
    this->ResultContainer = NULL;
    this->RunMode = EnumPOIResearchType::SingleResult;
    this->GenerateEvent = false;
    this->Result = false;
    this->HadResult = false;
    this->bNeedAsyncAboart = false;
}

UTask_AsyncPerception* UTask_AsyncPerception::WaitPerceptionResult_BP(UTask_AsyncPerception* AsyncPerception) {
    return NULL;
}

void UTask_AsyncPerception::SetPOIAsyncSchedulerComponent(UAI_POIAsyncSchedulerComponent* _POIAsyncSchedulerComponent) {
}

void UTask_AsyncPerception::ResultComputed() {
}

void UTask_AsyncPerception::ResultAborted() {
}

void UTask_AsyncPerception::OnPerceptionUpdated_BP(UTask_AsyncPerception* _AsyncPerception) {
}

void UTask_AsyncPerception::OnPerceptionUpdated(UTask_AsyncPerception* _AsyncPerception) {
}

UAIPointOfInterestVolatile* UTask_AsyncPerception::InitAsyncPerception(UAI_POIPerceptionComponent* _POIPerceptionComponent, const TArray<UAIPointOfInterestContainer*>& _PerceptionContainer, FGameplayTag _PerceptionSenseTag, EnumPOIResearchType _RunMode, const FGameplayTagContainer& _EmitterCategories, bool _GenerateEvent, bool _bIsAsync) {
    return NULL;
}

UPOIDefaultContainer* UTask_AsyncPerception::GetResultContainer() const {
    return NULL;
}

bool UTask_AsyncPerception::GetResult() const {
    return false;
}

UAI_POIPerceptionComponent* UTask_AsyncPerception::GetPOIPerceptionComponent() const {
    return NULL;
}

FGameplayTag UTask_AsyncPerception::GetPerceptionSenseTag() const {
    return FGameplayTag{};
}

UAIPointOfInterestVolatile* UTask_AsyncPerception::GetPerceptionSense() const {
    return NULL;
}

bool UTask_AsyncPerception::GetIsAsync() const {
    return false;
}

bool UTask_AsyncPerception::GetHadResult() const {
    return false;
}

bool UTask_AsyncPerception::GetGenerateEvent() const {
    return false;
}

bool UTask_AsyncPerception::ComputePerception() {
    return false;
}

void UTask_AsyncPerception::ClearAsyncPerceptionTask() {
}

void UTask_AsyncPerception::AbortAsynchPerception() {
}



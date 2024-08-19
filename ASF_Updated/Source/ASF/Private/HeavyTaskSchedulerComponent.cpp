#include "HeavyTaskSchedulerComponent.h"

UHeavyTaskSchedulerComponent::UHeavyTaskSchedulerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HeavyComputationNbr = 0;
}

UHeavyTask* UHeavyTaskSchedulerComponent::ScheduleNewHeavyTask(UObject* _World, FTimerDynamicDelegate Delegate, float Time) {
    return NULL;
}

void UHeavyTaskSchedulerComponent::OnSubLevelIsLoaded(ASubLevelHandler* Handler, const FString& StreamingLevel) {
}



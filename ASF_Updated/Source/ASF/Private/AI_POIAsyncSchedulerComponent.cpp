#include "AI_POIAsyncSchedulerComponent.h"

UAI_POIAsyncSchedulerComponent::UAI_POIAsyncSchedulerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UAI_POIAsyncSchedulerComponent::ScheduleAsyncPerception(UTask_AsyncPerception* AsyncPerception) {
}

void UAI_POIAsyncSchedulerComponent::ReleaseAsyncPerception(UTask_AsyncPerception* _Task_AsyncPerception) {
}

UTask_AsyncPerception* UAI_POIAsyncSchedulerComponent::GetNewAsyncPerception() {
    return NULL;
}



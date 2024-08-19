#include "HeavyTaskDividerComponent.h"

UHeavyTaskDividerComponent::UHeavyTaskDividerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HeavyComputationNbr = 0;
}

UHeavyTask* UHeavyTaskDividerComponent::ScheduleNewDividedHeavyTask(UObject* _World, FTimerDynamicDelegate Delegate, float Time) {
    return NULL;
}



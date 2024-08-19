#include "HeavyTask.h"

UHeavyTask::UHeavyTask() {
    this->HeavyTaskComponent = NULL;
    this->UpdateTime = 0.00f;
    this->LastUpdate = 0.00f;
}

float UHeavyTask::UpdateTaskTimer(float _DeltaTime) {
    return 0.0f;
}

void UHeavyTask::StopHeavyTask() {
}

void UHeavyTask::StartHeavyTask() {
}

void UHeavyTask::InitHeavyTask(UHeavyTaskComponent* _HeavyTaskComponent, FTimerDynamicDelegate _Delegate, float _Time) {
}

bool UHeavyTask::ExecuteTask() {
    return false;
}



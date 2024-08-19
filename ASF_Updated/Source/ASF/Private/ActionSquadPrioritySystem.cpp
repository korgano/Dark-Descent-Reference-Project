#include "ActionSquadPrioritySystem.h"

UActionSquadPrioritySystem::UActionSquadPrioritySystem() {
    this->Squad = NULL;
}

void UActionSquadPrioritySystem::SetSquad(ASquad* _Squad) {
}

AHumanoidTactical* UActionSquadPrioritySystem::ResolveTie(TArray<FHumanoidActionDurationEstimation>& _BestMarines) const {
    return NULL;
}

UWorld* UActionSquadPrioritySystem::GetWorld() const {
    return NULL;
}

float UActionSquadPrioritySystem::GetVelocityForMarine(AHumanoidTactical* _Humanoid) const {
    return 0.0f;
}

float UActionSquadPrioritySystem::GetRemainingDurationForCurrentInteraction(AHumanoidTactical* _Humanoid) {
    return 0.0f;
}

float UActionSquadPrioritySystem::GetMarineFirePower(AHumanoidTactical* _Humanoid) const {
    return 0.0f;
}

float UActionSquadPrioritySystem::GetFocusActivitySelectWeight(const AHumanoidTactical* _currentSelectedHumanoid, const AHumanoidTactical* _Humanoid, const FVector cursorLoc) const {
    return 0.0f;
}

void UActionSquadPrioritySystem::GetBestMarinesInOrder(TArray<FHumanoidActionDurationEstimation>& _Humanoids, TArray<FHumanoidActionDurationEstimation>& _BestMarines) const {
}

AHumanoidTactical* UActionSquadPrioritySystem::GetBestMarineForInteraction(UInteractiveComponent* _InteractiveComponent, const TArray<AHumanoidTactical*>& _AvailableHumanoid, bool _bRun) {
    return NULL;
}

AHumanoidTactical* UActionSquadPrioritySystem::GetBestHumanoidToFocusLight(UActivity* Activity_PlayerFocus) {
    return NULL;
}

TArray<UAction*> UActionSquadPrioritySystem::GetActionToConsider(AHumanoidTactical* _Humanoid) {
    return TArray<UAction*>();
}

float UActionSquadPrioritySystem::EstimateTravelDurationToLocation(AHumanoidTactical* _Humanoid, UInteractiveComponent* _InteractiveComponent, bool _bRun) {
    return 0.0f;
}

float UActionSquadPrioritySystem::EstimateInteractionDuration(AHumanoidTactical* _Humanoid, UInteractiveComponent* _InteractiveComponent) {
    return 0.0f;
}



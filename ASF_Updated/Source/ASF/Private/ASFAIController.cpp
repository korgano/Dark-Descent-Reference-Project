#include "ASFAIController.h"

AASFAIController::AASFAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->POIPerceptionComponent = NULL;
}

void AASFAIController::UpdatePerception_Internal(const FGameplayTagContainer& _PerceptionToEnable, const FGameplayTagContainer& _PerceptionToDisable) {
}

void AASFAIController::UpdatePerception() {
}

void AASFAIController::RemovePerceptions(const FGameplayTagContainer& _PerceptionToRemove) {
}

bool AASFAIController::IsPerceptionAvailable(FGameplayTag _PerceptionTag) const {
    return false;
}

void AASFAIController::HandlePartialRepath(FVector _RepathDest) {
}

UAI_POIPerceptionComponent* AASFAIController::GetPOIPerceptionComponent() {
    return NULL;
}

FGameplayTagContainer AASFAIController::GetDisabledPerception() const {
    return FGameplayTagContainer{};
}

void AASFAIController::GetCurrentStatePerception(FGameplayTagContainer& PerceptionEnable, FGameplayTagContainer& PerceptionDisable) const {
}

TMap<FGameplayTag, bool> AASFAIController::GetAvaillablePerceptionMap() const {
    return TMap<FGameplayTag, bool>();
}

UAIStateManager* AASFAIController::GetAiStateManager() const {
    return NULL;
}

FGameplayTagContainer AASFAIController::GetAddedPerception() const {
    return FGameplayTagContainer{};
}

void AASFAIController::EnablePerceptions(const FGameplayTagContainer& _PerceptionToEnable) {
}

void AASFAIController::DisablePerceptions(const FGameplayTagContainer& _PerceptionToDisable) {
}

void AASFAIController::AddPerceptions(const FGameplayTagContainer& _PerceptionToAdd) {
}



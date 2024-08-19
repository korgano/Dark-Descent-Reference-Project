#include "PhaseChangeSubObjectiveComponent.h"

UPhaseChangeSubObjectiveComponent::UPhaseChangeSubObjectiveComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CheckEvent = EnumPhaseChangeSubObjective::ON_OLD_PHASE;
}

void UPhaseChangeSubObjectiveComponent::OnTacticalPhaseChanged_Event(UFactionSystemic* FactionSystemic, const FGameplayTag& OldPhase, const FGameplayTag& NewPhase) {
}

void UPhaseChangeSubObjectiveComponent::OnSystemicActivatedOnEventSystem(ATMEventSystem* EventSystem, UFactionSystemic* FactionSystemic) {
}

void UPhaseChangeSubObjectiveComponent::OnEventSystemSetOnGameMode(AASFGameModeBase_TacticalMode* GameMode, ATMEventSystem* EventSystem) {
}



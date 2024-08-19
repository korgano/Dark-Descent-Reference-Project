#include "AIController_Squad.h"

AAIController_Squad::AAIController_Squad(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SquadState = EnumAiEnemyMarineState::NONE;
    this->Squad = NULL;
    this->SquadType = EnumSquadType::REGULAR;
}

void AAIController_Squad::SoundThreatDissipated() {
}

void AAIController_Squad::SoundHeard(FVector _SoundLocation) {
}

void AAIController_Squad::SetBehaviorState_Implementation(EnumAiEnemyMarineState EnumAiEnemyMarineState) {
}

void AAIController_Squad::OnTrackingSystemUpdated(UTrackingSystemComponent* TrackingSystemComponent) {
}

void AAIController_Squad::OnTargetChanged(UPOITargetingComponent* POITargetingComponent, AActor* _OldTarget, AActor* _NewTarget) {
}

void AAIController_Squad::OnSystemicActivatedOnEventSystem(ATMEventSystem* EventSystem, UFactionSystemic* FactionSystemic) {
}

void AAIController_Squad::OnSquadMemberRemoved(ASquad* NewSquad, AHumanoidMarine* Member) {
}

void AAIController_Squad::OnSquadMemberAdded(ASquad* NewSquad, AHumanoidMarine* Member) {
}

void AAIController_Squad::OnPhaseChanged(UFactionSystemic* FactionSystemic, const FGameplayTag& OldPhase, const FGameplayTag& NewPhase) {
}

void AAIController_Squad::OnPerceptiedEnemiesUpdated(ASquad* _Squad, bool _EnemyPerceptied) {
}

void AAIController_Squad::OnEventSystemSet(AASFGameModeBase_TacticalMode* GameMode, ATMEventSystem* EventSystem) {
}

EnumSquadType AAIController_Squad::GetSquadType() const {
    return EnumSquadType::REGULAR;
}

FVector AAIController_Squad::GetPerceptiedThreatLocation() {
    return FVector{};
}



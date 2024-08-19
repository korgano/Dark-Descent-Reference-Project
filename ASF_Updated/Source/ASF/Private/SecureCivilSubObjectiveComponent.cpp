#include "SecureCivilSubObjectiveComponent.h"

USecureCivilSubObjectiveComponent::USecureCivilSubObjectiveComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NbCivilSecured = 0;
    this->NbCivilDead = 0;
}

void USecureCivilSubObjectiveComponent::OnSecureCivil(AHumanoidTactical* _Humanoid, bool B) {
}

void USecureCivilSubObjectiveComponent::OnMissionRegistered(AASFGameState_TacticalMode* GameState, AMission* Mission) {
}

void USecureCivilSubObjectiveComponent::OnCivilDie(AASFCharacter* ActorKilled, const FDamageResultStruct& _DamageResult) {
}

void USecureCivilSubObjectiveComponent::OnCivilAdded(AHumanoidTactical* _Humanoid, bool B) {
}



#include "SquadDrone.h"

ASquadDrone::ASquadDrone(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SquadDroneState = ETacticalDroneState::Follow;
    this->DroneCombatStance = EDroneCombatStance::Defensive;
    this->NavigationalArrow_Icon = NULL;
}

void ASquadDrone::UpdateDroneMode() {
}

bool ASquadDrone::SetSquadDroneState_Implementation(ETacticalDroneState _NewSquadDroneState) {
    return false;
}

void ASquadDrone::SetDroneCombatStance(EDroneCombatStance _DroneCombatStance) {
}



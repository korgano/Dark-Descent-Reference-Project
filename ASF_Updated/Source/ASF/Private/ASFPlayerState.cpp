#include "ASFPlayerState.h"

AASFPlayerState::AASFPlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Squad = NULL;
    this->SquadDrone = NULL;
    this->NbAllies = 0;
}

void AASFPlayerState::SetSquadDrone(ASquadDrone* _NewSquad) {
}

void AASFPlayerState::SetSquad(ASquad* _NewSquad) {
}

ASquad* AASFPlayerState::GetSquadWithoutContext(const UObject* WorldContextObject) {
    return NULL;
}

ASquadDrone* AASFPlayerState::GetSquadDroneWithoutContext(const UObject* WorldContextObject) {
    return NULL;
}

ASquadDrone* AASFPlayerState::GetSquadDrone(bool _CreateIfNeeded) {
    return NULL;
}

ASquad* AASFPlayerState::GetSquad() const {
    return NULL;
}

int32 AASFPlayerState::GetNewAllyID() {
    return 0;
}

ASquad* AASFPlayerState::CreateSquad_Implementation() {
    return NULL;
}



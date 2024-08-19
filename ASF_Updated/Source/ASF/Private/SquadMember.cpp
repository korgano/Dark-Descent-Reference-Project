#include "SquadMember.h"

USquadMember::USquadMember(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Squad = NULL;
}

void USquadMember::SetSquad(ASquad* _Squad) {
}

ASquad* USquadMember::GetSquad() {
    return NULL;
}



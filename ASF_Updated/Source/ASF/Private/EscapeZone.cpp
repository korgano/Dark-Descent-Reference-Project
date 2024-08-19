#include "EscapeZone.h"
#include "Tinda_EffectHandlerComponent.h"

AEscapeZone::AEscapeZone(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EffectHandlerComponent = CreateDefaultSubobject<UTinda_EffectHandlerComponent>(TEXT("EffectHandlerComponent"));
    this->bAutoInitialize = true;
    this->Squad = NULL;
    this->bSquadCreated = false;
}

void AEscapeZone::OnSquadCreated_Implementation(AASFPlayerState* _PlayerState, ASquad* _Squad) {
}

void AEscapeZone::OnMemberRemovedFromSquad_Implementation(ASquad* _Squad, AHumanoidMarine* _Member) {
}

void AEscapeZone::OnMemberAddedToSquad_Implementation(ASquad* _Squad, AHumanoidMarine* _Member) {
}

void AEscapeZone::Initialize_Implementation() {
}



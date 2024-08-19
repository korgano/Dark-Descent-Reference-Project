#include "AntiAircraft_Missile.h"

AAntiAircraft_Missile::AAntiAircraft_Missile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MissileTarget = NULL;
    this->AntiAircraft_MissileState = EAntiAircraft_MissileState::READY;
    this->PDA_Missile = NULL;
}

void AAntiAircraft_Missile::SetMissileState_Implementation(EAntiAircraft_MissileState _AntiAircraft_MissileState) {
}

void AAntiAircraft_Missile::FireMissile_Implementation(AActor* _Target, FVector _TargetLocation, float DelayBeforeLaunch) {
}



#include "AntiAircraft_Turret.h"
#include "Tinda_EffectHandlerComponent.h"

AAntiAircraft_Turret::AAntiAircraft_Turret(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EffectHandlerComponent = CreateDefaultSubobject<UTinda_EffectHandlerComponent>(TEXT("EffectHandlerComponent"));
    this->Target = NULL;
    this->AntiAircraft_TurretState = EAntiAircraft_TurretState::IDLE;
    this->PDA_AntiAir_Turret = NULL;
}

void AAntiAircraft_Turret::SetTarget(AActor* _Target) {
}

void AAntiAircraft_Turret::SetAntiAircraft_TurretState_Implementation(EAntiAircraft_TurretState _AntiAircraft_TurretState) {
}

TArray<AAntiAircraft_Missile*> AAntiAircraft_Turret::FireMissile_Implementation(int32 _NbMissile, AActor* _Target, float DelayBeforeLaunch) {
    return TArray<AAntiAircraft_Missile*>();
}



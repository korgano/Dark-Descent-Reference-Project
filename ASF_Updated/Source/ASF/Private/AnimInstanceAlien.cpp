#include "AnimInstanceAlien.h"

UAnimInstanceAlien::UAnimInstanceAlien() {
    this->AnimPhase = EnumAlienAnimPhase::SPAWN;
    this->LocomotionOwner = EnumAlienLocomotionOwner::SPLINE;
    this->AlienClass = EnumAlienClass::DRONE;
    this->AbductedMarine = NULL;
    this->bIsInAbductingMove = false;
    this->AnimPhaseFH = EnumFacehuggerAnimPhase::HUNTING;
}

void UAnimInstanceAlien::TickGrabHand(float fDeltaTime) {
}

void UAnimInstanceAlien::TickAbductRun(float fDeltaTime) {
}

void UAnimInstanceAlien::StopAbducting() {
}

void UAnimInstanceAlien::StartChargeImpact_Implementation(FVector Location, float Duration) {
}

void UAnimInstanceAlien::StartAbducting() {
}

void UAnimInstanceAlien::SpawnFromEgg_Implementation(AActor* Egg) {
}

void UAnimInstanceAlien::SetLocomotionOwner_Implementation(EnumAlienLocomotionOwner NewLocomotionOwner, UObject* OwnerObject) {
}

void UAnimInstanceAlien::SetAnimPhase_Implementation(EnumAlienAnimPhase NewAnimPhase) {
}

void UAnimInstanceAlien::PlaySpawnPoint_Implementation(ASpawnPoint* SpawnPoint) {
}

void UAnimInstanceAlien::OnAbductRange(UTinda_EffectHandlerComponent* EffectHandler, FGameplayTag Effect, bool bAdded) {
}



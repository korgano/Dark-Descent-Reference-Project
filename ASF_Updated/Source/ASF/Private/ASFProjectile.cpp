#include "ASFProjectile.h"

AASFProjectile::AASFProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ProjectileComponent = NULL;
    this->Weapon = NULL;
    this->HitActor = NULL;
    this->HasHit = false;
}

UObject* AASFProjectile::GenerateObject(UWorld* World, UClass* OutputType) {
    return NULL;
}

void AASFProjectile::EnableObject_Intern_Implementation() {
}

void AASFProjectile::EnableObject() {
}

void AASFProjectile::DisableObject_Intern_Implementation() {
}

void AASFProjectile::DisableObject() {
}



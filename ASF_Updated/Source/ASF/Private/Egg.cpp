#include "Egg.h"
#include "AIPerceptionListenerComponent.h"
#include "EnemyStatComponent.h"

AEgg::AEgg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StatComponent = CreateDefaultSubobject<UEnemyStatComponent>(TEXT("EggStatComponent"));
    this->Nest = NULL;
    this->DataAsset = NULL;
    this->EnemyTargetingComponent = NULL;
    this->HasStartOpening = false;
    this->bIsVisible = false;
    this->AIPerceptionListenerComponent = CreateDefaultSubobject<UAIPerceptionListenerComponent>(TEXT("PerceptionComponent"));
    this->Spawning_NavFilter = NULL;
    this->bAutoRegisterToEggPool = true;
}

void AEgg::UnregisterFromEggPool() {
}

void AEgg::TryAddingToNest() {
}

void AEgg::SetNest(ANest* _Nest) {
}

void AEgg::RemovePerception() {
}

void AEgg::RegisterToEggPool() {
}

void AEgg::OpeningEgg_Implementation(AActor* _SeenTarget) {
}

void AEgg::OpenEgg_Implementation() {
}

void AEgg::OnObjectSelected_Implementation(UObject* Object) {
}

void AEgg::LaunchDelayOpen_Implementation() {
}

bool AEgg::IsRegisteredToEggPool() {
    return false;
}

bool AEgg::GetAutoRegisterToEggPool() {
    return false;
}



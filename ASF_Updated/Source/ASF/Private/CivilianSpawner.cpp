#include "CivilianSpawner.h"

ACivilianSpawner::ACivilianSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHasSpawnCivil = false;
    this->AssociatedHumanoid = NULL;
    this->SpawnAtBeginPlay = true;
    this->CivilianGender = EGender::MALE;
}

AHumanoidTactical* ACivilianSpawner::SpawnHumanoid(FTransform _Transform) {
    return NULL;
}



void ACivilianSpawner::OnCivilianListChanged(AHumanoidTactical* _Humanoid, bool _Added) {
}

FTransform ACivilianSpawner::GetSpawnTransform_Implementation() {
    return FTransform{};
}



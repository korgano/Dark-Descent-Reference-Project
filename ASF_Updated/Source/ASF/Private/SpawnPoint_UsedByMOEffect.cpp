#include "SpawnPoint_UsedByMOEffect.h"

USpawnPoint_UsedByMOEffect::USpawnPoint_UsedByMOEffect() {
    this->Name = TEXT("SpawnPoint used by Massive Onslaught");
    this->EffectsTagToApply.AddDefaulted(1);
    this->bNeedToBeSaved = true;
}



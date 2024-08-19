#include "SpawnEvent.h"

USpawnEvent::USpawnEvent() {
    this->Systemic = NULL;
    this->CalculatedBudget = 0;
}

void USpawnEvent::Spawn_Implementation() {
}

int32 USpawnEvent::GetCalculatedBudget() const {
    return 0;
}

int32 USpawnEvent::CalculateBudget_Implementation() {
    return 0;
}



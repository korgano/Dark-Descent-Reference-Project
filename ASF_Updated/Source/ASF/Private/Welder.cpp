#include "Welder.h"

AWelder::AWelder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsCutting = false;
}

void AWelder::Stop_Implementation() {
}

void AWelder::Start_Implementation() {
}

void AWelder::SetIsCutting(bool IsCutting) {
}



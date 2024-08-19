#include "OverwatchObject.h"

UOverwatchObject::UOverwatchObject() {
    this->World = NULL;
    this->OverwatchComponent = NULL;
    this->Owner = NULL;
    this->bDebugDisplay = false;
}

void UOverwatchObject::Init_Implementation(UWorld* _World, UMarineOverwatchComponent* _OverwatchComponent) {
}

TArray<FVector> UOverwatchObject::GetInfo_Implementation() {
    return TArray<FVector>();
}

FVector UOverwatchObject::ConsumeBestTarget_Implementation() {
    return FVector{};
}



#include "ObjectiveLootable.h"
#include "Tinda_EffectHandlerComponent.h"

AObjectiveLootable::AObjectiveLootable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EffectHandler = CreateDefaultSubobject<UTinda_EffectHandlerComponent>(TEXT("Effect Handler"));
    this->bIsSuccessfullyLooted = false;
}

void AObjectiveLootable::StopLooting(bool SuccessfullyLooted) {
}

void AObjectiveLootable::StartLooting() {
}

void AObjectiveLootable::SetIsLootable(bool IsLootable) {
}

void AObjectiveLootable::ResetToClosedAfterLoading_Implementation() {
}

void AObjectiveLootable::Open_Implementation() {
}

UTinda_EffectHandlerComponent* AObjectiveLootable::GetEffectHandler() const {
    return NULL;
}

void AObjectiveLootable::Close_Implementation(bool SuccessfullyLooted) {
}



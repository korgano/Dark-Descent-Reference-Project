#include "ElectricPillar.h"
#include "Tinda_EffectHandlerComponent.h"
#include "CommonSaveLoadComponent.h"

AElectricPillar::AElectricPillar(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CommonSaveLoadComponent = CreateDefaultSubobject<UCommonSaveLoadComponent>(TEXT("CommonSaveLoadComponent"));
    this->EffectHandlerComponent = CreateDefaultSubobject<UTinda_EffectHandlerComponent>(TEXT("EffectHandlerComponent"));
    this->delaySequence = 60.00f;
    this->delayFX = 4.00f;
    this->Radius = 1400.00f;
    this->radiusFX = 1500.00f;
    this->activated = false;
    this->delaySequenceSaved = 0.00f;
    this->inFXTimer = false;
}

void AElectricPillar::StopSequence() {
}

void AElectricPillar::StartSequence() {
}

void AElectricPillar::PlayFX_Implementation() {
}

void AElectricPillar::OnUpdateTag(UTinda_EffectHandlerComponent* EffectHandler, FGameplayTag Effect, bool bAdded) {
}

void AElectricPillar::OnEndTimerSequence() {
}

void AElectricPillar::OnEndTimerFX() {
}

FVector AElectricPillar::GetExplosionLocation_Implementation() const {
    return FVector{};
}

TArray<AActor*> AElectricPillar::DoDamages_Implementation() {
    return TArray<AActor*>();
}

void AElectricPillar::BeginSubLevelUnLoad(ASubLevelHandler* Handler, const FString& StreamingLevel) {
}



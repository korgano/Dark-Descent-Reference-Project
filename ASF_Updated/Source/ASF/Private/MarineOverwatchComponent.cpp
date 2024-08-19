#include "MarineOverwatchComponent.h"

UMarineOverwatchComponent::UMarineOverwatchComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Allow360Check = false;
    this->bEnableSingleMarineOnPlayerFocus = false;
    this->bEnableMultiMarineOnPlayerFocus = false;
    this->bEnableLeaderOnPlayerFocus = false;
}

void UMarineOverwatchComponent::InitActions(AHumanoid* _Humanoid) {
}

TArray<FVector> UMarineOverwatchComponent::GetOverwatch_Implementation(const TArray<EnumOverwatchType>& OverwatchTypes) {
    return TArray<FVector>();
}

bool UMarineOverwatchComponent::GetAllow360Check() {
    return false;
}



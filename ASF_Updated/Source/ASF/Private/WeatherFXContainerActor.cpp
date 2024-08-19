#include "WeatherFXContainerActor.h"

AWeatherFXContainerActor::AWeatherFXContainerActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Type = WeatherType::STORM;
}

void AWeatherFXContainerActor::RegisterToMission(AASFGameState_TacticalMode* GameState, AMission* Mission) {
}

void AWeatherFXContainerActor::DeactiveContainer_Implementation() {
}

void AWeatherFXContainerActor::ActiveContainer_Implementation() {
}



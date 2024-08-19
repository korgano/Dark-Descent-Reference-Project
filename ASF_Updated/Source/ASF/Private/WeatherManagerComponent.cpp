#include "WeatherManagerComponent.h"

UWeatherManagerComponent::UWeatherManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UWeatherManagerComponent::UnregisterWeatherFXContainerActor(AWeatherFXContainerActor* WeatherFXContainerActor) {
}

void UWeatherManagerComponent::StopWeatherContainerByTypeAndStep(WeatherType Type) {
}

void UWeatherManagerComponent::StopWeatherByType(WeatherType Type) {
}

void UWeatherManagerComponent::StartWeatherContainerByTypeAndStep(WeatherType Type, int32 Step, float powerStep) {
}

void UWeatherManagerComponent::StartStepWeatherByType(WeatherType Type) {
}

void UWeatherManagerComponent::SetNewStepWeatherById(int32 ID) {
}

void UWeatherManagerComponent::RegisterWeatherFXContainerActor(AWeatherFXContainerActor* WeatherFXContainerActor) {
}

void UWeatherManagerComponent::OnNewStepWeather(WeatherType Type) {
}

TArray<FWeather> UWeatherManagerComponent::GetWeathers() {
    return TArray<FWeather>();
}



#include "Weather_DataAsset.h"

UWeather_DataAsset::UWeather_DataAsset() {
    this->Type = WeatherType::STORM;
    this->timersStep.AddDefaulted(3);
    this->resetStep = -1;
    this->triggerStepForNewRun = 1;
    this->newRunStep = 0;
}



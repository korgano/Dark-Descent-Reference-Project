#include "Gloomy_DataAsset.h"

UGloomy_DataAsset::UGloomy_DataAsset() {
    this->GloomyStressStepThreshold = EStressStep::Panicked;
    this->SquadStatus.AddDefaulted(1);
}



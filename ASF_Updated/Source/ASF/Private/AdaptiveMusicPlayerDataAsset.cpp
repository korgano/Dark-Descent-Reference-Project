#include "AdaptiveMusicPlayerDataAsset.h"

UAdaptiveMusicPlayerDataAsset::UAdaptiveMusicPlayerDataAsset() {
    this->VolumeFadeDuration = 2.00f;
    this->IntensityFadeDuration = 2.00f;
    this->DetectionBuildUpSoundCue = NULL;
    this->DetectionBuildUpDropSoundCue = NULL;
    this->DetectionBuildUpMusicVolume = 0.40f;
    this->DetectionBuildUpFadeOutDuration = 0.50f;
    this->DetectionBuildUpMusicFadeInDuration = 0.20f;
    this->DetectionBuildUpMusicFadeOutDuration = 0.50f;
    this->MassiveOnslaughtBuildUpFadeInDuration = 1.00f;
    this->MassiveOnslaughtBuildUpMusicFadeInDuration = 1.00f;
}



#include "LevelPrimaryDataAsset.h"

ULevelPrimaryDataAsset::ULevelPrimaryDataAsset() {
    this->ForceSaveOnNOCHTSMode = false;
    this->ActiveFactionsAtStart.AddDefaulted(1);
    this->HiveSizeDataTable = NULL;
    this->DifficultyDataTable = NULL;
    this->EventsDataTable = NULL;
    this->PowerOffCubeMapIntensity = 0.00f;
    this->PowerOnCubeMapIntensity = 0.00f;
    this->VolumetricFogStaticLightingScatteringIntensity_PowerOff = 0.00f;
    this->VolumetricFogStaticLightingScatteringIntensity_PowerOn = 10.00f;
    this->bPlayAPC_In_Out = true;
}

FSystemicData ULevelPrimaryDataAsset::GetSystemicDataForFaction(const FGameplayTag& Faction) const {
    return FSystemicData{};
}

USubLevelPrimaryDataAsset* ULevelPrimaryDataAsset::GetSubLevel(FName SubLevelName) const {
    return NULL;
}

FGameplayTagContainer ULevelPrimaryDataAsset::GetDefaultUnlockedFeatures() const {
    return FGameplayTagContainer{};
}

TMap<FGameplayTag, int32> ULevelPrimaryDataAsset::GetDefaultSupplies() const {
    return TMap<FGameplayTag, int32>();
}

TArray<FDataCarrierMarine> ULevelPrimaryDataAsset::GetDefaultSquad() const {
    return TArray<FDataCarrierMarine>();
}

int32 ULevelPrimaryDataAsset::GetDefaultHiveSize() const {
    return 0;
}



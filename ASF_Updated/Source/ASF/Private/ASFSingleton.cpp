#include "ASFSingleton.h"

UASFSingleton::UASFSingleton() {
    this->bForceBlockMesh = false;
    this->MissionDataTable = NULL;
    this->DialogueSpeakerDataTable = NULL;
    this->MaterialType = NULL;
    this->MTMinimapMaterialType = NULL;
    this->bNoGameplay = false;
    this->fRoofClippingValue = 3500.00f;
    this->GameplayTwinClass = NULL;
    this->Curve_SecondFogData = NULL;
    this->SizeMaxSmallProps = 100.00f;
    this->SizeMaxMediumProps = 300.00f;
    this->StressComponent_DataAsset = NULL;
    this->ObjectiveTierColorDataAsset = NULL;
    this->InputImagesDataTable = NULL;
    this->PlayerActionToInputName = NULL;
    this->EventOnActor_Messages = NULL;
}

USubLevelPrimaryDataAsset* UASFSingleton::GetSubLevel(FName LevelName, FName SubLevelName) const {
    return NULL;
}

UASFSingleton* UASFSingleton::GetSingletonInstance() {
    return NULL;
}

UResource_DataAsset* UASFSingleton::GetResourceDataAsset(FGameplayTag _Tag) {
    return NULL;
}

UMarineWound_DataAsset* UASFSingleton::GetMarineWound_DataAsset(FGameplayTag _Tag) {
    return NULL;
}

ULevelPrimaryDataAsset* UASFSingleton::GetLevel(FName LevelName) const {
    return NULL;
}

UMarineClassDataAssets* UASFSingleton::GetCivilianDataAsset(FGameplayTag _Tag) {
    return NULL;
}

void UASFSingleton::DisplayEventOnActorMessage(AActor* _Actor, const FString& _Id) {
}



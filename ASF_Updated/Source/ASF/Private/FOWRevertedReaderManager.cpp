#include "FOWRevertedReaderManager.h"

UFOWRevertedReaderManager::UFOWRevertedReaderManager() {
    this->World = NULL;
    this->SaveGame = NULL;
}

FVector2D UFOWRevertedReaderManager::WorldToMinimapUV(FVector Position, FName LevelName, FName SubLevelName) const {
    return FVector2D{};
}

FVector2D UFOWRevertedReaderManager::Vector_WorldToMinimapUV(FVector Vector, FName LevelName, FName SubLevelName) const {
    return FVector2D{};
}

void UFOWRevertedReaderManager::SaveSubLevel(FName LevelName, FName SubLevelName) {
}

bool UFOWRevertedReaderManager::LoadSubLevel(FName LevelName, FName SubLevelName, bool bAllowReload, bool bAllowSaveGeneration) {
    return false;
}

void UFOWRevertedReaderManager::LoadFromGivenSave(ULevelSaveGame* SaveToLoadFrom) {
}

void UFOWRevertedReaderManager::LoadAllSubLevel(FName LevelName) {
}

void UFOWRevertedReaderManager::Init(UObject* _WorldContext) {
}

UFOWRevertedReader* UFOWRevertedReaderManager::GetSubLevelReaderByName(FName LevelName, FName SubLevelName, bool bTryLoadIfNot, bool bAllowReload, bool bAllowSaveGeneration) {
    return NULL;
}

UTexture2D* UFOWRevertedReaderManager::GetSubLevelMinimapTextureByName(FName LevelName, FName SubLevelName, bool bTryLoadIfNot, bool bAllowSaveGeneration) {
    return NULL;
}

UMaterialInstanceDynamic* UFOWRevertedReaderManager::GetSubLevelMinimapByName(FName LevelName, FName SubLevelName, bool bTryLoadIfNot, bool bAllowSaveGeneration) {
    return NULL;
}

void UFOWRevertedReaderManager::ClearFOW(FName LevelName, FName SubLevelName, bool OnlyMinimap) {
}



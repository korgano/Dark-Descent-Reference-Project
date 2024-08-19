#include "LevelSaveGame.h"

ULevelSaveGame::ULevelSaveGame() {
}

void ULevelSaveGame::MergeGenericSave(FLevelSaveStruct& GenericSave) {
}

TArray<FLevelDynamicObjectSaveStruct> ULevelSaveGame::GetDisplayableDynamicObject(FName SubLevelName) {
    return TArray<FLevelDynamicObjectSaveStruct>();
}

void ULevelSaveGame::ClearDynamicSavedObjectsInSubLevel(const FString& _SubLevelName) {
}

void ULevelSaveGame::ClearAllSavedObjectsWithoutSaveType(ESaveType _SaveType) {
}

void ULevelSaveGame::ClearAllSavedObjectsWithOnlySaveType(ESaveType _SaveType) {
}



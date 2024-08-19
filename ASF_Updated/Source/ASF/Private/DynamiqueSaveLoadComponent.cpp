#include "DynamiqueSaveLoadComponent.h"

UDynamiqueSaveLoadComponent::UDynamiqueSaveLoadComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SaveTypes.AddDefaulted(3);
    this->HasToBeInsertedToSaveList = false;
}

void UDynamiqueSaveLoadComponent::UpdateMinimapData(AMinimapHandler* MinimapHandler) {
}

void UDynamiqueSaveLoadComponent::SaveAndDestroyParentActor(ESaveType _SaveType, ULevelSaveGame* _LevelSaveGame) {
}

void UDynamiqueSaveLoadComponent::OnBeginSubLevelUnload(ASubLevelHandler* _SubLevelHandler, const FString& _SubLevel) {
}

void UDynamiqueSaveLoadComponent::GenerateDynamicObjectSaveStruct(FLevelDynamicObjectSaveStruct& _DynamicObjectSaveStruct, const FString& _SubLevelName) {
}



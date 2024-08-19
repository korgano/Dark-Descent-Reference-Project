#include "OpenDataSaveComponent.h"

UOpenDataSaveComponent::UOpenDataSaveComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UOpenDataSaveComponent::OnOpenDataRebuild(ULevelSaveGameInstanceSubsystem* _LevelSaveGameInstanceSubsystem) {
}

FName UOpenDataSaveComponent::GetSubLevelOwnerName_Implementation(AASFGameModeBase_TacticalMode* _GameMode) {
    return NAME_None;
}

FTransform UOpenDataSaveComponent::GetOpenDataTransform_Implementation() {
    return FTransform{};
}

FLevelOpenDataSaveStruct UOpenDataSaveComponent::GetOpenDataOnBuild() {
    return FLevelOpenDataSaveStruct{};
}


bool UOpenDataSaveComponent::GenerateOpenData_int(ULevelSaveGame* _LevelSaveGame, FName SubLevelName) {
    return false;
}

bool UOpenDataSaveComponent::GenerateOpenData_Implementation(ULevelSaveGameInstanceSubsystem* _SaveLoadSubSystem, AASFGameModeBase_TacticalMode* _GameMode, bool ForceOpenDataGeneration) {
    return false;
}

void UOpenDataSaveComponent::GenerateCurentLevelOpenData_Implementation() {
}

AActor* UOpenDataSaveComponent::FindOpenDataActor(FName _ActorName, UObject* _WorldContext) {
    return NULL;
}

bool UOpenDataSaveComponent::CanGenerateOpenData_Implementation() {
    return false;
}



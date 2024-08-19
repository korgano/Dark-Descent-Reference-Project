#include "OpenDataSaveObjetiveComponent.h"

UOpenDataSaveObjetiveComponent::UOpenDataSaveObjetiveComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OnlyObjectiveOpenData = false;
}

bool UOpenDataSaveObjetiveComponent::GenerateSubObjectiveOpenData(USubObjectiveComponent* SubObjectiveComponent, ULevelSaveGame* _LevelSave) {
    return false;
}

bool UOpenDataSaveObjetiveComponent::GenerateObjectiveOpenData(AObjective* Objective, ULevelSaveGame* _LevelSave) {
    return false;
}



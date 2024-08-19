#include "BaseManagementTools.h"

UBaseManagementTools::UBaseManagementTools() {
}

void UBaseManagementTools::SortMissionObjectivesForDisplay(TArray<AObjective*>& _Objectives, TArray<AObjective*>& _SortedObjectives) {
}

void UBaseManagementTools::SortMissionObjectives(TArray<AObjective*>& _Objectives, TArray<AObjective*>& _SortedObjectives) {
}

void UBaseManagementTools::SortMarineUpgradesByRank(TArray<UUpgradeDataAssets*>& _Upgrades, TArray<UUpgradeDataAssets*>& _SortedUpgrades, bool bIncreasing) {
}

void UBaseManagementTools::SortMarineUpgradesByPrerequisite(TArray<UUpgradeDataAssets*>& _Upgrades, TArray<UUpgradeDataAssets*>& _SortedUpgrades) {
}

void UBaseManagementTools::SortMarineSlots(TArray<AMarineSlot*>& _Slots, TArray<AMarineSlot*>& _SortedSlots) {
}

void UBaseManagementTools::SortMarinesByTrauma(TArray<AHumanoid*>& _Marines, TArray<AHumanoid*>& _SortedMarines) {
}

void UBaseManagementTools::SortMarinesByTraining(TArray<AHumanoid*>& _Marines, TArray<AHumanoid*>& _SortedMarines) {
}

void UBaseManagementTools::SortMarinesByLevelUp(TArray<AHumanoid*>& _Marines, TArray<AHumanoid*>& _SortedMarines) {
}

void UBaseManagementTools::SortMarinesByLevel(TArray<AHumanoid*>& _Marines, TArray<AHumanoid*>& _SortedMarines, bool bIncreasing) {
}

void UBaseManagementTools::SortMarinesByClass(TArray<AHumanoid*>& _Marines, TArray<AHumanoid*>& _SortedMarines) {
}

void UBaseManagementTools::SortMarineClassesByTier(TArray<UMarineClassDataAssets*>& _MarineClasses, TArray<UMarineClassDataAssets*>& _SortedMarineClasses, bool bIncreasing) {
}

void UBaseManagementTools::SortMarineAttributesByUnlockLevel(const UObject* _WorldContext, TArray<UMarineAttributeDataAssets*>& _Attributes, TArray<UMarineAttributeDataAssets*>& _SortedAttributes) {
}

void UBaseManagementTools::SortMarineAttributesByName(TArray<UMarineAttributeDataAssets*>& _Attributes, TArray<UMarineAttributeDataAssets*>& _SortedAttributes) {
}

void UBaseManagementTools::RandomizeVisualCustomization(FMarineCustomization& _Customization, UObject* _Context) {
}

void UBaseManagementTools::FilterPurchasedMarineUpgrades(TArray<UUpgradeDataAssets*>& _Upgrades, AHumanoid* _Marine, TArray<UUpgradeDataAssets*>& _FilteredUpgrades) {
}

void UBaseManagementTools::FilterMissionObjectives(TArray<AObjective*>& _Objectives, TArray<AObjective*>& _FilteredObjectives) {
}



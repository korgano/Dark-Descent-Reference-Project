#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MarineCustomization.h"
#include "BaseManagementTools.generated.h"

class AHumanoid;
class AMarineSlot;
class AObjective;
class UMarineAttributeDataAssets;
class UMarineClassDataAssets;
class UUpgradeDataAssets;

UCLASS(Blueprintable)
class ASF_API UBaseManagementTools : public UObject {
    GENERATED_BODY()
public:
    UBaseManagementTools();

    UFUNCTION(BlueprintCallable)
    static void SortMissionObjectivesForDisplay(UPARAM(Ref) TArray<AObjective*>& _Objectives, TArray<AObjective*>& _SortedObjectives);
    
    UFUNCTION(BlueprintCallable)
    static void SortMissionObjectives(UPARAM(Ref) TArray<AObjective*>& _Objectives, TArray<AObjective*>& _SortedObjectives);
    
    UFUNCTION(BlueprintCallable)
    static void SortMarineUpgradesByRank(UPARAM(Ref) TArray<UUpgradeDataAssets*>& _Upgrades, TArray<UUpgradeDataAssets*>& _SortedUpgrades, bool bIncreasing);
    
    UFUNCTION(BlueprintCallable)
    static void SortMarineUpgradesByPrerequisite(UPARAM(Ref) TArray<UUpgradeDataAssets*>& _Upgrades, TArray<UUpgradeDataAssets*>& _SortedUpgrades);
    
    UFUNCTION(BlueprintCallable)
    static void SortMarineSlots(UPARAM(Ref) TArray<AMarineSlot*>& _Slots, TArray<AMarineSlot*>& _SortedSlots);
    
    UFUNCTION(BlueprintCallable)
    static void SortMarinesByTrauma(UPARAM(Ref) TArray<AHumanoid*>& _Marines, TArray<AHumanoid*>& _SortedMarines);
    
    UFUNCTION(BlueprintCallable)
    static void SortMarinesByTraining(UPARAM(Ref) TArray<AHumanoid*>& _Marines, TArray<AHumanoid*>& _SortedMarines);
    
    UFUNCTION(BlueprintCallable)
    static void SortMarinesByLevelUp(UPARAM(Ref) TArray<AHumanoid*>& _Marines, TArray<AHumanoid*>& _SortedMarines);
    
    UFUNCTION(BlueprintCallable)
    static void SortMarinesByLevel(UPARAM(Ref) TArray<AHumanoid*>& _Marines, TArray<AHumanoid*>& _SortedMarines, bool bIncreasing);
    
    UFUNCTION(BlueprintCallable)
    static void SortMarinesByClass(UPARAM(Ref) TArray<AHumanoid*>& _Marines, TArray<AHumanoid*>& _SortedMarines);
    
    UFUNCTION(BlueprintCallable)
    static void SortMarineClassesByTier(UPARAM(Ref) TArray<UMarineClassDataAssets*>& _MarineClasses, TArray<UMarineClassDataAssets*>& _SortedMarineClasses, bool bIncreasing);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_WorldContext"))
    static void SortMarineAttributesByUnlockLevel(const UObject* _WorldContext, UPARAM(Ref) TArray<UMarineAttributeDataAssets*>& _Attributes, TArray<UMarineAttributeDataAssets*>& _SortedAttributes);
    
    UFUNCTION(BlueprintCallable)
    static void SortMarineAttributesByName(UPARAM(Ref) TArray<UMarineAttributeDataAssets*>& _Attributes, TArray<UMarineAttributeDataAssets*>& _SortedAttributes);
    
    UFUNCTION(BlueprintCallable)
    static void RandomizeVisualCustomization(UPARAM(Ref) FMarineCustomization& _Customization, UObject* _Context);
    
    UFUNCTION(BlueprintCallable)
    static void FilterPurchasedMarineUpgrades(UPARAM(Ref) TArray<UUpgradeDataAssets*>& _Upgrades, AHumanoid* _Marine, TArray<UUpgradeDataAssets*>& _FilteredUpgrades);
    
    UFUNCTION(BlueprintCallable)
    static void FilterMissionObjectives(UPARAM(Ref) TArray<AObjective*>& _Objectives, TArray<AObjective*>& _FilteredObjectives);
    
};


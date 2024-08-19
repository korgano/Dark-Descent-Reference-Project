#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EMarineRank.h"
#include "Event_int32_int32Delegate.h"
#include "Room.h"
#include "Workshop.generated.h"

class AHumanoid;
class UUpgradeDataAssets;

UCLASS(Blueprintable)
class ASF_API AWorkshop : public ARoom {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_int32_int32 OnEngineersUpdated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BaseEngineerCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxEngineerCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 Engineers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 AssignedEngineers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BaseMaterialsProduction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> MaterialsProductionUpgrades;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaterialsProduction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EMarineRank> BaseProduceableUpgradeTiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, EMarineRank> ProduceableUpgradeTierUpgrades;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EMarineRank> ProduceableUpgradeTiers;
    
public:
    AWorkshop(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SortMarinesByUpgradesAvailable(UPARAM(Ref) TArray<AHumanoid*>& _Marines, TArray<AHumanoid*>& _SortedMarines);
    
    UFUNCTION(BlueprintCallable)
    void RemoveEngineers(int32 _Count);
    
    UFUNCTION(BlueprintCallable)
    void PurchaseMarineUpgrade(UUpgradeDataAssets* _Asset, AHumanoid* _Marine);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAvailableEngineers(int32 _Count) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAvailableEngineers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanPurchaseMarineUpgrade(UUpgradeDataAssets* _Asset, AHumanoid* _Marine) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAffordMarineUpgrade(UUpgradeDataAssets* _Asset) const;
    
    UFUNCTION(BlueprintCallable)
    void AddEngineers(int32 _Count);
    
    UFUNCTION(BlueprintCallable)
    void AddEngineer();
    
};


#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "DataCarrierCivilian.h"
#include "DataCarrierData.h"
#include "DataCarrierMarine.h"
#include "LevelDynamicObjectSaveStruct.h"
#include "MissionEndedInfosStruct.h"
#include "MissionProgress.h"
#include "MissionStats.h"
#include "DataCarrierGameInstanceSS.generated.h"

class UXenoTech_DataAsset;

UCLASS(Blueprintable)
class ASF_API UDataCarrierGameInstanceSS : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataCarrierData Data;
    
public:
    UDataCarrierGameInstanceSS();

    UFUNCTION(BlueprintCallable)
    void UpdateXpGainedDuringLastRun(int32 _XpGained);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldPlayMissionBrief() const;
    
    UFUNCTION(BlueprintCallable)
    void SetUnreadCodexEntries(FGameplayTagContainer _Entries);
    
    UFUNCTION(BlueprintCallable)
    void SetShouldPlayMissionBrief(bool _ShouldPlay);
    
    UFUNCTION(BlueprintCallable)
    void SetObjectiveCompletedCount(int32 _ObjectiveCompletedCount);
    
    UFUNCTION(BlueprintCallable)
    void SetMissionCompletionPercent(float _Percent);
    
    UFUNCTION(BlueprintCallable)
    void SetMedbayCareDurationMultiplier(float _Multiplier);
    
    UFUNCTION(BlueprintCallable)
    void SetMarines(TArray<FDataCarrierMarine> _Marines);
    
    UFUNCTION(BlueprintCallable)
    void SetLastLaunchedMissionTag(FGameplayTag _MissionTag);
    
    UFUNCTION(BlueprintCallable)
    void SetHiveSize(int32 _NewHiveSize);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentCampaignTurn(int32 _NewCampaignTurn);
    
    UFUNCTION(BlueprintCallable)
    void RemoveMarineFromDataCarrier(const FDataCarrierMarine& _Marine);
    
    UFUNCTION(BlueprintCallable)
    void RemoveCivilianFromDataCarrier(FGameplayTag Civilian);
    
    UFUNCTION(BlueprintCallable)
    FString RecoverStartingSubLevel();
    
    UFUNCTION(BlueprintCallable)
    void RecoverShuttleSuppliesAndResources(TMap<FGameplayTag, int32>& _Supplies, TMap<FGameplayTag, int32>& _Materials);
    
    UFUNCTION(BlueprintCallable)
    TMap<FGameplayTag, int32> RecoverShuttleSupplies();
    
    UFUNCTION(BlueprintCallable)
    TMap<FGameplayTag, int32> RecoverShuttleResources();
    
    UFUNCTION(BlueprintCallable)
    FString RecoverEntryPointSelected();
    
    UFUNCTION(BlueprintCallable)
    void RecoverCivilians(FGameplayTag _Type, TArray<FDataCarrierCivilian>& OutCivilians);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingSplitScreen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetXpGainedDuringLastRun();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UXenoTech_DataAsset*> GetXenoTechs() const;
    
    UFUNCTION(BlueprintCallable)
    FGameplayTagContainer GetUnreadCodexEntries() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FGameplayTag, int32> GetSupplies() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FLevelDynamicObjectSaveStruct> GetSavedDynamicObjects() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FGameplayTag, int32> GetResources() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetObjectiveCompletedCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FMissionStats> GetMissionStats() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMissionProgress GetMissionProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMissionEndedInfosStruct GetMissionInfos() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMissionCompletionPercent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMedbayCareDurationMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FDataCarrierMarine> GetMarines() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMarine(int32 _Id, FDataCarrierMarine& _Marine) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetLastLaunchedMissionTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHiveSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FDataCarrierMarine> GetDeadMarines() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentCampaignTurn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FDataCarrierCivilian> GetCivilians() const;
    
    UFUNCTION(BlueprintCallable)
    void Flush();
    
    UFUNCTION(BlueprintCallable)
    void FillStartingSubLevel(const FString& _StartingSubLevel);
    
    UFUNCTION(BlueprintCallable)
    void FillShuttleSuppliesAndResources(TMap<FGameplayTag, int32> _Supplies, TMap<FGameplayTag, int32> _Materials);
    
    UFUNCTION(BlueprintCallable)
    void FillEntryPointSelected(const FString& _SelectedEntryPoint);
    
    UFUNCTION(BlueprintCallable)
    void ClearXenoTechs();
    
    UFUNCTION(BlueprintCallable)
    void ClearSavedDynamicObjects();
    
    UFUNCTION(BlueprintCallable)
    void ClearMarines();
    
    UFUNCTION(BlueprintCallable)
    void ClearEntryPoint();
    
    UFUNCTION(BlueprintCallable)
    void ClearCivilians();
    
    UFUNCTION(BlueprintCallable)
    void AppendFillShuttleSuppliesAndResources(const TMap<FGameplayTag, int32>& _Supplies, const TMap<FGameplayTag, int32>& _Materials);
    
    UFUNCTION(BlueprintCallable)
    void AddXenoTechs(const TArray<UXenoTech_DataAsset*>& _Assets);
    
    UFUNCTION(BlueprintCallable)
    void AddSavedDynamicObjects(TArray<FLevelDynamicObjectSaveStruct> _Objects);
    
    UFUNCTION(BlueprintCallable)
    void AddObjectiveCompletedCount();
    
    UFUNCTION(BlueprintCallable)
    void AddMarineToDataCarrier(UPARAM(Ref) FDataCarrierMarine& _Marine);
    
    UFUNCTION(BlueprintCallable)
    void AddDeadMarineToDataCarrier(UPARAM(Ref) FDataCarrierMarine& _Marine);
    
    UFUNCTION(BlueprintCallable)
    void AddCivilianToDataCarrier(UPARAM(Ref) FDataCarrierCivilian& Civilian);
    
};


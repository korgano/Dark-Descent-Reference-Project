#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "ChooseAttributeInfosStruct.h"
#include "ChooseMarineClassInfosStruct.h"
#include "DailyEventInfosStruct.h"
#include "DamageResultStruct.h"
#include "WeaponUpgrade.h"
#include "PlayFabGameInstanceSS.generated.h"

class AASFGameModeBase_TacticalMode;
class AHumanoid;
class AHumanoidMarine;
class AHumanoidTactical;
class ASubLevelHandler;
class UFactionSystemic;
class USkill_DataAsset;

UCLASS(Blueprintable, Config=PlayFab)
class ASF_API UPlayFabGameInstanceSS : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 campaign_index;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double timeAfterLoad;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CreatedShelter;
    
    UPlayFabGameInstanceSS();

    UFUNCTION(BlueprintCallable)
    void WoundEvent(AHumanoid* Humanoid, const FDamageResultStruct& DamageResult);
    
    UFUNCTION(BlueprintCallable)
    void UpgradeWeaponEvent(const FWeaponUpgrade& Upgrade, const int32& remaining);
    
    UFUNCTION(BlueprintCallable)
    void UpdateTimePhaseForMissionEnd(UFactionSystemic* _Systemic, const FGameplayTag& _OldPhase, const FGameplayTag& _NewPhase);
    
    UFUNCTION(BlueprintCallable)
    void UpdateMissionEndStructWeldDoor();
    
    UFUNCTION(BlueprintCallable)
    void UpdateMissionEndStructEnemyKilled();
    
    UFUNCTION(BlueprintCallable)
    void TryToConnect(const FString& CustomId);
    
    UFUNCTION(BlueprintCallable)
    void TraumaEvent(const FString& trauma_id, const int32& marine_id);
    
    UFUNCTION(BlueprintCallable)
    void TickTorchDuration(float Tick);
    
    UFUNCTION(BlueprintCallable)
    void SquadLocationTimer();
    
    UFUNCTION(BlueprintCallable)
    void SkillUseEvent(AHumanoidTactical* Marine, USkill_DataAsset* Skill, const int32& QuantityBeforeUse);
    
    UFUNCTION(BlueprintCallable)
    void ReloadNoAmmoPFEvent();
    
    UFUNCTION(BlueprintCallable)
    void ReiniCreatedShelter();
    
    UFUNCTION(BlueprintCallable)
    void OnSubLevelHandlerSetForPlayFab(AASFGameModeBase_TacticalMode* GameMode, ASubLevelHandler* SubLevelHandler);
    
    UFUNCTION(BlueprintCallable)
    void MoneyChangeEvent(const int32& Amount, const FString& Context);
    
    UFUNCTION(BlueprintCallable)
    void MissionEndEvent();
    
    UFUNCTION(BlueprintCallable)
    void MarineLevelUpEvent(AHumanoid* Marine, int32 NbLevelsUp);
    
    UFUNCTION(BlueprintCallable)
    void MarineDeathEvent(AHumanoidMarine* Marine, const FDamageResultStruct& _DamageResult);
    
    UFUNCTION(BlueprintCallable)
    void MarineChooseClassEvent(const FChooseMarineClassInfosStruct& MarineClassStruct);
    
    UFUNCTION(BlueprintCallable)
    void MarineChooseAttributeEvent(const FChooseAttributeInfosStruct& ChooseAttributeStruct);
    
    UFUNCTION(BlueprintCallable)
    void HideEvent(const int32& SquadSize);
    
    UFUNCTION(BlueprintCallable)
    FString GetTextStringKey(const FText& textKey);
    
    UFUNCTION(BlueprintCallable)
    void EnablePlayfab();
    
    UFUNCTION(BlueprintCallable)
    void DisablePlayfab();
    
    UFUNCTION(BlueprintCallable)
    void DailyChoiceEvent(const FDailyEventInfosStruct& DailyEventStruct);
    
    UFUNCTION(BlueprintCallable)
    void CreateShelterPFEvent();
    
    UFUNCTION(BlueprintCallable)
    bool CheckIfLoggedIn();
    
    UFUNCTION(BlueprintCallable)
    void BuildMandatoryInfosStruct();
    
};


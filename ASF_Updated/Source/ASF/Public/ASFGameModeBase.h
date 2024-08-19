#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GameplayTagContainer.h"
#include "CinematicSubtitle.h"
#include "ESaveGameType.h"
#include "EnumObjectiveTier.h"
#include "Event_ASFGameModeBase_RoomClusterDelegate.h"
#include "Event_GameModeDelegate.h"
#include "Event_GameMode_InputBinderDelegate.h"
#include "Event_GameMode_SaveErrorDelegate.h"
#include "Event_SaveSystemDelegate.h"
#include "MetaDataSaveStruct.h"
#include "Templates/SubclassOf.h"
#include "ASFGameModeBase.generated.h"

class AHumanoid;
class AObjective;
class ARoomCluster;
class ASubLevelHandler;
class ATinda_TickManager;
class ATutorialInputBinder;
class UDataTable;
class ULevelPrimaryDataAsset;
class UMarineAttributeDataAssets;
class UMarineCustomization_DataAsset;
class UMetaDataSaveGame_v1;
class UObject;

UCLASS(Blueprintable, NonTransient)
class ASF_API AASFGameModeBase : public AGameModeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSaving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLoading;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_SaveSystem OnSaveRequested;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_GameMode OnSaveDone;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_GameMode_SaveError OnSaveImpossible;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_GameMode_InputBinder OnInputBinderRegister;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSavePending;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PendingSaveName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESaveGameType PendingSaveGameType;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATutorialInputBinder> TutorialInputBinderClass;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_ASFGameModeBase_RoomCluster OnRoomClusterSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DynamicSaveIndex;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PendingLoadingMap;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMarineCustomization_DataAsset* MarineCustomizationAsset;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMarineAttributeDataAssets* TiredAttributeDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMarineAttributeDataAssets* ExhaustedAttributeDataAsset;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATutorialInputBinder* InputBinder;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelPrimaryDataAsset* LevelDataAsset;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATinda_TickManager* TickManager;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_GameMode OnNewGamePlusInitialized;
    
    AASFGameModeBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 XpPointsRequiredForLevel(int32 Level) const;
    
    UFUNCTION(BlueprintCallable)
    float TimeCodeToSeconds(const FString& Timecode, int32 _FrameRate);
    
    UFUNCTION(BlueprintCallable)
    void SetSubLevelHandler(ASubLevelHandler* _SubLevelHandler);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Save(const FString& _SaveName, ESaveGameType _SaveGameType, bool _bForce);
    
    UFUNCTION(BlueprintCallable)
    void RegisterTutorialInputBinder(ATutorialInputBinder* _NewBinder);
    
    UFUNCTION(BlueprintCallable)
    void OnSaveLoadedForNewGamePlusInit(const FString& InSlotName, const int32 InUserIndex, bool _Succeed);
    
    UFUNCTION(BlueprintCallable)
    void OnSaveLoaded(const FString& InSlotName, const int32 InUserIndex, bool _Succeed);
    
    UFUNCTION(BlueprintCallable)
    void OnSaveFinished(const FString& InSlotName, const int32 InUserIndex, bool bDataSaved);
    
    UFUNCTION(BlueprintCallable)
    void OnIncompatibleSaveLoadedForNewGamePlusInit(const FString& InSlotName, const int32 InUserIndex, bool _Succeed);
    
protected:
    UFUNCTION(BlueprintCallable)
    void LoadSaveAsync(int32 _UserIndex, const FString& _SaveName, UMetaDataSaveGame_v1* _MetaDataSaveGame);
    
    UFUNCTION(BlueprintCallable)
    void LoadSave(int32 _UserIndex, const FString& _SaveName, UMetaDataSaveGame_v1* _MetaDataSaveGame);
    
private:
    UFUNCTION(BlueprintCallable)
    void LoadPendingMap();
    
public:
    UFUNCTION(BlueprintCallable)
    void LoadMissionBrief(const FGameplayTag& _MissionTag);
    
    UFUNCTION(BlueprintCallable)
    UMetaDataSaveGame_v1* LoadMetaDataSave(int32 _UserIndex, const FString& _SaveName);
    
    UFUNCTION(BlueprintCallable)
    void LoadAndOpenLevel(const FString& _SaveName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSaveSlotEligibleForNewGamePlus(int32 _Slot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSaveEligibleForNewGamePlus(const FMetaDataSaveStruct& _SaveStruct) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnySaveSlotEligibleForNewGamePlus() const;
    
    UFUNCTION(BlueprintCallable)
    void InitNewGamePlusOnOldSave();
    
    UFUNCTION(BlueprintCallable)
    void InitNewGamePlusFromSaveSlot(int32 _Slot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ATinda_TickManager* GetTinda_TickManager(const UObject* _WorldRef);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASubLevelHandler* GetSubLevelHandler() const;
    
    UFUNCTION(BlueprintCallable)
    FString GetSaveSlotLastOtagoSaveName(int32 _Slot) const;
    
    UFUNCTION(BlueprintCallable)
    ATutorialInputBinder* GetOrCreatetutorialInputBinder();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMissionProgress(FGameplayTag _MissionTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetMissionObjectivesProgress(FGameplayTag _MissionTag, EnumObjectiveTier _ObjectiveType, int32& _TotalCount, int32& _SucceededCount, int32& _FailedCount, int32& _InvalidatedCount) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AObjective*> GetMissionObjectives(FGameplayTag _MissionTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLevelForXp(int32 _XP) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULevelPrimaryDataAsset* GetLevelDataAsset();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCampaignProgress() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FCinematicSubtitle> ConvertCinematicDataTableToSubtitles(UDataTable* _DataTable, int32 _FrameRate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString CanSave();
    
protected:
    UFUNCTION(BlueprintCallable)
    void BroadcastRoomClusterSet(ARoomCluster* _RoomCluster);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddMarine(AHumanoid* _Marine, bool bIsLoaded);
    
};


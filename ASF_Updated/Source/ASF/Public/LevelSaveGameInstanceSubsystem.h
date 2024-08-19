#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "CampaignParameters.h"
#include "CampaignSaveSlot.h"
#include "CompressedLevelSaveGame.h"
#include "ESaveGameType.h"
#include "Event_ImportPS4SlotDelegate.h"
#include "Event_LevelSaveGameInstanceSubsystemDelegate.h"
#include "Event_LevelSaveGameInstanceSubsystem_IntDelegate.h"
#include "Event_LoadPS4SlotsDelegate.h"
#include "Event_OnCampaignSlotHoveredChangedDelegate.h"
#include "LevelDynamicObjectSaveStruct.h"
#include "LevelOpenDataSaveStruct.h"
#include "LevelSaveStruct.h"
#include "MetaDataSaveStruct.h"
#include "SubLevelConnectorComponentStruct.h"
#include "LevelSaveGameInstanceSubsystem.generated.h"

class UCampaignSaveGame;
class ULevelSaveGame;
class UMapFeedbackDataProperties;
class UMetaDataSaveGame_v1;
class UObject;
class UPrimaryDataAsset;
class USaveGame;

UCLASS(Blueprintable)
class ASF_API ULevelSaveGameInstanceSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_LevelSaveGameInstanceSubsystem OnOpenDataNeedUpdate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLevelOpenDataSaveStruct> GetOpenData_TmpArray;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, USaveGame*> LevelSaveGames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FCompressedLevelSaveGame> CompressedLevelSaveGames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CampaignSlotSelected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCampaignSaveSlot> CampaignSlots;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> LevelSaveGamesToCompress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CampaignSlotHovered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_OnCampaignSlotHoveredChanged Event_OnCampaignSlotHoveredChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_LevelSaveGameInstanceSubsystem_Int Event_OnCampaignSlotDeleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_LoadPS4Slots OnPS4SlotsLoaded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_ImportPS4Slot OnPS4SlotImported;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseCompressedSave;
    
    ULevelSaveGameInstanceSubsystem();

    UFUNCTION(BlueprintCallable)
    void UncompressSaveGames(TMap<FName, bool>& _SavesToUncompress);
    
    UFUNCTION(BlueprintCallable)
    void SetLevelSaveGames(const TMap<FName, USaveGame*>& _LevelSaveGames);
    
    UFUNCTION(BlueprintCallable)
    void SetCampaignSlotSelected(int32 _CampainSlotId);
    
    UFUNCTION(BlueprintCallable)
    void SetCampaignSlotHovered(int32 _CampainSlotId);
    
    UFUNCTION(BlueprintCallable)
    void SaveGameAsync(const FString& _SaveName);
    
    UFUNCTION(BlueprintCallable)
    void RemoveSaveGame(const FString& _SaveName);
    
    UFUNCTION(BlueprintCallable)
    void RemovePrologueSaveGame();
    
    UFUNCTION(BlueprintCallable)
    void RemoveLevelSaveGames(const TArray<FName>& _LevelSaveNames);
    
    UFUNCTION(BlueprintCallable)
    void RemoveCompressedLevelSaveGame(FName _LevelSaveName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_WorldContext"))
    bool ReadPropertyAsVector2D(UObject* _WorldContext, ULevelSaveGame* _SaveGame, FLevelDynamicObjectSaveStruct _DynamicObjectSaveStruct, const TSoftClassPtr<UObject>& _ObjectClass, FName _ObjectName, FName _ComponentName, FName _PropertyName, FVector2D& _ReturnValue);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_WorldContext"))
    bool ReadPropertyAsSubLevelConnectorComponentStructArray(UObject* _WorldContext, ULevelSaveGame* _SaveGame, FLevelDynamicObjectSaveStruct _DynamicObjectSaveStruct, const TSoftClassPtr<UObject>& _ObjectClass, FName _ObjectName, FName _ComponentName, FName _PropertyName, TArray<FSubLevelConnectorComponentStruct>& _ReturnValue);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_WorldContext"))
    bool ReadPropertyAsString(UObject* _WorldContext, ULevelSaveGame* _SaveGame, FLevelDynamicObjectSaveStruct _DynamicObjectSaveStruct, const TSoftClassPtr<UObject>& _ObjectClass, FName _ObjectName, FName _ComponentName, FName _PropertyName, FString& _ReturnValue);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_WorldContext"))
    bool ReadPropertyAsInt(UObject* _WorldContext, ULevelSaveGame* _SaveGame, FLevelDynamicObjectSaveStruct _DynamicObjectSaveStruct, const TSoftClassPtr<UObject>& _ObjectClass, FName _ObjectName, FName _ComponentName, FName _PropertyName, int32& _ReturnValue);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_WorldContext"))
    bool ReadPropertyAsDataAsset(UObject* _WorldContext, ULevelSaveGame* _SaveGame, FLevelDynamicObjectSaveStruct _DynamicObjectSaveStruct, const TSoftClassPtr<UObject>& _ObjectClass, FName _ObjectName, FName _ComponentName, FName _PropertyName, UPrimaryDataAsset*& _ReturnValue);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_WorldContext"))
    bool ReadPropertyAsBool(UObject* _WorldContext, ULevelSaveGame* _SaveGame, FLevelDynamicObjectSaveStruct _DynamicObjectSaveStruct, const TSoftClassPtr<UObject>& _ObjectClass, FName _ObjectName, FName _ComponentName, FName _PropertyName, bool& _ReturnValue);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnAllSavesLoaded();
    
public:
    UFUNCTION(BlueprintCallable)
    void LoadSaveAsync(const FString& _SaveName, UMetaDataSaveGame_v1* _MetaDataSaveGame);
    
    UFUNCTION(BlueprintCallable)
    void LoadSave(const FString& _SaveName, UMetaDataSaveGame_v1* _MetaDataSaveGame);
    
private:
    UFUNCTION(BlueprintCallable)
    void LoadMetaDataSaveGame(const FString& SaveName, USaveGame* SaveData, TArray<FCampaignSaveSlot>& OutCampaignSlots);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidCampaignSlot(int32 _Index) const;
    
    UFUNCTION(BlueprintCallable)
    bool IsTacticalMissionLoaded();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnySaveSlotUsed() const;
    
    UFUNCTION(BlueprintCallable)
    bool HasSavesInCampaignSlotSelected();
    
    UFUNCTION(BlueprintCallable)
    bool HasPS4CampaignSlots();
    
    UFUNCTION(BlueprintCallable)
    bool HasCampaignSlotSelected();
    
    UFUNCTION(BlueprintCallable)
    FText GetSaveGameDisplayName(const FMetaDataSaveStruct& MetaDataSaveGame);
    
    UFUNCTION(BlueprintCallable)
    TArray<FCampaignSaveSlot> GetPS4CampaignSlots();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetOpenDataProperties(const FLevelOpenDataSaveStruct& _OpenData, UMapFeedbackDataProperties*& OpenDataProperties, UObject* _Owner) const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetMostRecentCampaignSlot();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMetaDataSaveGame_v1* GetMetaDataSaveGame();
    
    UFUNCTION(BlueprintCallable)
    TSoftClassPtr<UMapFeedbackDataProperties> GetMapFeedbackPropertiesClass(UClass* _ObjectClass, UObject* _Owner) const;
    
    UFUNCTION(BlueprintCallable)
    void GetLevelSaveGames(TMap<FName, USaveGame*>& _LevelSaveGames);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULevelSaveGame* GetLevelSaveGame(FName LevelName);
    
    UFUNCTION(BlueprintCallable)
    FMetaDataSaveStruct GetLastSaveMetaData();
    
    UFUNCTION(BlueprintCallable)
    FString GetLastSave();
    
    UFUNCTION(BlueprintCallable)
    int32 GetLastCampaignSave();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetDynamicObjectProperties(const FLevelDynamicObjectSaveStruct& _DynamicObject, UMapFeedbackDataProperties*& OpenDataProperties) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULevelSaveGame* GetCurrentLevelSaveGame();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCampaignSlotSelected();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCampaignSaveSlot GetCampaignSlot(int32 _Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCampaignSaveGame* GetCampaignSaveGame();
    
    UFUNCTION(BlueprintCallable)
    bool GetCampaignDifficultyParameter(FCampaignParameters& _CampaignParameters);
    
    UFUNCTION(BlueprintCallable)
    TArray<FString> GetAllSaveNamesWithTypeFromSlot(const TArray<ESaveGameType>& _SaveGameTypes, int32 _Slot);
    
    UFUNCTION(BlueprintCallable)
    TArray<FString> GetAllSaveNamesWithType(const TArray<ESaveGameType>& _SaveGameTypes);
    
    UFUNCTION(BlueprintCallable)
    void GetAllMetaDataSaveGames(TArray<FMetaDataSaveStruct>& MetaDataSaveGames);
    
    UFUNCTION(BlueprintCallable)
    void GenerateLevelOpenData();
    
    UFUNCTION(BlueprintCallable)
    bool DoesSaveGameExist(const FString& _SaveName);
    
    UFUNCTION(BlueprintCallable)
    void DeleteCampaignSlot(int32 _Index, bool bDoBroadcast);
    
    UFUNCTION(BlueprintCallable)
    void DeleteAllAutoSave();
    
    UFUNCTION(BlueprintCallable)
    void CreateCampaignSlotMetaData(int32 _Index, FCampaignParameters _Params);
    
    UFUNCTION(BlueprintCallable)
    UCampaignSaveGame* CreateCampaignSaveGame();
    
    UFUNCTION(BlueprintCallable)
    void CompressSaveGames(const TMap<FName, bool>& _SavesToCompress);
    
    UFUNCTION(BlueprintCallable)
    FLevelSaveStruct CombineSaveGameAndGenericSave(ULevelSaveGame* SaveGame, FName _MissionName);
    
    UFUNCTION(BlueprintCallable)
    void ClearSaveGames();
    
    UFUNCTION(BlueprintCallable)
    void ClearLevelOpenData();
    
private:
    UFUNCTION(BlueprintCallable)
    void AsyncPS4SaveImport();
    
public:
    UFUNCTION(BlueprintCallable)
    void AsyncLoadPS4Slots();
    
private:
    UFUNCTION(BlueprintCallable)
    void AsyncLoadMetaDataSaveGame(const int32 UserIndex);
    
public:
    UFUNCTION(BlueprintCallable)
    void AsyncLoadAllMetaDataSaveGame();
    
    UFUNCTION(BlueprintCallable)
    void AsyncImportPS4Slot(int32 PS4CampaignSlotIndex, int32 PS5CampaignSlotIndex);
    
    UFUNCTION(BlueprintCallable)
    void AddToLevelSaveGames(const FName _SaveName, USaveGame* _LevelSaveGame);
    
    UFUNCTION(BlueprintCallable)
    void AddToCompressedLevelSaveGames(const FName _SaveName, FCompressedLevelSaveGame& _LevelSaveData);
    
};


#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Event_SubLevelHandler_FStringDelegate.h"
#include "Event_SubLevelHandler_FString_BoolDelegate.h"
#include "Event_SubLevelHandler_FString_FStringDelegate.h"
#include "Event_SubLevelHandler_USubLevelConnectorComponentDelegate.h"
#include "LevelsUnionCollection.h"
#include "MultiMapLevels.h"
#include "TransitionNotInPlace.h"
#include "SubLevelHandler.generated.h"

class AEntryPoint;
class AInfluenceMapManager;
class ARoomCluster;
class ASubLevelHandler;
class UCommonSaveLoadComponent;
class ULevelStreaming;
class UObject;
class USubLevelConnectorComponent;
class USubLevelPrimaryDataAsset;

UCLASS(Blueprintable)
class ASF_API ASubLevelHandler : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonSaveLoadComponent* SaveLoadComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CurrentLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayWithoutCosmetic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LastSubLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FString CurrentSubLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DefaultSubLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransitionNotInPlace> TransitionNotInPlace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FString> HiddenSublevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> InvisibleOnChartmapSublevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> PersistentLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LoadingScreenLevel;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_SubLevelHandler_FString_FString OnStreamingLevelAddToSubLevel;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_SubLevelHandler_FString_FString OnStreamingLevelRemoveFromSubLevel;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_SubLevelHandler_FString_FString OnRoofNoCullingLevelAddToSubLevel;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_SubLevelHandler_FString_FString OnRoofNoCullingLevelRemoveFromSubLevel;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_SubLevelHandler_FString_Bool OnStreamingLevelPersistentStatusChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_SubLevelHandler_FString_Bool OnStreamingLevelLoadingScreenStatusChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_SubLevelHandler_FString_Bool OnStreamingLevelGameplayStatusChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_SubLevelHandler_FString SubLevelAssetsIsLoaded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_SubLevelHandler_FString SubLevelIsLoaded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_SubLevelHandler_FString SubLevelIsUnLoaded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_SubLevelHandler_FString BeginSubLevelUnLoad;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_SubLevelHandler_FString BeginSubLevelLoad;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_SubLevelHandler_FString SubLevelIsRemoved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULevelStreaming*> LevelToMakeVisible;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_SubLevelHandler_USubLevelConnectorComponent OnConnectorRegistered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_SubLevelHandler_USubLevelConnectorComponent OnConnectorUnregistered;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_SubLevelHandler_USubLevelConnectorComponent OnConnectorLocked;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_SubLevelHandler_USubLevelConnectorComponent OnConnectorUnlocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USubLevelConnectorComponent*> SubLevelConnectors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ExternalLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMasterMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FMultiMapLevels> StreamingLevelsToLoadForSubLevelStruct;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLoading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFirstLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NbShownLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LevelsToBeUnloaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StringToFind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle LoadUnloadSubLevelTimerHandler;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARoomCluster* SubLevelRoomCluster;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AInfluenceMapManager* InfluenceMapManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLevelsUnionCollection LevelsUnionCollection;
    
    ASubLevelHandler(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnregisterSubLevelConnector(USubLevelConnectorComponent* _Connector);
    
    UFUNCTION(BlueprintCallable)
    void UnloadCurrentSubLevel(const FString& _NextLevelToOpen);
    
    UFUNCTION(BlueprintCallable)
    void UnloadCosmeticLevelCallBack();
    
    UFUNCTION(BlueprintCallable)
    void ToggleCosmeticsLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool SublevelIsInvisibleOnChartmap(const FString& SubLevelName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool SublevelIsHidden(const FString& SubLevelName) const;
    
    UFUNCTION(BlueprintCallable)
    void SetStringToFind(const FString& _StringToFind);
    
    UFUNCTION(BlueprintCallable)
    void SetLevelName(const FString& LevelName);
    
    UFUNCTION(BlueprintCallable)
    void RemoveSubLevel(const FString& _SubLevel);
    
    UFUNCTION(BlueprintCallable)
    void RemoveStreamingLevelFromSubLevel(const FString& SubLevel, const FString& StreamingLevel);
    
    UFUNCTION(BlueprintCallable)
    void RemoveRoofLevelWithNoCullingFromSubLevel(const FString& SubLevel, const FString& StreamingLevel);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSubLevelConnector(USubLevelConnectorComponent* _Connector);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRoomClusterFullyGenerated(ARoomCluster* RoomCluster);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnLoadingScreenLevelLoadedCallback();
    
    UFUNCTION(BlueprintCallable)
    void OnLevelUnloadedCallback();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnLevelShown();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnLevelLoadedCallback();
    
    UFUNCTION(BlueprintCallable)
    static void MergeSubLevelHandlers(ASubLevelHandler* SubLevelHandlerTarget, const TArray<ASubLevelHandler*>& SubLevelHandlerstoMerge);
    
    UFUNCTION(BlueprintCallable)
    void MarkLevelAsPersistent(const FString& SubLevel, bool bPersistent);
    
    UFUNCTION(BlueprintCallable)
    void MarkLevelAsLoadingScreencLevel(const FString& SubLevel, bool bIsLoadingScreenLevel);
    
    UFUNCTION(BlueprintCallable)
    void MarkLevelAsIndoor(const FString& SubLevel, bool bIndoor);
    
    UFUNCTION(BlueprintCallable)
    void MarkLevelAsGameplay(const FString& SubLevel, bool bGameplay);
    
    UFUNCTION(BlueprintCallable)
    void MarkAsDefaultSubLevel(const FString& _SubLevel);
    
    UFUNCTION(BlueprintCallable)
    void LoadSubLevel(const FString& _SubLevelName);
    
    UFUNCTION(BlueprintCallable)
    void LoadLoadingScreenLevel();
    
    UFUNCTION(BlueprintCallable)
    void LoadCosmeticLevelCallBack();
    
    UFUNCTION(BlueprintCallable)
    int32 LevelNameMatchStringToFind(const FString& _LevelName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSubLevelLoading() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsIndoorLevel(const FString& SubLevel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCurrentLevelNoOutdoorFOWReveal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCurrentLevelIndoorLevel() const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ARoomCluster* GetSubLevelRoomCluster(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetStreamingLevelThatShouldBeUnloaded() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetStreamingLevelThatShouldBeLoaded(const FString& ForLevel) const;
    
    UFUNCTION(BlueprintCallable)
    void GetStreamingLevelStatut(const FString& StreamingLevel, bool& bIsPersistent, bool& bIsSubLevel);
    
    UFUNCTION(BlueprintCallable)
    TArray<FString> GetPersistansLevels();
    
    UFUNCTION(BlueprintCallable)
    int32 GetNbOccurancyOfStreamingLevel(const FString& _StreamingLevelName);
    
    UFUNCTION(BlueprintCallable)
    TArray<FString> GetMultimapKeys();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLoadingProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USubLevelPrimaryDataAsset* GetCurrentSubLevelDataAsset() const;
    
    UFUNCTION(BlueprintCallable)
    ULevelStreaming* GetCurrentStreamingLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetCosmeticStreamingLevelThatShouldBeLoaded(const FString& ForLevel) const;
    
    UFUNCTION(BlueprintCallable)
    TArray<USubLevelConnectorComponent*> GetConnectorsLeadingTo(const FString& _SubLevelDest);
    
    UFUNCTION(BlueprintCallable)
    TArray<FString> GetAllSubLevels();
    
    UFUNCTION(BlueprintCallable)
    TArray<FString> GetAllStreamingLevelsOfSubLevel(const FString& SubLevel);
    
    UFUNCTION(BlueprintCallable)
    TArray<FString> GetAllRoofNoCullingLevelsOfSubLevel(const FString& SubLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetAllLevels(bool bWithSubLevels, bool bWithPersistentLevels, bool bSorted) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetActorLevelName(AActor* _Actor);
    
public:
    UFUNCTION(BlueprintCallable)
    void GenerateLevelsUnionCollection();
    
    UFUNCTION(BlueprintCallable)
    AEntryPoint* FindTransitionNotInPlace(const FString& From, const FString& To);
    
    UFUNCTION(BlueprintCallable)
    void CleanStreamingLevelList();
    
    UFUNCTION(BlueprintCallable)
    void AddStreamingLevelToSubLevel(const FString& SubLevel, const FString& StreamingLevel);
    
    UFUNCTION(BlueprintCallable)
    void AddRoofLevelWithNoCullingToSubLevel(const FString& SubLevel, const FString& StreamingLevel);
    
};


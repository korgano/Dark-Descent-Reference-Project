#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "ASFGameModeBase.h"
#include "DataCarrierMarine.h"
#include "EnumMainObjectiveFailureConsequence.h"
#include "EnumMissionState.h"
#include "Event_ASFGameModeBaseDelegate.h"
#include "Event_ASFGameModeBase_AFOWRevertedManagerActorDelegate.h"
#include "Event_ASFGameModeBase_AInfluenceMapManagerDelegate.h"
#include "Event_ASFGameModeBase_FString_BoolDelegate.h"
#include "Event_ASFGameModeBase_SubLevelHandlerDelegate.h"
#include "Event_ASFGameModeBase_TMEventSystemDelegate.h"
#include "Event_Bool_NarrativeFreezeGADelegate.h"
#include "Event_BooolDelegate.h"
#include "Event_USubLevelConnectorComponent_FStringDelegate.h"
#include "HumanoidCreationDelegateDelegate.h"
#include "ASFGameModeBase_TacticalMode.generated.h"

class AAIGuardPath;
class AASFLevelScriptActor;
class AASFPlayerController;
class AAdaptiveMusicPlayer;
class AAlien;
class AFOWRevertedManagerActor;
class AHumanoid;
class AHumanoidMarine;
class AInfluenceMapManager;
class AMission;
class ASquad;
class ASquadDrone;
class ASubLevelHandler;
class ATMEventSystem;
class AWeather_Actor;
class UAdaptiveMusicPlayerDataAsset;
class UNavUpdaterManagerComponent;
class UObject;
class UPOIPerception_GameMode;
class USoundEffectSourcePresetChain;
class UTMEndMissionWidget;

UCLASS(Blueprintable, NonTransient)
class ASF_API AASFGameModeBase_TacticalMode : public AASFGameModeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Bool_NarrativeFreezeGA OnNarrativeFreezeStatusChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumMissionState MissionState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasAlreadyCallFinishBeginPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasAlreadyCallFinishBeginPlay_AfterIntro;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_ASFGameModeBase OnReturnToOtago;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_ASFGameModeBase OnFirstSubLevelReady;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATMEventSystem* EventSystem;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_ASFGameModeBase_TMEventSystem OnEventSystemSet;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_USubLevelConnectorComponent_FString OnSubLevelTransitionFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_ASFGameModeBase_AFOWRevertedManagerActor OnFOWManagerSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ensureTMEventGetLevelDataAsset;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsIndoor;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Boool OnIndoorStateChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AWeather_Actor*> WeatherActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundEffectSourcePresetChain* IndoorWeatherEffectChain;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PlayerChooseToStayInGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFOWRevertedManagerActor* FogOfWar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AInfluenceMapManager* InfluenceMapManager;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_ASFGameModeBase_AInfluenceMapManager OnInfluenceMapSet;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPOIPerception_GameMode* POIPerception_GameMode;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNavUpdaterManagerComponent* NavigationManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASubLevelHandler* SubLevelHandler;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_ASFGameModeBase_SubLevelHandler OnSubLevelHandlerSet;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    AAdaptiveMusicPlayer* AdaptiveMusicPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAdaptiveMusicPlayerDataAsset* AdaptiveMusicPlayerDataAsset;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AASFLevelScriptActor* LevelScriptActor;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_ASFGameModeBase OnStartSquad;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_ASFGameModeBase OnMissionLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMissionHasBeenLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> BuildingsToRemoveNextTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> BuildingsToAddNextTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimerFadeOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ASquadDrone> SquadDroneClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FTimerHandle> MapRoofFadeTimer;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DetectionTimeMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTMEndMissionWidget* Widget_EndMission;
    
public:
    AASFGameModeBase_TacticalMode(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ValidateLoading();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void UpdateMissionProgress(FGameplayTag _MissionTag) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateDisplayEndGameGui();
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdateBuildingsDelayed();
    
    UFUNCTION(BlueprintCallable)
    void UpdateBuildingFade(UObject* Building, bool bNeedFade);
    
    UFUNCTION(BlueprintCallable)
    void UnRegisterLDSTActorForRoofFading(const FString& Building, FEvent_ASFGameModeBase_FString_Bool DelegateFade);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterGuardPath(AAIGuardPath* _GuardPath);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartSquad();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SpawnMarines();
    
    UFUNCTION(BlueprintCallable)
    void SetMissionState(EnumMissionState _MissionState);
    
    UFUNCTION(BlueprintCallable)
    void SetLevelScriptActor(AASFLevelScriptActor* _LevelScriptActor);
    
    UFUNCTION(BlueprintCallable)
    void SetIsInDoor(bool bNewInDoor);
    
    UFUNCTION(BlueprintCallable)
    void SetInfluenceMapManager(AInfluenceMapManager* _InfluenceMapManager);
    
    UFUNCTION(BlueprintCallable)
    void SetFOWManager(AFOWRevertedManagerActor* FogOfWarManager);
    
    UFUNCTION(BlueprintCallable)
    void ReturnToOtago();
    
    UFUNCTION(BlueprintCallable)
    void RegisterLDSTActorForRoofFading(const FString& Building, FEvent_ASFGameModeBase_FString_Bool DelegateFade);
    
    UFUNCTION(BlueprintCallable)
    void RegisterGuardPath(AAIGuardPath* _GuardPath);
    
    UFUNCTION(BlueprintCallable)
    void OnSubLevelUnload(ASubLevelHandler* Handler, const FString& StreamingLevel);
    
    UFUNCTION(BlueprintCallable)
    void OnOtagoSavesUncompressed(bool _Success);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMissionSucceeded(AMission* _Mission);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMissionOutroFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMissionIntroFinished();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMissionFailed(AMission* _Mission, EnumMainObjectiveFailureConsequence _FailureConsequence);
    
    UFUNCTION(BlueprintCallable)
    void OnMenuPauseOpeningChanged(AASFPlayerController* Controller, bool bOpen);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnMemberRemoved(ASquad* Squad, AHumanoidMarine* Character);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnFOWManagerDeleted(AFOWRevertedManagerActor* FogOfWarManager);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnFirstSubLevelLoaded(ASubLevelHandler* _Handler, const FString& _SubLevelName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFirstAlienEncountered(AAlien* _Alien);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LaunchMissionOutro(const FString& _MissionOutroMediaUrl);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LaunchMissionIntro(const FString& _MissionIntroMediaUrl);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMissionLoaded() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsLoadedRun();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsIndoor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitRespawnHandler();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitInventory();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPOIPerception_GameMode* GetPOIPerception_GameMode() const;
    
    UFUNCTION(BlueprintCallable)
    FString GetMissionOutroMediaUrl();
    
    UFUNCTION(BlueprintCallable)
    FString GetMissionIntroMediaUrl();
    
    UFUNCTION(BlueprintCallable)
    TArray<AHumanoid*> GetMemberReadyToLeave();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AASFLevelScriptActor* GetLevelScriptActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetFadedBuilding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATMEventSystem* GetEventSystem() const;
    
    UFUNCTION(BlueprintCallable)
    void FinishBeginPlay_AfterIntro();
    
    UFUNCTION(BlueprintCallable)
    void EnableInfluencedPath(bool isInfluenced);
    
    UFUNCTION(BlueprintCallable)
    void DoFadeOutAfterTimer(const FString& Building);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DisplayEndGameGui(bool _Open);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CreateSplitScreenManager();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CreateNarrativeSubtitleUI();
    
    UFUNCTION(BlueprintCallable)
    AHumanoidMarine* CreateMarine(const TSoftClassPtr<AHumanoid>& _MarineClass, FTransform _Transform, const FDataCarrierMarine& _MarineData, int32 _SquadID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CreateLoadingScreen();
    
    UFUNCTION(BlueprintCallable)
    AHumanoid* CreateHumanoid(const TSoftClassPtr<AHumanoid>& _HumanoidClass, FTransform _Transform, const FHumanoidCreationDelegate& DefferedDelegate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BindToEventSystem();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BeforeFinishFirstLoad();
    
};


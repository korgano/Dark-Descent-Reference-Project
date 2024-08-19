#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "AdaptiveMusicPlayerEventDelegate.h"
#include "EMusicPhase.h"
#include "Event_ASFAudioComponent_FName_floatDelegate.h"
#include "MusicParamFader.h"
#include "MusicPhaseConfig.h"
#include "AdaptiveMusicPlayer.generated.h"

class AASFGameModeBase_TacticalMode;
class AASFPlayerController;
class AASFPlayerState;
class ASquad;
class ASubLevelHandler;
class ATMEventSystem;
class UASFAudioComponent;
class UAdaptiveMusicPlayerDataAsset;
class UAudioComponent;
class UCommonSaveLoadComponent;
class UEnnemyTargetingComponent;
class UEnvironmentMusicDataAsset;
class UFactionSystemic;
class UMassiveOnslaughtEffect;
class USoundWave;
class UTinda_EffectHandlerComponent;
class UTrackingSystemComponent;

UCLASS(Blueprintable)
class ASF_API AAdaptiveMusicPlayer : public AInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAdaptiveMusicPlayerEvent OnSwitchedPhase;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAdaptiveMusicPlayerEvent OnAdaptiveModeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAdaptiveMusicPlayerEvent OnDetectionBuildUpStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAdaptiveMusicPlayerEvent OnDetectionBuildUpStopped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_ASFAudioComponent_FName_float OnMusicParameterValueChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonSaveLoadComponent* CommonSaveLoadComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bAdaptiveModeEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UASFAudioComponent*> MusicPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UASFAudioComponent* BuildUpPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAdaptiveMusicPlayerDataAsset* PlayerConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvironmentMusicDataAsset* DataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EMusicPhase CurrentPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UASFAudioComponent*> FadingOutPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UAudioComponent*, bool> PlayerParamsUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMusicParamFader> ParamFaders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTimerHandle> StopHandles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle StopBuildUpHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentBuildUpParamValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMassiveOnslaughtEffect* MassiveOnslaught;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFactionSystemic*> FactionSystemics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UEnnemyTargetingComponent*> ActiveEnemyTargetingComps;
    
public:
    AAdaptiveMusicPlayer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateDetectionBuildUp(float _Param);
    
    UFUNCTION(BlueprintCallable)
    void SwitchPhase(EMusicPhase _Phase, bool _Force);
    
    UFUNCTION(BlueprintCallable)
    void StopNarrativeMusic();
    
    UFUNCTION(BlueprintCallable)
    void StopMassiveOnslaughtBuildUp();
    
    UFUNCTION(BlueprintCallable)
    void StopDetectionBuildUp();
    
    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void StartMassiveOnslaughtBuildUp(float _Duration);
    
    UFUNCTION(BlueprintCallable)
    void StartDetectionBuildUp(FGameplayTag _Faction);
    
    UFUNCTION(BlueprintCallable)
    void SetMusicParameterValue(UASFAudioComponent* _MusicPlayer, FName _Param, float _Value);
    
    UFUNCTION(BlueprintCallable)
    void SetAdaptiveModeEnabled(bool _Enabled);
    
    UFUNCTION(BlueprintCallable)
    void Resume();
    
    UFUNCTION(BlueprintCallable)
    void RemoveActiveEnemyTargetingComponent(UEnnemyTargetingComponent* _TargetingComp);
    
    UFUNCTION(BlueprintCallable)
    void PlayNarrativeMusic();
    
    UFUNCTION(BlueprintCallable)
    void Play();
    
    UFUNCTION(BlueprintCallable)
    void Pause();
    
    UFUNCTION(BlueprintCallable)
    void OnTrackingSystemUpdated(UTrackingSystemComponent* _TrackingSystemComponent);
    
    UFUNCTION(BlueprintCallable)
    void OnSystemicPhaseChanged(UFactionSystemic* FactionSystemic, const FGameplayTag& OldPhase, const FGameplayTag& NewPhase);
    
    UFUNCTION(BlueprintCallable)
    void OnSystemicActivatedOnEventSystem(ATMEventSystem* EventSystem, UFactionSystemic* FactionSystemic);
    
    UFUNCTION(BlueprintCallable)
    void OnSubLevelLoaded(ASubLevelHandler* _Handler, const FString& _SubLevelName);
    
    UFUNCTION(BlueprintCallable)
    void OnSubLevelHandlerSet(AASFGameModeBase_TacticalMode* GameMode, ASubLevelHandler* SubLevelHandler);
    
    UFUNCTION(BlueprintCallable)
    void OnSquadCreated(AASFPlayerState* _PlayerState, ASquad* _Squad);
    
    UFUNCTION(BlueprintCallable)
    void OnPauseChanged(AASFPlayerController* _Controller, bool _bPaused);
    
    UFUNCTION(BlueprintCallable)
    void OnMusicPlayerChangedState(UAudioComponent* _MusicPlayer);
    
    UFUNCTION(BlueprintCallable)
    void OnMusicPlaybackPercent(const UAudioComponent* _AudioComp, const USoundWave* _SoundWave, const float _PlaybackPercent);
    
    UFUNCTION(BlueprintCallable)
    void OnMusicPlaybackFinished(UASFAudioComponent* _MusicPlayer);
    
    UFUNCTION(BlueprintCallable)
    void OnMissionLoaded(AASFGameModeBase_TacticalMode* _GameMode);
    
    UFUNCTION(BlueprintCallable)
    void OnMassiveOnslaughtStateChanged(UTinda_EffectHandlerComponent* EffectHandler, FGameplayTag Effect, bool bAdded);
    
    UFUNCTION(BlueprintCallable)
    void OnGameSpeedChanged(AASFPlayerController* _Controller, float _Speed);
    
    UFUNCTION(BlueprintCallable)
    void OnEventSystemSet(AASFGameModeBase_TacticalMode* GameMode, ATMEventSystem* EventSystem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingNarrativeMusic() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMassiveOnslaughtBuildUpPending() const;
    
    UFUNCTION(BlueprintCallable)
    void InitFromSubLevel(const FString& _SubLevelName);
    
    UFUNCTION(BlueprintCallable)
    void Init(UEnvironmentMusicDataAsset* _DataAsset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UASFAudioComponent* GetCurrentPhasePlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMusicPhaseConfig GetCurrentPhaseConfig() const;
    
    UFUNCTION(BlueprintCallable)
    void AddActiveEnemyTargetingComponent(UEnnemyTargetingComponent* _TargetingComp);
    
};


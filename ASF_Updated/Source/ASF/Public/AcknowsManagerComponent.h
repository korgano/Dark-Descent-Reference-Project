#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "AcknowVariants.h"
#include "AcknowsManagerEventDelegate.h"
#include "AcknowsSequence.h"
#include "AssignedAcknow.h"
#include "BossData.h"
#include "DamageResultStruct.h"
#include "DynDelegate_AcknowsManager_PDA_int32Delegate.h"
#include "EDamageIntensity.h"
#include "EDialoguePlaybackMode.h"
#include "EnumAcknowSpeaker.h"
#include "Event_AcknowsManager_FText_PDA_int32_ESubtitleTypeDelegate.h"
#include "GenderAcknowVariants.h"
#include "TaggedAcknowVariants.h"
#include "AcknowsManagerComponent.generated.h"

class AASFCharacter;
class AASFGameModeBase_TacticalMode;
class AASFGameState_TacticalMode;
class AASFPlayerController;
class AASFPlayerState;
class AActor;
class AHumanoid;
class ASquad;
class ATMEventSystem;
class AWeapon;
class UAcknow_DataAsset;
class UAlienSystemic;
class UAudioComponent;
class UEnemyContactAcknows_DataAsset;
class UFactionSystemic;
class UPhaseSwitchAcknows_DataAsset;
class UReactionAcknows_DataAsset;
class USelectionAcknows_DataAsset;
class USituationAcknows_DataAsset;
class USoundConcurrency;
class USoundEffectSourcePresetChain;
class USoundWave;
class UTinda_EffectHandlerComponent;
class UTrackedComponent;
class UTrackingSystemComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UAcknowsManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeOutDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundConcurrency* ConcurrencySettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundEffectSourcePresetChain* RadioVoiceEffectChain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RadioVoiceSwitchPlaybackPercentLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USelectionAcknows_DataAsset* SelectionAcknowsAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UReactionAcknows_DataAsset* ReactionAcknowsAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhaseSwitchAcknows_DataAsset* PhaseSwitchAcknowsAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnemyContactAcknows_DataAsset* EnemyContactAcknowsAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USituationAcknows_DataAsset* SituationAcknowsAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAcknowVariants DeploymentAcknows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAcknowVariants MissionExitAcknows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAcknowVariants OrderReceivedAcknows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FAcknowVariants> WoundReceivedAcknows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FAcknowVariants> DamageTypeReceivedAcknows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDamageIntensity, FAcknowVariants> DamageIntensityReceivedAcknows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FAcknowVariants> StateChangeAcknows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTaggedAcknowVariants SquadInactivityAcknows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FAcknowVariants> BossSpawnAcknows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGenderAcknowVariants DemoralizedCarryingMarineAcknows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAcknowVariants DemoralizedCarryingMarineReactionAcknows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTaggedAcknowVariants WeakenedSquadFillerAcknows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTaggedAcknowVariants CovertFillerAcknows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTaggedAcknowVariants TrackedFillerAcknows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxActiveAcknowsCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery AbleToSpeakQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamagePercentMedium;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamagePercentHigh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NewBleepInactivityDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoreBleepInactivityDuration;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAcknowsManagerEvent OnAcknowsManagerIdle;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AcknowsManager_FText_PDA_int32_ESubtitleType OnSetSubtitleText;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAcknowsManagerEvent OnNarrativeDialogueFinished;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CurrentSubtitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSubtitleCue> SubtitleQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTimerHandle> SubtitleTimerHandles;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IdleTimerDuration;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle IdleTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, AHumanoid*> AcknowSpeakers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, bool> SpeakersOnScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAssignedAcknow> ActiveAcknows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAssignedAcknow> PostponedAcknows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAssignedAcknow> PendingAcknows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FAcknowsSequence> NarrativeDialogues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAcknow_DataAsset* LastPlayedAcknow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UAcknow_DataAsset*, FTimerHandle> AcknowsCooldownHandles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UTrackedComponent*> TrackedComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bAcknowsManagerIsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bIdleAcknowsIsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bNarrativeDialogueOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bForceNarrativeDialogueOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDialoguePlaybackMode DialoguePlaybackMode;
    
public:
    UAcknowsManagerComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateSpeakerOnScreen(int32 _SpeakerID);
    
public:
    UFUNCTION(BlueprintCallable)
    void UnbindFromPlaybackFinished(UAcknow_DataAsset* _AcknowAsset, FDynDelegate_AcknowsManager_PDA_int32 _Delegate);
    
    UFUNCTION(BlueprintCallable)
    void TryPlayTaggedAcknowVariants(const FTaggedAcknowVariants& _TaggedVariants, int32 _WaitForSpeakerID, bool _bBypassAbleToSpeakQuery);
    
    UFUNCTION(BlueprintCallable)
    void TryPlayAcknowVariants(int32 _SpeakerID, const FAcknowVariants& _AcknowVariants, int32 _WaitForSpeakerID, bool _bBypassAbleToSpeakQuery, bool bAsyncLoading);
    
protected:
    UFUNCTION(BlueprintCallable)
    void StartIdleTimer();
    
    UFUNCTION(BlueprintCallable)
    void ShowSpeechFeedback(AActor* _Actor);
    
    UFUNCTION(BlueprintCallable)
    bool ShouldSpeakerBeInterruptedBy(int32 _SpeakerID, UAcknow_DataAsset* _NewAcknow) const;
    
    UFUNCTION(BlueprintCallable)
    void SetSubtitleText(const FText& _Text);
    
    UFUNCTION(BlueprintCallable)
    void SetRadioVoiceEffectEnabled(int32 _SpeakerID, bool _bEnabled);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetNarrativeDialogueOnly(bool _DialogueOnly);
    
    UFUNCTION(BlueprintCallable)
    void SetIdleAcknowsActivation(bool _NewActive);
    
    UFUNCTION(BlueprintCallable)
    void SetForceNarrativeDialogueOnly(bool _DialogueOnly);
    
    UFUNCTION(BlueprintCallable)
    void SetAcknowsManagerActivation(bool _bNewActive);
    
    UFUNCTION(BlueprintCallable)
    void RetriggerCurrentSubtitle();
    
    UFUNCTION(BlueprintCallable)
    void RestartNarrativeDialogues();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ResetIdleTimer();
    
    UFUNCTION(BlueprintCallable)
    void RemovePendingAcknow(int32 _WaitForSpeakerID, UAcknow_DataAsset* _WaitForAsset);
    
    UFUNCTION(BlueprintCallable)
    void RemoveActiveAcknow(int32 _SpeakerID);
    
public:
    UFUNCTION(BlueprintCallable)
    void RemoveAcknowSpeaker(AHumanoid* _Humanoid);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ProcessSubtitleQueue();
    
public:
    UFUNCTION(BlueprintCallable)
    void PlayNarrativeDialogue(FAcknowsSequence _NarrativeDialogue);
    
    UFUNCTION(BlueprintCallable)
    void OnVoiceComponentPauseChanged(AASFPlayerController* _PlayerController, bool _bPause);
    
    UFUNCTION(BlueprintCallable)
    void OnUserSettingChanged(FGameplayTag _SettingTag, bool _Value);
    
    UFUNCTION(BlueprintCallable)
    void OnTrackingSystemUpdated(UTrackingSystemComponent* _TrackingSystemComponent);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSystemicActivatedOnEventSystem(ATMEventSystem* EventSystem, UFactionSystemic* FactionSystemic);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnSubtitleManagerSetText(FText _Text);
    
    UFUNCTION(BlueprintCallable)
    void OnSquadInactivityTimerTriggered(ASquad* _Squad);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSquadCreated(AASFPlayerState* _PlayerState, ASquad* _Squad);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnSpeakerStateChanged(UTinda_EffectHandlerComponent* _EffectHandler, FGameplayTag _Effect, bool _bAdded);
    
    UFUNCTION(BlueprintCallable)
    void OnSpeakerStartedReloadingEmptyWeapon(AHumanoid* _Humanoid, AWeapon* _Weapon);
    
    UFUNCTION(BlueprintCallable)
    void OnSpeakerReceivedWound(AActor* _ActorWounded, const FDamageResultStruct& _Damage);
    
    UFUNCTION(BlueprintCallable)
    void OnSpeakerReceivedDamage(AActor* _ActorWounded, const FDamageResultStruct& _Damage);
    
    UFUNCTION(BlueprintCallable)
    void OnSpeakerKilledEnemy(AHumanoid* _Humanoid, AASFCharacter* _Enemy);
    
    UFUNCTION(BlueprintCallable)
    void OnSpeakerFiredWeapon(AHumanoid* _Humanoid, AWeapon* _Weapon);
    
    UFUNCTION(BlueprintCallable)
    void OnMissionLoaded(AASFGameModeBase_TacticalMode* _GameMode);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnIdleTimerTriggered();
    
    UFUNCTION(BlueprintCallable)
    void OnEventSystemSet(AASFGameModeBase_TacticalMode* GameMode, ATMEventSystem* EventSystem);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnEnemySpeakerStartedReloading(AHumanoid* _Humanoid, AWeapon* _Weapon);
    
    UFUNCTION(BlueprintCallable)
    void OnEnemySpeakerReceivedDamage(AActor* _ActorWounded, const FDamageResultStruct& _Damage);
    
    UFUNCTION(BlueprintCallable)
    void OnCinematicModeActivationChanged(AASFPlayerController* _PlayerController, bool _bActive);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterVisibilityChanged(AASFGameState_TacticalMode* _TacticalMode, AASFCharacter* _Character, bool _bVisible);
    
    UFUNCTION(BlueprintCallable)
    void OnBossSpawned(UAlienSystemic* _AlienSystemic, const FBossData& _BossData, bool _IsRespawn);
    
    UFUNCTION(BlueprintCallable)
    void OnAlienPhaseChanged(UFactionSystemic* FactionSystemic, const FGameplayTag& OldPhase, const FGameplayTag& NewPhase);
    
    UFUNCTION(BlueprintCallable)
    void OnAcknowPlaybackPercent(const UAudioComponent* _AudioComp, const USoundWave* _SoundWave, const float _PlaybackPercent);
    
    UFUNCTION(BlueprintCallable)
    void OnAcknowPlaybackFinished(int32 _SpeakerID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSpeakerActive(int32 _SpeakerID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingNarrativeDialogue() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    bool IsPartOfNarrativeDialogue(UAcknow_DataAsset* _Asset) const;
    
    UFUNCTION(BlueprintCallable)
    bool IsNarrativeDialoguePlaying(const FAcknowsSequence& _Dialogue) const;
    
    UFUNCTION(BlueprintCallable)
    bool IsAcknowCoolingDown(const FAcknowVariants& _AcknowVariants);
    
public:
    UFUNCTION(BlueprintCallable)
    void InterruptAllAcknows();
    
    UFUNCTION(BlueprintCallable)
    void InterruptActiveAcknow(int32 _SpeakerID);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HideSpeechFeedback(AActor* _Actor);
    
    UFUNCTION(BlueprintCallable)
    FAcknowVariants GetWoundAcknow(const FDamageResultStruct& _Damage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAudioComponent* GetVoiceComponent(int32 _SpeakerID) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSpecialSpeakerID(EnumAcknowSpeaker Speaker);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EnumAcknowSpeaker GetSpecialSpeakerEnum(int32 _SpeakerID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSpeakerName(int32 _SpeakerID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSpeakerIDByEnum(EnumAcknowSpeaker Speaker) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FAssignedAcknow GetPendingAcknow(int32 _WaitForSpeakerID, UAcknow_DataAsset* _WaitForAsset) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNextGuestSpeakerID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMaekoSpeakerID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetHunsletSpeakerID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetHarperSpeakerID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetDanielSpeakerID();
    
protected:
    UFUNCTION(BlueprintCallable)
    FAcknowVariants GetDamageTypeAcknow(const FDamageResultStruct& _Damage);
    
    UFUNCTION(BlueprintCallable)
    FAcknowVariants GetDamageAcknow(const FDamageResultStruct& _Damage);
    
    UFUNCTION(BlueprintCallable)
    TArray<UAcknow_DataAsset*> GetCoolingDownAcknows();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetComputerVoiceSpeakerID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetAPCPilotSpeakerID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetActiveSpeakerID(UAcknow_DataAsset* _AcknowAsset) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FAssignedAcknow GetActiveAcknow(int32 _SpeakerID) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void FlushSubtitleQueue();
    
public:
    UFUNCTION(BlueprintCallable)
    void DismissNarrativeDialogue(const FAcknowsSequence& _NarrativeDialogue, bool _bWithFade, bool _CallFinish);
    
    UFUNCTION(BlueprintCallable)
    void ClearNarrativeDialogues();
    
    UFUNCTION(BlueprintCallable)
    void BP_TryPlayAcknow(int32 _SpeakerID, UAcknow_DataAsset* _AcknowAsset, int32 _WaitForSpeakerID, bool _bBypassAbleToSpeakQuery);
    
    UFUNCTION(BlueprintCallable)
    void BindToPlaybackFinished(UAcknow_DataAsset* _AcknowAsset, FDynDelegate_AcknowsManager_PDA_int32 _Delegate);
    
    UFUNCTION(BlueprintCallable)
    void AddAcknowSpeaker(AHumanoid* _Humanoid);
    
};


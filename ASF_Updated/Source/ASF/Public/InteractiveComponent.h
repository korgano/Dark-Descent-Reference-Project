#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "AcknowsSequence.h"
#include "CharacterIDName.h"
#include "EnumActionStatus.h"
#include "Event_InteractiveComponentDelegate.h"
#include "Event_InteractiveComponent_ActionDelegate.h"
#include "Event_InteractiveComponent_ActionStatusDelegate.h"
#include "Segment.h"
#include "Templates/SubclassOf.h"
#include "TwinActorBootable.h"
#include "InteractiveComponent.generated.h"

class AActor;
class AGameplayTwinActor;
class AGrip;
class AHumanoid;
class AHumanoidTactical;
class ASquad;
class UAction_Interaction;
class UActivity;
class UActivity_Interact_NoAction;
class UAudioComponent;
class UFactionSystemic;
class UInteractionPrimaryDataAsset;
class UInteractiveComponent;
class UObject;
class UOverlay_WidgetComponent;
class UTexture2D;
class UTinda_Effect;
class UTinda_EffectHandlerComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UInteractiveComponent : public UActorComponent, public ITwinActorBootable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag DiplomacyTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag BeingUsedTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CharacterInteractionTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNoProgressBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAutoTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bIsNarrative;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bForceNarrativeAtFalseAfterSuccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceDisplayButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bShowPhaseWarningBeforeInteract;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DisplayPriority;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PerkNeeded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer CharacterTypeAllowed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer UnableInstigatorTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer UnallowingTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer UnavailableTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery AvailabilityQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMarinesNeedToBeInSameRoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInteractionPrimaryDataAsset* DataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bIsInteractionActive;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle TimerHandle;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_InteractiveComponent_ActionStatus OnInteractionEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_InteractiveComponent_ActionStatus OnInteractionStart_ForSave;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_InteractiveComponent_ActionStatus OnInteractionStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_InteractiveComponent_Action OnInteractionInit;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_InteractiveComponent OnIsActiveChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_InteractiveComponent OnOpenInteraction;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_InteractiveComponent OnPrerequisitesNoValidAnymore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bBlockByTutorial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay_WidgetComponent* OverlayWidgetComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGrip* Grip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHumanoidTactical* Instigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHumanoidTactical* LastInteractor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GameTimeAtInteractionStart;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UAction_Interaction> ActionClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UActivity_Interact_NoAction> ActivityClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAcknowsSequence OnStartNarrativeDialogue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bStartNarrativeDialogueAlreadyPlayed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAcknowsSequence OnFinishNarrativeDialogue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bFinishNarrativeDialogueAlreadyPlayed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ForceCallSelfGetBestMarineForInteraction;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* Sound_Interaction;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterIDName ForcedCharacterToInteract;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractiveComponent* TwinActorInteractiveComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AHumanoidTactical*> SwitchedInstigators;
    
public:
    UInteractiveComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnbindPrerequisitesCheck();
    
    UFUNCTION(BlueprintCallable)
    void TryToTriggerTriggerInfo(EnumActionStatus _InteractionStatus, bool bForSave);
    
    UFUNCTION(BlueprintCallable)
    bool SquadIsInSameRoom(ASquad* _Squad);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UInteractiveComponent*> SortByDisplayPriority(const TArray<UInteractiveComponent*>& _Components);
    
    UFUNCTION(BlueprintCallable)
    void SetTwinActorInteractiveComponent(UInteractiveComponent* _TwinActorInteractiveComponent);
    
    UFUNCTION(BlueprintCallable)
    void SetIsInteractionNarrative(bool _isNarrative);
    
    UFUNCTION(BlueprintCallable)
    void SetIsInteractionActive(bool _isActive);
    
    UFUNCTION(BlueprintCallable)
    void SetInstigator(AHumanoidTactical* _Instigator);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetHovered(bool bIsHovered);
    
    UFUNCTION(BlueprintCallable)
    void SetGrip(AGrip* _Grip);
    
    UFUNCTION(BlueprintCallable)
    void SetForceNarrativeAtFalseAfterSuccess(bool _ForceNarrativeAtFalseAfterSuccess);
    
    UFUNCTION(BlueprintCallable)
    void SetForcedCharacterToInteract(FCharacterIDName ForcedCharacter);
    
    UFUNCTION(BlueprintCallable)
    void SetBlockBytutorial(bool _bNewBlock);
    
    UFUNCTION(BlueprintCallable)
    AHumanoidTactical* SelectPreviousHumanoidToInteract(ASquad* _Squad, bool _Run);
    
    UFUNCTION(BlueprintCallable)
    AHumanoidTactical* SelectNextHumanoidToInteract(ASquad* _Squad, bool _Run);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SelectInteraction(UInteractiveComponent* _InteractionSelected, bool _Run, bool _Influenced);
    
    UFUNCTION(BlueprintCallable)
    AHumanoidTactical* SelectHumanoidToInteract(ASquad* _Squad, bool _Run);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReserveSuppliesIfNeeded(ASquad* _Squad);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReleaseSuppliesIfNeeded(ASquad* _Squad);
    
    UFUNCTION(BlueprintCallable)
    void PlaySound_EndWithSuccess();
    
    UFUNCTION(BlueprintCallable)
    void PlayNarrativeDialogue(const FAcknowsSequence& _NarrativeDialogue);
    
    UFUNCTION(BlueprintCallable)
    void PlayInteractionStartAcknow(AHumanoid* _ActionPerformer);
    
    UFUNCTION(BlueprintCallable)
    void PlayInteractionCommandAcknow(AHumanoid* _ActionPerformer);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayInteraction();
    
    UFUNCTION(BlueprintCallable)
    bool OpenInteractions(bool _Run);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInteractionCompleted();
    
    UFUNCTION(BlueprintCallable)
    void OnAlienPhaseChanged(UFactionSystemic* FactionSystemic, const FGameplayTag& OldPhase, const FGameplayTag& NewPhase);
    
    UFUNCTION(BlueprintCallable)
    bool IsQuickInteraction(UInteractiveComponent*& QuickInteraction);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsObjectReserved(AActor* _InteractionOwner);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsInteractionAvailable(ASquad* _Squad);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsInteractionAllowed(ASquad* _Squad, FGameplayTagContainer& ErrorReasons, bool _TestBeforeInteraction);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsDiplomaticallyAvailable(AActor* _Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsCharacterAbleToInteract(AHumanoidTactical* HumanoidTactical, FGameplayTagContainer& ErrorReasons);
    
    UFUNCTION(BlueprintCallable)
    bool IsAtLeastOneCharacterAbleToInteract(ASquad* _Squad);
    
    UFUNCTION(BlueprintCallable)
    bool InstigatorSquadIsInSameRoom();
    
    UFUNCTION(BlueprintCallable)
    void HoveredStateChanged(bool _Hovered);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HasEnoughSpaceInInventory(ASquad* _Squad);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HasAvailableNeededSupplies(ASquad* _Squad);
    
    UFUNCTION(BlueprintCallable)
    static bool HasAtLeastOneInteractionAvailable(AActor* _Owner);
    
    UFUNCTION(BlueprintCallable)
    UInteractiveComponent* GetTrueActorInteractiveComponent(AGameplayTwinActor* _TwinActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TSoftClassPtr<UActivity> GetSwapActivity();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    void GetResourceNeeded(FGameplayTag& _Tag, int32& nb);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    void GetResourceGiven(FGameplayTag& _Tag, int32& nb);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    float GetRemainingInteractionDurationForCharacter(AHumanoidTactical* HumanoidTactical);
    
    UFUNCTION(BlueprintCallable)
    UInteractiveComponent* GetQuickInteraction();
    
    UFUNCTION(BlueprintCallable)
    void GetPotentialSelectableHumanoidToInteract(TArray<AHumanoidTactical*>& _Res, ASquad* _Squad);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UObject* GetObjectInstigator(AActor* _InteractionOwner);
    
    UFUNCTION(BlueprintCallable)
    bool GetNeedToBeEmptyHanded();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FText GetName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FSegment GetLocationDataForInteraction(AHumanoidTactical* _AHumanoidTactical);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHumanoidTactical* GetLastInteractor() const;
    
    UFUNCTION(BlueprintCallable)
    FGameplayTagContainer GetItemNeeded();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsInteractionNarrative();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsInteractionActive();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetInteractionHumanoidMalus(AHumanoidTactical* _HumanoidTactical);
    
    UFUNCTION(BlueprintCallable)
    void GetInteractionErrors(ASquad* _Squad, TMap<AActor*, FGameplayTagContainer>& ErrorTagContairers);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    float GetInteractionDurationForCharacter(AHumanoidTactical* HumanoidTactical);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    float GetInteractionDuration();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHumanoidTactical* GetInstigator() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetIcon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGrip* GetGrip() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FSegment GetDisplayLocationDataForInteraction(AHumanoidTactical* _AHumanoidTactical);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetDescription() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UInteractionPrimaryDataAsset* GetDataAssetCastTo(TSubclassOf<UInteractionPrimaryDataAsset> ClassToCastInto) const;
    
    UFUNCTION(BlueprintCallable)
    UInteractionPrimaryDataAsset* GetDataAsset();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetCharacterOrientation_Desired();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AHumanoidTactical* GetBestMarineForInteraction(UPARAM(Ref) TArray<AHumanoidTactical*>& PossibleMarines);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UInteractiveComponent*> GetAvailableInteractiveComponent(AActor* _Actor, ASquad* _Squad);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    TArray<UActorComponent*> GetArrowsForInteraction();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    TArray<FSegment> GetAllPossibleLocationsForInteraction(AHumanoidTactical* _AHumanoidTactical);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UAction_Interaction* GenerateInteraction(AActor* _Actor, bool _Run, bool _Influenced);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UInteractiveComponent*> FilterByInteractionAvailable(ASquad* _Squad, const TArray<UInteractiveComponent*>& _Components);
    
    UFUNCTION(BlueprintCallable)
    void EndInteraction(EnumActionStatus _InteractionStatus);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool DoesNeedSupplies();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool DoesGiveSupplies();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ConsumeSuppliesIfNeeded(ASquad* _Squad);
    
    UFUNCTION(BlueprintCallable)
    void ClearGoingToNarrativeInteractionEffect();
    
    UFUNCTION(BlueprintCallable)
    void CheckPrerequisites(UTinda_EffectHandlerComponent* _EffectHandler, UTinda_Effect* _Effect);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanMarineBeCommandedToInteract(AHumanoidTactical* _HumanoidTactical, FGameplayTagContainer& ErrorReasons);
    
    UFUNCTION(BlueprintCallable)
    static bool CancelObjectInstigator(AActor* _InteractionOwner, bool _EvenIfInteractionStarted);
    
    UFUNCTION(BlueprintCallable)
    void BroadcastOpenInteraction(const TArray<UInteractiveComponent*>& Components);
    
    UFUNCTION(BlueprintCallable)
    void BindForPrerequisitesCheck();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ActionSuccess();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ActionPause();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ActionOnGoing();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ActionFail();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ActionCancel();
    

    // Fix for true pure virtual functions not being implemented
};


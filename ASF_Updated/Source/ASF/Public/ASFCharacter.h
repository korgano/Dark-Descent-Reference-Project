#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Character.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "Tinda_GameplayTagAssetInterface.h"
#include "ActorWithCharacterIDInterface.h"
#include "CharacterIDName.h"
#include "CharacterSightProperties.h"
#include "DamageResultStruct.h"
#include "EventOnActor_Interface.h"
#include "Event_CharacterDelegate.h"
#include "Event_Character_DamageResultDelegate.h"
#include "Event_Character_FGameplayTag_FloatDelegate.h"
#include "Event_Character_InteractiveComponentDelegate.h"
#include "Event_Character_InteractiveComponent_boolDelegate.h"
#include "Event_Character_ItemDelegate.h"
#include "Event_Character_VectorDelegate.h"
#include "Event_EventOnActorDelegate.h"
#include "Feedback_EventOnActor.h"
#include "Flamable.h"
#include "InteractiveActor.h"
#include "Interface_Shootable.h"
#include "RailDrivenCharacterData.h"
#include "SavedActorInterface.h"
#include "Templates/SubclassOf.h"
//#include "GameplayTask.h"
#include "ASFCharacter.generated.h"

class AASFCharacter;
class AASFCharacterAIController;
class AASFGameModeBase_TacticalMode;
class AASFPlayerController;
class AActor;
class AItem;
class ANavigationData;
class ASubLevelHandler;
class UAI_POIPerceptionComponent;
class UASFCharacterMovementComponent;
class UASM_AISplineMovementComponent;
class UActivity;
class UActivityManager;
class UActivity_SwapItem;
class UAnimationComponent;
class UArrowComponent;
class UCharacterDataAsset;
class UCharacterRailSplineComponent;
class UCoverComponent;
class UDamageReceiverComponent;
class UDiplomacyComponent;
class UDynamiqueSaveLoadComponent;
class UNarrativeFreezeGameplayAction;
class UNavigationQueryFilter;
class UObject;
class UPOITargetingComponent;
class UStatComponent;
class UTinda_Effect;
class UTinda_EffectHandlerComponent;

UCLASS(Blueprintable)
class AASFCharacter : public ACharacter, public ITinda_GameplayTagAssetInterface, public IInteractiveActor, public ISavedActorInterface, public IInterface_Shootable, public IActorWithCharacterIDInterface, public IFlamable, public IEventOnActor_Interface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTinda_Effect*> OutOfPlayEffects;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Character OnCharacterRemovedFromPlay;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Character_Vector OnCharacterAddedToPlay;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Character OnPawnPossessed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDiplomacyComponent* DiplomacyComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UASM_AISplineMovementComponent* AISplineMovementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery AllowedMoveQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDamageReceiverComponent* DamageReceiverComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ImpactTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bSpawnCorpseOnDeath;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> DamageTypeToIgnore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UDamageReceiverComponent> DamageReceiverComponentClass;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Character_FGameplayTag_Float OnCharacterImpactReaction;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Character_FGameplayTag_Float OnCharacterStunReaction;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Character_DamageResult OnDeath;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Character OnCharacterDeathOrDestroyed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCoverComponent* CoverComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAI_POIPerceptionComponent* POIPerceptionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterSightProperties> Sight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTinda_EffectHandlerComponent* EffectHandlerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStatComponent* StatComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnimationComponent* AnimationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, SaveGame, meta=(AllowPrivateAccess=true))
    FCharacterIDName CharacterIDName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamiqueSaveLoadComponent* DynamicSaveLoadComponent;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Character_InteractiveComponent_bool OnInteractionStateChange;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Character_InteractiveComponent OnInteractionDelayedAdded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TagContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UActivityManager* ActivityManager;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AItem* ItemEquipped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UActivity_SwapItem> SwapItemActivityClass;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Character_Item OnItemEquippedChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Character OnReportStep;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Character StartSideStep;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Character EndSideStep;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float refreshFreezeMeshVelocityRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneNameToSaveVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AASFCharacterAIController* ASFCharacterAIController;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector InitialBoxExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSpawning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTempDisableUseFailSafeMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 InPowerLoaderId;
    
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    double TimeInCombat;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UTinda_Effect> NarrativeFreezeEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UTinda_Effect> RestNarrativeFreezeEffectClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTinda_Effect* NarrativeFreezeEffect;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Character OnMeshLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_EventOnActor Event_EventOnActor;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCharacterRailSplineComponent* DrivingRailSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    AActor* RailSplineActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FString RailComponentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FRailDrivenCharacterData DrivingRailSplineSavedData;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BindToSignificantManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EEndPlayReason::Type> DestroyedReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CheckIfFallenAfterEveryMove;
    
    AASFCharacter(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SuspendCrowdManager(bool bSuspend);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetSpawnCorpseOnDeath(bool _bSpawnCorpseOnDeath);
    
    UFUNCTION(BlueprintCallable)
    void SetSight(TArray<FCharacterSightProperties> _Sight);
    
    UFUNCTION(BlueprintCallable)
    void SetMeshVelocityToZero();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetMeshMaterialInstance(bool _bIsLeader);
    
    UFUNCTION(BlueprintCallable)
    void SetItemEquipped(AItem* _ItemEquipped);
    
    UFUNCTION(BlueprintCallable)
    bool Rotate(FVector _Destination);
    
    UFUNCTION(BlueprintCallable)
    void ResetMeshVelocity();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReportStep();
    
    UFUNCTION(BlueprintCallable)
    void RemoveFromPlayableArea();
    
    UFUNCTION(BlueprintCallable)
    void RemoveFromCrowdManager();
    
    UFUNCTION(BlueprintCallable)
    bool ProjectPointToNavigationForPawn(const FVector& Point, FVector& ProjectedLocation, ANavigationData* NavData, TSubclassOf<UNavigationQueryFilter> FilterClass, const FVector QueryExtent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OpenInteractionGUI();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSubLevelIsLoaded(ASubLevelHandler* Handler, const FString& StreamingLevel);
    
    UFUNCTION(BlueprintCallable)
    void OnStunReaction(UDamageReceiverComponent* _DamageReceiverComponent, FGameplayTag _Reaction);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRotateInPlaceFinished(UASFCharacterMovementComponent* MovementComponent);
    
    UFUNCTION(BlueprintCallable)
    void OnMissionHasBeenLoaded(AASFGameModeBase_TacticalMode* GameMode);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnImpactReaction(UDamageReceiverComponent* _DamageReceiverComponent, FGameplayTag _Reaction);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCharacterDeath(AASFCharacter* ActorKilled, const FDamageResultStruct& _DamageResult);
    
    UFUNCTION(BlueprintCallable)
    void OnAnimationReadyForImpact(UObject* _Source);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NarrativeFreezeStatusChanged(bool IsActive, UNarrativeFreezeGameplayAction* NarrativeFreezeGA);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MeshLoaded_Blueprint();
    
    UFUNCTION(BlueprintCallable)
    void MeshLoaded();
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsRotatingInPlace();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPathValide() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMeshLoaded() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInPlay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCrowdManagerSuspended() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsAPlayerCharacter();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsAllowedToMove();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleRemovedFromPlayableArea();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleAddedToPlayableArea();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FVector GetVisionForwardVector() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UStatComponent* GetStatComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UASM_AISplineMovementComponent* GetSplineMovementComponent() const;
    
    UFUNCTION(BlueprintCallable)
    FVector GetSize_Implementation();
    
    UFUNCTION(BlueprintCallable)
    TArray<FCharacterSightProperties> GetSight();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetRealForward() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetRandomReachablePointInRadiusForPawn(const FVector& Origin, FVector& RandomLocation, float Radius, ANavigationData* NavData, TSubclassOf<UNavigationQueryFilter> FilterClass);
    
    UFUNCTION(BlueprintCallable)
    bool GetRandomLocationInNavigableRadiusForPawn(const FVector& Origin, FVector& RandomLocation, float Radius, ANavigationData* NavData, TSubclassOf<UNavigationQueryFilter> FilterClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPOITargetingComponent* GetPOITargetingComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAI_POIPerceptionComponent* GetPOIPerceptionComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPathLength() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UNavigationQueryFilter> GetNavigationFilterFromTag(FGameplayTag _NavFilterTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    TSubclassOf<UNavigationQueryFilter> GetNavigationFilter(bool& _HasBeenOverride, bool InfluencedFilter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AItem* GetItemEquipped() const;
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<EEndPlayReason::Type> GetEndPlayReason();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTinda_EffectHandlerComponent* GetEffectHandlerComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDynamiqueSaveLoadComponent* GetDynamicSaveLoadComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDiplomacyComponent* GetDiplomacyComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDamageReceiverComponent* GetDamageReceiverComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCoverComponent* GetCoverComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UCharacterDataAsset* GetCharacterDataAssetFromBP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCharacterDataAsset* GetCharacterDataAsset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FVector GetCharacterAimingLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    UArrowComponent* GetCarryArrow();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AASFCharacterAIController* GetASFCharacterAIController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimationComponent* GetAnimationComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    UArrowComponent* GetAbductionArrow();
    
    UFUNCTION(BlueprintCallable)
    void FreezeMeshVelocity();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool FindActionOnPath();
    
    UFUNCTION(BlueprintCallable)
    void EquipItem(FGameplayTag _Item);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DisableCapsuleComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DisableAllComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearUnwantedComponent_BP();
    
    UFUNCTION(BlueprintCallable)
    void ClearUnwantedComponent();
    
public:
    UFUNCTION(BlueprintCallable)
    bool CanReceiveMoveCommand();
    
    UFUNCTION(BlueprintCallable)
    void BindOnGameSpeedChange(AASFPlayerController* ASFController, float Value);
    
protected:
    UFUNCTION(BlueprintCallable)
    void BeginPlay();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ApplyStun(FGameplayTag _ImpactTag, float _ImpactDuration);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ApplyImpact(FGameplayTag _ImpactTag, float _ImpactDuration);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddToPlayableArea(const FVector& NewLocation);
    
    UFUNCTION(BlueprintCallable)
    void AddToCrowdManager();
    
    UFUNCTION(BlueprintCallable)
    void AddActivity(UActivity* _Activity);
    

    // Fix for true pure virtual functions not being implemented
private:
    UFUNCTION(BlueprintCallable)
    void SetTindaOwnedGameplayTags(FGameplayTagContainer& _TagContainer) override PURE_VIRTUAL(SetTindaOwnedGameplayTags,);
    
public:
    UFUNCTION(BlueprintCallable)
    bool RemoveTag(FGameplayTag TagToRemove) override PURE_VIRTUAL(RemoveTag, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasMatchingTindaGameplayTag(FGameplayTag TagToCheck) const override PURE_VIRTUAL(HasMatchingTindaGameplayTag, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasMatchingExactTindaGameplayTag(FGameplayTag TagToCheck) const override PURE_VIRTUAL(HasMatchingExactTindaGameplayTag, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAnyMatchingTindaGameplayTags(const FGameplayTagContainer& NewTagContainer) const override PURE_VIRTUAL(HasAnyMatchingTindaGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& NewTagContainer) const override PURE_VIRTUAL(HasAnyMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAnyMatchingExactTindaGameplayTags(const FGameplayTagContainer& NewTagContainer) const override PURE_VIRTUAL(HasAnyMatchingExactTindaGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAllMatchingTindaGameplayTags(const FGameplayTagContainer& NewTagContainer) const override PURE_VIRTUAL(HasAllMatchingTindaGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAllMatchingExactTindaGameplayTags(const FGameplayTagContainer& NewTagContainer) const override PURE_VIRTUAL(HasAllMatchingExactTindaGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    void GetTindaOwnedGameplayTags(FGameplayTagContainer& _TagContainer) const override PURE_VIRTUAL(GetTindaOwnedGameplayTags,);
    
    UFUNCTION(BlueprintCallable)
    TArray<FGameplayTag> FindGameplayTagsMatching(FGameplayTag _TagToCheck) const override PURE_VIRTUAL(FindGameplayTagsMatching, return TArray<FGameplayTag>(););
    
    UFUNCTION(BlueprintCallable)
    FGameplayTag FindGameplayTagMatching(FGameplayTag _TagToCheck) const override PURE_VIRTUAL(FindGameplayTagMatching, return FGameplayTag{};);
    
    UFUNCTION(BlueprintCallable)
    FGameplayTagContainer ClearAllTagsWithoutEffect() override PURE_VIRTUAL(ClearAllTagsWithoutEffect, return FGameplayTagContainer{};);
    
    UFUNCTION(BlueprintCallable)
    bool AddLeafGameplayTag(FGameplayTag TagToAdd) override PURE_VIRTUAL(AddLeafGameplayTag, return false;);
    
    UFUNCTION(BlueprintCallable)
    void AddGameplayTagFast(FGameplayTag TagToAdd) override PURE_VIRTUAL(AddGameplayTagFast,);
    
    UFUNCTION(BlueprintCallable)
    void AddGameplayTag(FGameplayTag TagToAdd) override PURE_VIRTUAL(AddGameplayTag,);
    
    UFUNCTION(BlueprintCallable)
    void SetHovered(bool bIsHovered) override PURE_VIRTUAL(SetHovered,);
    
    UFUNCTION(BlueprintCallable)
    void OpenInteraction() override PURE_VIRTUAL(OpenInteraction,);
    
    UFUNCTION()
    bool SavedActorInterface_IsInitialized() override PURE_VIRTUAL(SavedActorInterface_IsInitialized, return false;);
    
    UFUNCTION()
    void SavedActorInterface_BindOnInitialized() override PURE_VIRTUAL(SavedActorInterface_BindOnInitialized,);
    
    UFUNCTION(BlueprintCallable)
    void UnbindFromEventOnActor(FEvent_EventOnActor _CallBack) override PURE_VIRTUAL(UnbindFromEventOnActor,);
    
    UFUNCTION(BlueprintCallable)
    void CallEventOnActor(const FFeedback_EventOnActor& _Message) override PURE_VIRTUAL(CallEventOnActor,);
    
    UFUNCTION(BlueprintCallable)
    void BindToEventOnActor(FEvent_EventOnActor _CallBack) override PURE_VIRTUAL(BindToEventOnActor,);
    
};


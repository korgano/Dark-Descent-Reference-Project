#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Pawn.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "TagChangedDynamicDelegateDelegate.h"
#include "Tinda_GameplayTagAssetInterface.h"
#include "ActorWithCharacterIDInterface.h"
#include "CharacterIDName.h"
#include "DamageResultStruct.h"
#include "DataMove.h"
#include "EnumAiEnemyMarineState.h"
#include "EnumDestroyReason.h"
#include "EnumSquadType.h"
#include "Event_SquadDelegate.h"
#include "Event_Squad_ActorDelegate.h"
#include "Event_Squad_BoolDelegate.h"
#include "Event_Squad_CharacterDelegate.h"
#include "Event_Squad_CursorHit_boolDelegate.h"
#include "Event_Squad_DirectiveDelegate.h"
#include "Event_Squad_HumanoidMarineDelegate.h"
#include "Event_Squad_MovementCompletedDelegate.h"
#include "Event_Squad_SentrySaved_boolDelegate.h"
#include "Event_Squad_SkillDelegate.h"
#include "Selectable.h"
#include "SentrySaved.h"
#include "SpawnedHumanCustomLoot.h"
#include "StructCursorHit.h"
#include "Templates/SubclassOf.h"
#include "Squad.generated.h"

class AAIController_Squad;
class AAIGuardPath;
class AASFCharacter;
class AActor;
class AController;
class AGuardRoom;
class AHumanoid;
class AHumanoidMarine;
class AHumanoidTactical;
class ASquad;
class ASquadSpawner;
class UAIAction;
class UAIActionComponent;
class UAction;
class UActionSquadPrioritySystem;
class UAction_MoveToFormation;
class UDataTable;
class UDiplomacyComponent;
class UDirective;
class UDirective_Stance;
class UInventoryComponent;
class ULightFocus_DataAsset;
class UMarineClassDataAssets;
class UMotionTrackerComponent;
class UNavigationQueryFilter;
class UObject;
class URoomGraph_Cover;
class USkill;
class USquadClassDataAsset;
class USquadPrioritySystem_DataAsset;
class UTinda_Attribute;
class UTinda_Effect;
class UTinda_EffectHandlerComponent;
class UWeaponPrimaryDataAsset;

UCLASS(Blueprintable)
class ASF_API ASquad : public APawn, public IActorWithCharacterIDInterface, public ISelectable, public ITinda_GameplayTagAssetInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 SquadID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FGameplayTag Faction;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASquadSpawner* AssociatedSpawner;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Squad_Bool OnInitialized;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Squad_Directive OnSquadDirectiveExecuted;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Squad OverwatchAsked;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAIController_Squad* SquadController;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Squad OnSquadStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Squad OnSquadWaitingState;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDiplomacyComponent* DiplomacyComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> ChainOfCommand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AHumanoidMarine*> SquadMembers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AHumanoidMarine*> SquadMembersEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AHumanoidMarine*> SquadMembersDisable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AHumanoidMarine*> SquadMembersDead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AHumanoidMarine*> SquadMembersInAPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<int32> MarinePostionInSquad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHumanoidMarine* SquadLeader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UTinda_Effect> LeaderEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FSentrySaved> SentrySaved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Squad_SentrySaved_bool Event_Squad_SentrySaved_Changed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWeaponPrimaryDataAsset* WeaponSentry_DataAsset;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllMarineHaveBeenInitialized;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Squad OnAllMembersInitialized;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Squad OnAllMembersInitializedOnLoad;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Squad_HumanoidMarine OnChangeSquadLeader;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Squad_HumanoidMarine OnSquadLeaderDemote;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Squad_HumanoidMarine OnSquadMemberAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Squad_HumanoidMarine OnSquadMemberRemoved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Squad_HumanoidMarine OnSquadMemberDisable;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Squad_HumanoidMarine OnSquadMemberEnable;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Squad_HumanoidMarine OnSquadMemberDeadAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Squad_HumanoidMarine OnSquadMemberDeadRemoved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Squad OnEmptySquad;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Squad_Character OnSquadMemberSwapPosition;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Squad OnSquadStatusUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<USkill>> LockedSkills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<USkill>> HiddenSkills;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MemberFightingStateRemanence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayerSquad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PendingMemberInitCount;
    
    // UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    // Missed Property: UnconsciousDelegates
    // FunctionSignature is nullptr, cannot deduce function for 'DelegateProperty UnconsciousDelegates./Script/ASF.Squad:UnconsciousDelegates'

    
    // UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    // Missed Property: FiringDelegates
    // FunctionSignature is nullptr, cannot deduce function for 'DelegateProperty FiringDelegates./Script/ASF.Squad:FiringDelegates'

    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AHumanoidMarine*, FTimerHandle> FiringRemanenceHandles;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AASFCharacter*> Allies;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Squad_Character OnAllyAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Squad_Character OnAllyRemoved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 NbAllies;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USkill*> Skills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SkillClassesDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> GeneralSkills;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Squad_Skill OnSkillAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Squad OnSkillRemoved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer SkillsToAddToNewMembers;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> DynamicSkills;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDirective*> SquadDirectives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SquadDirectivesClassesDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDirective_Stance* lastStanceUsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDirective_Stance* DefaultStance;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDirective_Stance> DefaultStanceClass;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Squad OnLastStanceUsedChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULightFocus_DataAsset* LightFocus_DataAsset;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* PriorityTarget;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Squad_Actor OnPriorityTargetChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UTinda_Effect> PriorityTargetEffect_Class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UTinda_Effect> FocusPriorityTargetEffect_Class;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UActionSquadPrioritySystem* ActionSquadPrioritySystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USquadPrioritySystem_DataAsset* SquadPrioritySystemDataAsset;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAction_MoveToFormation> MoveToFormationActionClass;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Squad_CursorHit_bool MoveAsked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AActor*, FVector> MarinesDestination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NavMeshInfluenceSphereRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTinda_EffectHandlerComponent* EffectHandlerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TagContainer;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Squad_Bool EnemyPerceptied;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PerceptionLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> PerceptiedEnemies;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SearchCoverRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ThreatLocation;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableCover;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    AGuardRoom* RoomGuarded;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USquadClassDataAsset* SquadClassDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMarineClassDataAssets*> SquadTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EnumSquadType DefaultBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    AAIGuardPath* PatrolPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<FCharacterIDName, FSpawnedHumanCustomLoot> MembersCustomLoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, SaveGame, meta=(AllowPrivateAccess=true))
    FCharacterIDName CharacterIDName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FCharacterIDName> MembersCharacterIDName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTinda_Attribute* CommandPointRefillDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTinda_Attribute* CommandPointRefillDurationCoef;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTinda_Attribute* CommandPointMax;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Squad_Actor OnFireBlazeEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Destination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NbMarineMovementCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MovementCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MovementOngoing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumAiEnemyMarineState SquadIntentionState;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Squad_MovementCompleted Squad_MovementCompleted;
    
    ASquad(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateSquadLeader();
    
    UFUNCTION(BlueprintCallable)
    void UpdatePerceptiedEnemies(const TArray<AActor*>& _PerceptiedEnemies);
    
    UFUNCTION(BlueprintCallable)
    void UnlistenToMembersTag(FGameplayTag TagToListen, FTagChangedDynamicDelegate Delegate);
    
    UFUNCTION(BlueprintCallable)
    void SwitchCover(bool _Enable);
    
    UFUNCTION(BlueprintCallable)
    bool StopAction(FGameplayTag ActionTag);
    
    UFUNCTION(BlueprintCallable)
    UAIAction* StartAction(FGameplayTag ActionTag, FDataMove _DataMove, AActor* Target, bool AutoExecute, bool InterruptCurrentAction, bool _bPlayerCommand);
    
    UFUNCTION(BlueprintCallable)
    void Start();
    
    UFUNCTION(BlueprintCallable)
    void SquadStatusUpdated(ASquad* _Squad, AHumanoidMarine* _Character);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<UAction*> SquadMoveEQS(FDataMove _DataMove);
    
    UFUNCTION(BlueprintCallable)
    void SetThreatLocation(FVector _ThreatLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetSquadID(int32 _SquadID);
    
    UFUNCTION(BlueprintCallable)
    void SetSquadDestination(EnumAiEnemyMarineState _MarineState, FVector _Destination);
    
    UFUNCTION(BlueprintCallable)
    void SetSquadController(AAIController_Squad* _Controller);
    
    UFUNCTION(BlueprintCallable)
    void SetSearchCoverRadius(float _SearchCoverRadius);
    
    UFUNCTION(BlueprintCallable)
    void SetRoomGuarded(AGuardRoom* _RoomGuarded);
    
    UFUNCTION(BlueprintCallable)
    void SetPriorityTarget(AActor* _Target);
    
    UFUNCTION(BlueprintCallable)
    void SetPerceptionLocation(FVector _PerceptionLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetLeader(AHumanoidMarine* NewLeader);
    
    UFUNCTION(BlueprintCallable)
    void SetLastStanceUsed(UDirective_Stance* stance);
    
    UFUNCTION(BlueprintCallable)
    void SetIsInit(bool newIsInit);
    
    UFUNCTION(BlueprintCallable)
    void SecureSquadMemberInAPC(AHumanoidMarine* Member);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SaveSentry(FSentrySaved _Sentry);
    
public:
    UFUNCTION(BlueprintCallable)
    void RemoveSquadMember(AHumanoidMarine* Member);
    
    UFUNCTION(BlueprintCallable)
    void RemoveDynamicSkill(FGameplayTag Skill);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAlly(AASFCharacter* _Ally);
    
    UFUNCTION(BlueprintCallable)
    FVector RecenterPoint(FVector _LocationStart, FVector _LocationEnd);
    
protected:
    UFUNCTION(BlueprintCallable)
    FSentrySaved PopBestSentry();
    
    UFUNCTION(BlueprintCallable)
    void OnScriptedActionStop(UAIActionComponent* _AIActionComponent);
    
    UFUNCTION(BlueprintCallable)
    void OnScriptedActionStart(UAIActionComponent* _AIActionComponent, bool _ForceActionAbort, bool _ForceAnimationAbort);
    
    UFUNCTION(BlueprintCallable)
    void OnPriorityTargetVisibilityChange(AActor* _Target, bool _Visible);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnPriorityTargetDeathOrDestroyed(AASFCharacter* TargetKilled);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnNewEffectActivated(UTinda_EffectHandlerComponent* _EffectHandler, UTinda_Effect* _Effect);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnMemberUnconsciousChanged(UTinda_EffectHandlerComponent* _EffectHandler, FGameplayTag _Effect, bool _bAdded);
    
    UFUNCTION(BlueprintCallable)
    void OnMemberInitializedOnLoad(AHumanoid* Member);
    
    UFUNCTION(BlueprintCallable)
    void OnMemberInitialized(AHumanoid* Member);
    
    UFUNCTION(BlueprintCallable)
    void OnMemberFiringChanged(UTinda_EffectHandlerComponent* _EffectHandler, FGameplayTag _Effect, bool _bAdded);
    
    UFUNCTION(BlueprintCallable)
    void OnMemberDestroyed(AActor* Member);
    
    UFUNCTION(BlueprintCallable)
    void OnMemberDeath(AASFCharacter* Member, const FDamageResultStruct& _DamageResult);
    
    UFUNCTION(BlueprintCallable)
    void OnAllyDestroyed(AActor* _ActorKilled, EnumDestroyReason _DestroyReason);
    
    UFUNCTION(BlueprintCallable)
    void MemberNotifyMovementCompleted(EnumAiEnemyMarineState _MarineState);
    
    UFUNCTION(BlueprintCallable)
    void ListenToMembersTag(FGameplayTag TagToListen, FTagChangedDynamicDelegate Delegate, bool _bExact);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStarted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSquadWeakened() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerSquad();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMemberFighting(AHumanoidMarine* _Member) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCoverEnable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsClosestMember(AHumanoidTactical* Marine, FVector Position, float MaximumRotation) const;
    
    UFUNCTION(BlueprintCallable)
    bool IsAMember(AActor* _Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasWaitingState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasMoveOngoing(EnumAiEnemyMarineState _MarineState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasEnemyInSight() const;
    
    UFUNCTION(BlueprintCallable)
    void GiveMoveTo(FStructCursorHit _CursorHit, bool _bIsShift);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetThreatLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EnumSquadType GetSquadType();
    
    UFUNCTION(BlueprintCallable)
    USquadPrioritySystem_DataAsset* GetSquadPrioritySystemDataAsset();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AHumanoidMarine*> GetSquadMembersInAPC() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AHumanoidMarine*> GetSquadMembersEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AHumanoidMarine*> GetSquadMembersDisable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AHumanoidMarine*> GetSquadMembersDead() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AHumanoidTactical*> GetSquadMembersAsHumanoid() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AHumanoidTactical*> GetSquadMembersAndAlliesInFormation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AHumanoidTactical*> GetSquadMembersAndAllies() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AHumanoidMarine*> GetSquadMembers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHumanoidMarine* GetSquadMemberByID(int32 _Id) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSquadID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UDirective*> GetSquadDirectives() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDirective* GetSquadDirectiveByClass(TSubclassOf<UDirective> _DirectiveClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AAIController_Squad* GetSquadController();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetSquadCenter_IsolatedMemberExcluded();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ASquad* GetSquad(AActor* Target);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkill* GetSkillWithTag(FGameplayTag SkillTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkill* GetSkillWithShortcut(FName _ShortcutName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<USkill*> GetSkills() const;
    
    UFUNCTION(BlueprintCallable)
    AGuardRoom* GetRoomGuarded();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHumanoidMarine* GetRandomMember(const FGameplayTagQuery& _QueryToRespect) const;
    
    UFUNCTION(BlueprintCallable)
    AActor* GetPriorityTarget();
    
    UFUNCTION(BlueprintCallable)
    float GetPointSpaceWeight(FVector _Location, AController* _Controller, float _RayLength, int32 _NbRay);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetPerceptionLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetPerceptiedEnemies() const;
    
    UFUNCTION(BlueprintCallable)
    UAction* GetOngoingAction(AActor*& Member);
    
    UFUNCTION(BlueprintCallable)
    FVector GetNavPosition(const TArray<FVector>& EQSResult, FVector Origine, FVector CorrectDirection);
    
    UFUNCTION(BlueprintCallable)
    FVector GetMemberFormationInSquad(FVector _FormationCenter, float _MaxDistFromLeader, float _MinDistFromLeader, float _AngleVariance, APawn* _Member);
    
    UFUNCTION(BlueprintCallable)
    int32 GetMarinePositionInSquad(AHumanoidMarine* Marine);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMotionTrackerComponent* GetLeaderTrackerComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHumanoidMarine* GetLeader() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsInit();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UInventoryComponent* GetInventory();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHumanoidID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHumanoidMarine* GetFocusActivityMarine() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FVector> GetEmptySpaces(FVector _Location, AController* _Controller, float _RayLength, int32 _NbRay);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDiplomacyComponent* GetDiplomacyComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetDestination() const;
    
    UFUNCTION(BlueprintCallable)
    static URoomGraph_Cover* GetCoversFromLocation(UObject* _Querier, FVector _Location, float _RoomGraphCoverSearchRadius, TSubclassOf<UNavigationQueryFilter> _FilterClass, float _ProtectionAngle, float _SegmentMaxDistance, TArray<FVector>& _CoversResult, FVector& _ThreatDir);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTinda_Attribute* GetCommandPointMaxAttribute();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCommandPointMax(bool bRounded);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHumanoidMarine* GetClosestMemberFrom(AHumanoidMarine* _Member, const FGameplayTagQuery& _QueryToRespect) const;
    
    UFUNCTION(BlueprintCallable)
    FVector GetAverageMembersLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AHumanoidMarine*> GetAllMarinesSorted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AASFCharacter*> GetAlliesUnconscious() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AASFCharacter*> GetAllies(bool _bIncludingMembers, bool _IncludingDead) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UActionSquadPrioritySystem* GetActionSquadPrioritySystem();
    
    UFUNCTION(BlueprintCallable)
    void EnableSquadMember(AHumanoidMarine* Member);
    
    UFUNCTION(BlueprintCallable)
    void DisableSquadMember(AHumanoidMarine* Member);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DestroySquad();
    
    UFUNCTION(BlueprintCallable)
    void CreateSkillsForMember(AHumanoidMarine* Member);
    
    UFUNCTION(BlueprintCallable)
    void CreateActionSquadPrioritySystem();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float ComputeWeightForDirection(AHumanoidMarine* Marine, FVector Direction, FVector SquadCenter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void CheckAllMarineSameHoldFiringState(bool& sameHoldFiringState, bool& holdFiringState) const;
    
    UFUNCTION(BlueprintCallable)
    void AskMoveTo(FStructCursorHit _CursorHit, bool _bIsShift);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AnyMemberHasEffectOfClass(const TSubclassOf<UTinda_Effect> _Class, bool _ConsiderOnlyActivated) const;
    
    UFUNCTION(BlueprintCallable)
    void AddSquadMember(AHumanoidMarine* Member, bool _bIsLoaded);
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddSquadDirective(const TSoftClassPtr<UDirective>& NewDirective);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddDynamicSkill(FGameplayTag NewSkill);
    
    UFUNCTION(BlueprintCallable)
    void AddAlly(AASFCharacter* _Ally);
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    void SetSelected(bool _bIsSelected) override PURE_VIRTUAL(SetSelected,);
    
    UFUNCTION(BlueprintCallable)
    bool Interact(FStructCursorHit _StructCursorHit, bool _bShift) override PURE_VIRTUAL(Interact, return false;);
    
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
    
};


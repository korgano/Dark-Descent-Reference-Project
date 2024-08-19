#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "EGender.h"
#include "EnumAlienAttackSide.h"
#include "EnumAlienAttackType.h"
#include "EnumAlienDeathType.h"
#include "EnumAlienLocomotionType.h"
#include "EnumCharacterAnimStance.h"
#include "EnumCharacterDraggingState.h"
#include "EnumDismemberedState.h"
#include "Event_ActionStateDelegate.h"
#include "Event_AlienLaunchAttackDelegate.h"
#include "Event_AnimComp_ActivityDelegate.h"
#include "Event_AnimComp_AttackChoreographyDelegate.h"
#include "Event_AnimComp_BoolDelegate.h"
#include "Event_AnimComp_Bool_bool_FloatDelegate.h"
#include "Event_AnimComp_ChangeDraggingStateDelegate.h"
#include "Event_AnimComp_Character_NameDelegate.h"
#include "Event_AnimComp_FloatDelegate.h"
#include "Event_AnimComp_PlayDeathDelegate.h"
#include "Event_AnimComp_TagDelegate.h"
#include "Event_AnimHitNotifyDelegate.h"
#include "Event_AnimNotifyDelegate.h"
#include "Event_DamageTakenDelegate.h"
#include "Event_DismemberStateChangeDelegate.h"
#include "Event_On_Blending_ReadyDelegate.h"
#include "Event_RotateInMoveDelegate.h"
#include "Event_RotateInPlaceDelegate.h"
#include "IsBlendingReadyDelegate.h"
#include "LocomotionAnimation.h"
#include "Templates/SubclassOf.h"
#include "AnimationComponent.generated.h"

class AASFCharacter;
class AActor;
class AInGameCamera;
class APawn;
class UASFCharacterMovementComponent;
class UActivity;
class UAnimMontage;
class UAnimSequence;
class UAnimSequenceBase;
class UBlendSpaceBase;
class UCycleAnimation;
class UMarineClassDataAssets;
class UPhysicalReactionComponent;
class USkeletalMesh;
class USkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UAnimationComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumCharacterAnimStance AnimStance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsLeftHanded;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_RotateInPlace OnRotateInPlace;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_RotateInMove OnRotateInMove;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AnimComp_Bool_bool_Float OnMoveStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ActivateRootMotionRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ActivateRotateInPlace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsRotating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EnumAlienLocomotionType, FLocomotionAnimation> LocomotionAnimations;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_DismemberStateChange OnDismemberStateChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumDismemberedState DismemberState;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AlienLaunchAttack OnLaunchAttack;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_ActionState OnActionStateStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_ActionState OnActionStateStop;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AnimNotify OnCancelAttackAnim;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AnimHitNotify OnAnimHitNotify;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AnimNotify OnAttackAnimEnded;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AnimComp_Float OnAnimDashReady;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_DamageTaken OnDamageTaken;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AnimComp_Bool OnBulletDamagesActivation;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AnimComp_Bool OnConstraintProjectionChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APawn* DefaultGamePawn;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AnimComp_Tag OnAnimationDrivenMoveStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AnimNotify OnAnimationDrivenMoveEnd;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBlendingAnimationReady;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIsBlendingReady Delegate_IsBlendingAnimationReady;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_On_Blending_Ready OnBlendingAnimationIsReady_StateManager;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAnimIsTicking;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AnimComp_ChangeDraggingState OnDraggingStateChange;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AnimNotify OnDraggingIsFinish;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AnimComp_Character_Name OnAttachGrabedToGraber;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AnimNotify OnDetachFromGraber;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AnimComp_AttackChoreography OnStartAttackChoreography;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AnimNotify OnAttackChoreographyIsFinish;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AnimComp_PlayDeath OnPlayDeathAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AnimationDrivenSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AInGameCamera> DegugCameraClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AInGameCamera* DebugCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugFastStartDestination;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AnimComp_Activity OnActivityStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AnimComp_Activity OnActivityEnd;
    
    UAnimationComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TakeDamage(AActor* DamageGiver, FGameplayTag BodyPartHit, EnumAlienAttackSide AttackSide);
    
    UFUNCTION(BlueprintCallable)
    void StartAnimationDrivenMove(FGameplayTag MoveTag);
    
    UFUNCTION(BlueprintCallable)
    void StartActivityAnimation(UActivity* _Activity);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibilityBasedAnimTickOption(bool IsTicking);
    
    UFUNCTION(BlueprintCallable)
    void SetDraggingState(EnumCharacterDraggingState DraggingState, AASFCharacter* OtherCharacter, bool _NoAnimation);
    
    UFUNCTION(BlueprintCallable)
    static UCycleAnimation* SetCycleAnims(UAnimSequence* StartAnim, UAnimSequence* LoopAnim, UAnimSequence* StopAnim, float StartAtStopAnim);
    
    UFUNCTION(BlueprintCallable)
    void SetBlendingAnimationReady(bool bIsReady);
    
    UFUNCTION(BlueprintCallable)
    void SetAttackChoreography(EnumAlienAttackType AttackType, AASFCharacter* OtherCharacter, FVector Destination);
    
    UFUNCTION(BlueprintCallable)
    void SetAnimStance(EnumCharacterAnimStance NewAnimStance);
    
    UFUNCTION(BlueprintCallable)
    void SendEndActivity(UActivity* _Activity, bool _bIsPause);
    
    UFUNCTION(BlueprintCallable)
    void RotateInPlaceFinished();
    
    UFUNCTION(BlueprintCallable)
    void RotateInPlace(UASFCharacterMovementComponent* MovementComponent, bool _bRootMotion, float _Angle);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveBodypartMeshFromMainMesh(USkeletalMeshComponent* MainMesh, USkeletalMeshComponent* BodypartMesh);
    
    UFUNCTION(BlueprintCallable)
    static int32 RemoveAllMeshParts(USkeletalMeshComponent* MainMesh);
    
    UFUNCTION(BlueprintCallable)
    void PossessDebugCamera(bool IsDebug);
    
    UFUNCTION(BlueprintCallable)
    void PlayDeathAnimation(EnumAlienDeathType DeathType);
    
    UFUNCTION(BlueprintCallable)
    void OnDismemberMesh(UPhysicalReactionComponent* PhysicalReactionComp, FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    void OnActionState_Stop(FGameplayTag ActionStateTag);
    
    UFUNCTION(BlueprintCallable)
    void OnActionState_Start(FGameplayTag ActionStateTag);
    
    UFUNCTION(BlueprintCallable)
    void MoveStart(UASFCharacterMovementComponent* MovementComponent, bool _bRunning, bool _bWasRunning, float _Angle);
    
    UFUNCTION(BlueprintCallable)
    void LaunchAttack(AActor* ThingAttacked, FGameplayTag AttackTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBlendingAnimationReady() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetTimeUntilNextNotify(USkeletalMeshComponent* Mesh, FName Notify);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetTimeBetweenNotify(UAnimSequenceBase* Anim, FName Notify1, FName Notify2);
    
    UFUNCTION(BlueprintCallable)
    FName GetSocketWeaponEquiped(FName NameSocketWeaponEquiped) const;
    
    UFUNCTION(BlueprintCallable)
    UPhysicalReactionComponent* GetPhysicalReactionComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetMontageTimeBlendIn(UAnimMontage* AnimMontage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetCurveValueAtTime(UAnimSequenceBase* Anim, FName CurveName, float Time);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetBlendSpace1DTime(UBlendSpaceBase* BS, float AxisValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAnimIsTicking() const;
    
    UFUNCTION(BlueprintCallable)
    float GetAnimationDrivenMoveDuration();
    
    UFUNCTION(BlueprintCallable)
    FVector GetAnimationDrivenMoveDestination();
    
    UFUNCTION(BlueprintCallable)
    FVector GetAnimationDrivenMoveCurrentLocation();
    
    UFUNCTION(BlueprintCallable)
    void EndAnimationDrivenMove();
    
    UFUNCTION(BlueprintCallable)
    void EndActivityAnimation(UActivity* _Activity);
    
    UFUNCTION(BlueprintCallable)
    void DetachFromGraber();
    
    UFUNCTION(BlueprintCallable)
    void ChangeDismemberState(EnumDismemberedState NewDismemberState);
    
    UFUNCTION(BlueprintCallable)
    void ChangeConstraintProjectionState(bool Activate);
    
    UFUNCTION(BlueprintCallable)
    bool CanRotate();
    
    UFUNCTION(BlueprintCallable)
    void CancelRotateInPlace();
    
    UFUNCTION(BlueprintCallable)
    void CancelAttackAnim();
    
    UFUNCTION(BlueprintCallable)
    void BulletDamagesActivation(bool Activate);
    
    UFUNCTION(BlueprintCallable)
    static void BuildMeshFromPDA(USkeletalMeshComponent* MainMesh, UMarineClassDataAssets* DataAsset, EGender Gender);
    
    UFUNCTION(BlueprintCallable)
    void AttachGrabedToGraber(AASFCharacter* Graber, const FName& BoneName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AnimIsTicking() const;
    
    UFUNCTION(BlueprintCallable)
    static USkeletalMeshComponent* AddBodypartMeshToMainMesh(USkeletalMeshComponent* MainMesh, USkeletalMesh* NewBodyPart);
    
};


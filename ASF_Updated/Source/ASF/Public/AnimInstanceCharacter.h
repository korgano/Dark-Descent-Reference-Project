#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "DamageResultStruct.h"
#include "EnumAlienAttackSide.h"
#include "EnumCharacterDraggingState.h"
#include "Event_AnimNotifyDelegate.h"
#include "RotateInPlace.h"
#include "TindAnimInstance.h"
#include "AnimInstanceCharacter.generated.h"

class AASFCharacter;
class AActor;
class UAnimMontage;
class UAnimSequenceBase;
class UAnimationComponent;
class UPhysicalReactionComponent;
class USceneComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable, NonTransient)
class ASF_API UAnimInstanceCharacter : public UTindAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MeshOffset;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool IsSequencer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float FadeInSequencerTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float FadeOutSequencerTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeOutSequencerTimeDelayed2Frames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FVector SequencerLightRotation;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* RotateInPlaceMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SlotRotateName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle TimerRotateHandle;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AnimNotify OnRootmotionMoveIsFinish;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AnimNotify OnStopAnimIsFinish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMoving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRunning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float fSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float fRunSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float fMoveDirectionAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float fPlayRateLocomotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInStopAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStopRun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayStopAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCancelStopAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRightFootFront;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PelvisBoneForRootmotionCurve;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float fTimerLastIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* CurrentIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle TimerIdleHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInRagdoll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInProjectionRagdoll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EnumCharacterDraggingState DraggingState;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAbducting;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AASFCharacter* GraberCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GraberCharacterBoneAttachedName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform GrabLocalTransformTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform GrabLocalTransformInitial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float fGrabMoveTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float fCurrentGrabMoveTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAttachedToGraber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float fDropAnimScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* AnimGrabDrop;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTakeDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* AnimTakeDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle TimerTakeDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendWeight;
    
    UAnimInstanceCharacter();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UnblockMovement();
    
    UFUNCTION(BlueprintCallable)
    void ToggleRagdoll(bool IsRagdoll, bool IsInProjectionRagdoll);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TickRootmotionMove(float FrameDeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void TickRagdoll(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void TickLocomotion(float fDeltaTime);
    
protected:
    UFUNCTION(BlueprintCallable)
    void TickIdles(float DeltaSeconds);
    
public:
    UFUNCTION(BlueprintCallable)
    void TickGraber(float fDeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void TickClothingSimulation(float fDeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void StopTakeDamageAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StopMove(bool WasRuning);
    
    UFUNCTION(BlueprintCallable)
    void StopAnimFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartRootmotionMove(float TotalDuration);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StandUpFromRagdoll(bool PlayAnimation, bool FromFront);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetDraggingState(EnumCharacterDraggingState NewDraggingState, AASFCharacter* OtherCharacter, bool _NoAnimation);
    
    UFUNCTION(BlueprintCallable)
    void SetClothingSimulationWeight(float Weight);
    
    UFUNCTION(BlueprintCallable)
    void SetClothingSimulation(bool EnableClothSimulation);
    
    UFUNCTION(BlueprintCallable)
    void SetBodyLocation(FName BoneName, FVector Location);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetAnimationReady();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetAnimationNotReady(const FString& BlockFrom);
    
    UFUNCTION(BlueprintCallable)
    void RotateInPlaceStart();
    
    UFUNCTION(BlueprintCallable)
    void RotateInPlaceEnd();
    
protected:
    UFUNCTION(BlueprintCallable)
    void PlayIdle();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRotateInPlace(FRotateInPlace Param);
    
    UFUNCTION(BlueprintCallable)
    void OnMoveStart(bool IsRunningMove, bool WasRuning, float Angle);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDeath(AASFCharacter* ActorKilled, const FDamageResultStruct& DamageResult);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDamageTaken(AActor* Actor, FGameplayTag BodyPartHit, EnumAlienAttackSide AttackSide);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void MontageStopped(UAnimMontage* Montage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool MontageIsPlayingNow() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRightFootInFront() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsMoving() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDead() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FVector GetWeldingLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetTimeBeforeHittingTheGround();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    float GetSpeedAnimScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UAnimSequenceBase* GetRotateInplaceAnim(float fAngle);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FVector GetRealForward() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPhysicalReactionComponent* GetPhysicalReactionComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FName GetPelvisBoneName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FVector GetLocationToAimAtMe() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EnumAlienAttackSide GetImpactSide();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetImpactDirection();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UAnimSequenceBase* GetIdleAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FVector GetHeadLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FName GetHandItemBoneName() const;
    
    UFUNCTION(BlueprintCallable)
    float GetDropAnimScale(float TimeBeforeHittingTheGround);
    
    UFUNCTION(BlueprintCallable)
    FVector GetCharaVelocity();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USceneComponent* GetCharacterSceneComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UAnimSequenceBase* GetAnimTakeDamage(EnumAlienAttackSide AttackSide);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimationComponent* GetAnimComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetAnimationDrivenMoveDuration();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetAnimationDrivenMoveDestination();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetAnimationDrivenMoveCurrentLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetActorRelativeLocation(AActor* Actor) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void FinishIdle();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EndRootmotionMove();
    
    UFUNCTION(BlueprintCallable)
    void DetachFromGraber();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CutCurrentIdle();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanPlayTakeDamageAnim();
    
    UFUNCTION(BlueprintCallable)
    bool CanPlayStopAnim() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CanDoAnIdle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CancelRotateInPlace();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BlockMovement();
    
    UFUNCTION(BlueprintCallable)
    void AttachGrabedToGraber(AASFCharacter* Graber, const FName& BoneName);
    
};


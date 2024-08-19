#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AnimationComponent.h"
#include "EnumAlienAnimPhase.h"
#include "EnumAlienClass.h"
#include "EnumAlienLocomotionOwner.h"
#include "EnumAlienLocomotionType.h"
#include "EnumDodgingType.h"
#include "EnumJumpAnimPhase.h"
#include "EnumStopType.h"
#include "Event_AlienBreach_EndDelegate.h"
#include "Event_AlienBreach_StartDelegate.h"
#include "Event_AnimComp_AnimPhaseDelegate.h"
#include "Event_AnimComp_BoolDelegate.h"
#include "Event_AnimComp_DodgeDelegate.h"
#include "Event_AnimComp_EnumAlienLocomotionOwnerDelegate.h"
#include "Event_AnimComp_FloatDelegate.h"
#include "Event_AnimNotifyDelegate.h"
#include "Event_AnimNotify_AnimComponentDelegate.h"
#include "Event_JumpDelegate.h"
#include "Event_StopTypeDelegate.h"
#include "Event_UpdateLocomotionSpeedDelegate.h"
#include "Event_UpdateLocomotionTypeDelegate.h"
#include "AnimationComponentAlien.generated.h"

class AAlien;
class ADoor;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UAnimationComponentAlien : public UAnimationComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumAlienClass AlienClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumAlienAnimPhase AnimPhase;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AnimComp_AnimPhase OnChangeAnimPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumJumpAnimPhase JumpAnimPhase;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AnimNotify OnSpotAnimEnded;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AnimNotify OnStateTransitionEnded;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AnimNotify OnSpawningAnimStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AnimNotify OnSpawningAnimEnded;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAlien* Alien;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SavedSpeed;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SpawnWithAnimation;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AnimComp_EnumAlienLocomotionOwner OnLocomotionOwnerChange;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AnimNotify OnAlienTouchTheGround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInTheAir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumAlienLocomotionType CurrentLocomotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumAlienLocomotionType NextLocomotion;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_UpdateLocomotionType OnUpdateLocomotionType;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_StopType OnLocomotionStop;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_UpdateLocomotionSpeed OnLocomotionSpeedUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Jump OnStartJumping;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AnimNotify_AnimComponent OnJumpMoveStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AnimNotify_AnimComponent OnJumpMoveStop;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AnimComp_Dodge OnDodgeStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AnimNotify OnFacehuggerIsAttachedOnHead;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AlienBreach_Start OnAlienBreach_Start;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AlienBreach_End OnAlienBreach_End;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AnimComp_Bool OnChangeCrouchState;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AnimComp_Float OnStartScream;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AnimComp_Float OnStartHiss;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AnimComp_Bool OnFinishGrab;
    
    UAnimationComponentAlien(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateLocomotionType(EnumAlienLocomotionType AlienLocomotionType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TransitionNeedAnimation(EnumAlienAnimPhase AnimPhaseFrom, EnumAlienAnimPhase AnimPhaseTo) const;
    
    UFUNCTION(BlueprintCallable)
    void StopLocomotion(float StopDuration, EnumStopType _StopType);
    
    UFUNCTION(BlueprintCallable)
    void StopCrouching();
    
    UFUNCTION(BlueprintCallable)
    void StartScream(float Duration);
    
    UFUNCTION(BlueprintCallable)
    void StartJumping(EnumJumpAnimPhase JumpType, float TimeJump);
    
    UFUNCTION(BlueprintCallable)
    void StartHiss(float Duration);
    
    UFUNCTION(BlueprintCallable)
    void StartDodging(EnumDodgingType DodgeType, FVector Destination, float TimeDodge, float IdleAfterDodge);
    
    UFUNCTION(BlueprintCallable)
    void StartCrouching();
    
    UFUNCTION(BlueprintCallable)
    void StartBreaching(ADoor* _AttackedDoor);
    
    UFUNCTION(BlueprintCallable)
    EnumAlienLocomotionType ShouldChangeLocomotion(FVector Destination, float Speed);
    
    UFUNCTION(BlueprintCallable)
    void SetLocomotionOwner(EnumAlienLocomotionOwner OwnerType, UObject* Owner);
    
    UFUNCTION(BlueprintCallable)
    void SetIsInTheAir(bool IsInTheAir);
    
    UFUNCTION(BlueprintCallable)
    void SetAnimPhase(EnumAlienAnimPhase NewAnimPhase);
    
    UFUNCTION(BlueprintCallable)
    void SetAlienClass(EnumAlienClass NewAlienClass);
    
    UFUNCTION(BlueprintCallable)
    void RotateInMove(float TurnAngle, float TurnDelay);
    
    UFUNCTION(BlueprintCallable)
    bool NeedSpawnAnim() const;
    
    UFUNCTION(BlueprintCallable)
    void FinishGrab(bool Kill);
    
    UFUNCTION(BlueprintCallable)
    void EndBreaching(bool _bSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanJump() const;
    
};


#pragma once
#include "CoreMinimal.h"
#include "AITypes.h"
#include "AITypes.h"
#include "Navigation/PathFollowingComponent.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Engine/EngineTypes.h"
#include "Event_UASFCharacterMovementComponentDelegate.h"
#include "Event_UASFCharacterMovementComponent_Bool_FloatDelegate.h"
#include "Event_UASFCharacterMovementComponent_ResultDelegate.h"
#include "Templates/SubclassOf.h"
#include "ASFCharacterMovementComponent.generated.h"

class AAIController;
class AASFCharacterAIController;
class AActor;
class UASFCharacterMovementComponent;
class UASF_AISplineMovementComponent;
class UCurveFloat;
class UNavigationPath;
class UNavigationQueryFilter;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UASFCharacterMovementComponent : public UCharacterMovementComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bWantASFPriorityRotation: 1;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_UASFCharacterMovementComponent_Result MoveCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRotate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWasRunning;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_UASFCharacterMovementComponent_Bool_Float OnRotate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_UASFCharacterMovementComponent OnRotateEnded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle Sliding_TimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSlideToDest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SlidingEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistRatioBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlidingMinRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlidingMaxRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDistToUseRootMotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinAngleToUseRootMotion;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_UASFCharacterMovementComponent OnJumpEnded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsJumping;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_UASFCharacterMovementComponent AnimationMovementDrivenEnded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isAnimationMovementDriven;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_UASFCharacterMovementComponent WallRideEnded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector WallRideEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isWallRiding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float GravityScaleSaved;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> DestinationActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LookAtDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bProceedMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector OrientationDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PrevOrientationDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Destination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector OriginalDestination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector OriginalStartLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* GoalActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AcceptRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLockAILogic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RestartMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool WaitingForStartMoveAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StartAnimUsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPathBuild;
    
    /*UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    FAIMoveRequest AIMoveRequest;*/
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsRotationLocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RotationLockDirection;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AASFCharacterAIController* AIController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle CheckIfStuck_Handler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StuckCpt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StuckTickTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAuthorizedTimeStuck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UnstuckEnable;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CrowdManagerDisable;
    
    UASFCharacterMovementComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateWallRide();
    
    UFUNCTION(BlueprintCallable)
    void UpdateJump(FVector JumpOrigin, FVector JumpDestination, float JumpDuration, float JumpTopHeight, UCurveFloat* JumpCurve, UCurveFloat* _DriftCurve, float _DriftMultiplier, float JumpAlpha, UCurveFloat* _SpeedCurve);
    
    UFUNCTION(BlueprintCallable)
    void UpdateAnimationMovementDriven(FVector MovementEnd, float _Speed);
    
    UFUNCTION(BlueprintCallable)
    void TryMove(AAIController* Controller, FVector GoalLocation, AActor* _GoalActor, float AcceptanceRadius, TEnumAsByte<EAIOptionFlag::Type> StopOnOverlap, TEnumAsByte<EAIOptionFlag::Type> AcceptPartialPath, bool bUsePathfinding, bool _bLockAILogic, bool bUseContinuosGoalTracking, TEnumAsByte<EAIOptionFlag::Type> ProjectGoalOnNavigation, TSubclassOf<UNavigationQueryFilter> NavigationQueryFilter);
    
    UFUNCTION(BlueprintCallable)
    bool TaskWallRide(FVector MovementEnd);
    
    UFUNCTION(BlueprintCallable)
    bool TaskJump(FVector _Destination, AActor* _ActorDestination, FVector _Origin, float _Speed, UCurveFloat* _HeightCurve, UCurveFloat* _DriftCurve, float _DriftMultiplier, float _JumpAngle, UCurveFloat* _SpeedCurve);
    
    UFUNCTION(BlueprintCallable)
    bool TaskAnimationMovementDriven(float _Speed, FVector MovementEnd);
    
    UFUNCTION(BlueprintCallable)
    void StopSplineFollow();
    
    UFUNCTION(BlueprintCallable)
    void StartUnStuckCheck();
    
    UFUNCTION(BlueprintCallable)
    void StartSplineFollow(float _Velocitiy);
    
    UFUNCTION(BlueprintCallable)
    void SplineMoveEnded(TEnumAsByte<EPathFollowingResult::Type> _Status);
    
    UFUNCTION(BlueprintCallable)
    void SlidingToDest(TEnumAsByte<EPathFollowingResult::Type> _Status);
    
    UFUNCTION(BlueprintCallable)
    void RotationEnd();
    
    UFUNCTION(BlueprintCallable)
    void ResetUnstuckCheck();
    
    UFUNCTION(BlueprintCallable)
    void OnWallRideOver();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPathBuild(UASF_AISplineMovementComponent* ASF_AISplineMovementComponent, UNavigationPath* NavigationPath);
    
    UFUNCTION(BlueprintCallable)
    void OnMovementFailed(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnJumpOver(UASFCharacterMovementComponent* _MovementComponent);
    
    UFUNCTION(BlueprintCallable)
    void OnAnimationMovementDrivenOver();
    
    UFUNCTION(BlueprintCallable)
    void MoveTo();
    
    UFUNCTION(BlueprintCallable)
    static FVector MovePointWider(UObject* WorldObj, UPARAM(Ref) TArray<FVector>& _PathPoints, const int32 _CurrentIdx, const TSubclassOf<UNavigationQueryFilter> FilterClass, const float Width, const bool _Debug);
    
    UFUNCTION(BlueprintCallable)
    void MovementCompleted(TEnumAsByte<EPathFollowingResult::Type> _Status);
    
    UFUNCTION(BlueprintCallable)
    void LockRotation(bool _IsLocked);
    
private:
    UFUNCTION(BlueprintCallable)
    void IsStuck();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsNavigationReady(UObject* _Context);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMoving();
    
    UFUNCTION(BlueprintCallable)
    bool IsFollowingSpline() const;
    
    UFUNCTION(BlueprintCallable)
    bool HasReachedDestination();
    
    UFUNCTION(BlueprintCallable)
    float GetSplineFollowVelocity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetMoveDestination();
    
    UFUNCTION(BlueprintCallable)
    FVector GetLocationToLookAt();
    
private:
    UFUNCTION(BlueprintCallable)
    AASFCharacterAIController* GetAIController();
    
public:
    UFUNCTION(BlueprintCallable)
    void EndUnstuckCheck();
    
    UFUNCTION(BlueprintCallable)
    void EnableUnstuckCheck();
    
    UFUNCTION(BlueprintCallable)
    void DisableUnstuckCheck();
    
protected:
    UFUNCTION(BlueprintCallable)
    void BuildPath();
    
public:
    UFUNCTION(BlueprintCallable)
    void AskForReOrientation(FVector _LookAtDirection, float Angle);
    
    UFUNCTION(BlueprintCallable)
    void AnimStartMoveTo();
    
    UFUNCTION(BlueprintCallable)
    void AnimRotationEnd(UASFCharacterMovementComponent* CharacterMovementComponent);
    
    UFUNCTION(BlueprintCallable)
    void AnimationIsReady(UObject* BlendingObject);
    
};


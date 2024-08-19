#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ASFCharacterMovementComponent.h"
#include "Event_UASFHumanoidMovementComponent_MoveTaskCompletedDelegate.h"
#include "PathSegement.h"
#include "ASFHumanoidMovementComponent.generated.h"

class AActor;
class UActionStep_Move;
class UAnimationComponent;
class UTindaAITask_MoveTo;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UASFHumanoidMovementComponent : public UASFCharacterMovementComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnimationComponent* AnimationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector OldOrientationDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* DestinationActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMoveToALocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> MovePoints;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UActionStep_Move* CurrentStepMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTindaAITask_MoveTo* MoveToTask;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_UASFHumanoidMovementComponent_MoveTaskCompleted OnTindaTaskCompleted;
    
    UASFHumanoidMovementComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldDisplayPath();
    
    UFUNCTION(BlueprintCallable)
    bool IsMoveTaskOngoing();
    
    UFUNCTION(BlueprintCallable)
    void InitHumanoidMove(UActionStep_Move* ActionStep_Move, UPARAM(Ref) TArray<FVector>& _MovePoints);
    
    UFUNCTION(BlueprintCallable)
    TArray<FPathSegement> GetNextDestinationPoints(int32 _MaxSegment, bool _ConsiderSimpleMoves);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetMoveDirection() const;
    
    UFUNCTION(BlueprintCallable)
    void EndMove();
    
private:
    UFUNCTION(BlueprintCallable)
    void DisplayPath();
    
};


#pragma once
#include "CoreMinimal.h"
#include "AITypes.h"
#include "Navigation/PathFollowingComponent.h"
#include "UObject/NoExportTypes.h"
#include "ActionStep.h"
#include "Templates/SubclassOf.h"
#include "ActionStep_Move.generated.h"

class AAIController;
class AActor;
class UASFCharacterMovementComponent;
class UNavigationQueryFilter;
class UTinda_Effect;

UCLASS(Blueprintable)
class ASF_API UActionStep_Move : public UActionStep {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanSetOverwatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpacingFromObstacles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseFormationAlong;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseFormationAtEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClearPathFromStraightPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClearPathFromDoorsPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Debug;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UTinda_Effect> RunningEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTinda_Effect* RunningEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTinda_Effect* WalkingEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEnding;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AcceptanceRadius;
    
public:
    UActionStep_Move();

protected:
    UFUNCTION(BlueprintCallable)
    void SetWalking();
    
    UFUNCTION(BlueprintCallable)
    void RemoveWalking();
    
public:
    /*UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void MoveCompleted(UASFCharacterMovementComponent* _ASFCharacterMovementComponent, TEnumAsByte<EPathFollowingResult::Type> Result);*/
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Move();
    
    UFUNCTION(BlueprintCallable)
    bool IsMoveing();
    
    /*UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitiateMove(AAIController* Controller, FVector GoalLocation, AActor* GoalActor, float _AcceptanceRadius, TEnumAsByte<EAIOptionFlag::Type> StopOnOverlap, TEnumAsByte<EAIOptionFlag::Type> AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic, bool bUseContinuosGoalTracking, TEnumAsByte<EAIOptionFlag::Type> ProjectGoalOnNavigation, TSubclassOf<UNavigationQueryFilter> NavigationQueryFilter);*/
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FVector> GetPathPositions(FVector _Destination);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetMoveStartPosition();
    
    UFUNCTION(BlueprintCallable)
    void CheckRunning();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CalculatePath(FVector _Destination, TArray<FVector>& Path);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AlterPath(UPARAM(Ref) TArray<FVector>& _Path, TArray<FVector>& _NewPath);
    
};


#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "Navigation/PathFollowingComponent.h"
#include "Templates/SubclassOf.h"
#include "ASM_BTTask_SplineBasedMoveTo.generated.h"

class AAIController;
class UASM_AISplineMovementComponent;
class UBehaviorTreeComponent;
class UNavigationQueryFilter;

UCLASS(Blueprintable, Config=Engine)
class AISPLINEBASEDMOVEMENTSYSTEM_API UASM_BTTask_SplineBasedMoveTo : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBehaviorTreeComponent* OwnerCompPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAIController* AIController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UASM_AISplineMovementComponent* AISplineMovementComponentPtr;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AcceptableRadius;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavigationQueryFilter> FilterClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowStrafe: 1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bStopOnOverlap: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowPartialPath: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowSplineRepath: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bTrackMovingGoal: 1;
    
public:
    UASM_BTTask_SplineBasedMoveTo();

protected:
    UFUNCTION(BlueprintCallable)
    void OnMovementSucceeded(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    
    UFUNCTION(BlueprintCallable)
    void OnMovementFailed(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    
};


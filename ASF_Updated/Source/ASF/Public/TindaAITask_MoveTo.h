#pragma once
#include "CoreMinimal.h"
#include "Tasks/AITask_MoveTo.h"
#include "AITypes.h"
#include "UObject/NoExportTypes.h"
#include "Event_UTindaAITask_TaskCompletedDelegate.h"
#include "Templates/SubclassOf.h"
#include "TindaAITask_MoveTo.generated.h"

class AAIController;
class AActor;
class UNavigationQueryFilter;

UCLASS(Blueprintable)
class ASF_API UTindaAITask_MoveTo : public UAITask_MoveTo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_UTindaAITask_TaskCompleted TindaTaskCompleted;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Finished;
    
public:
    //UTindaAITask_MoveTo();

    UFUNCTION(BlueprintCallable)
    static UAITask_MoveTo* Tinda_AIMoveTo(AAIController* Controller, FVector GoalLocation, AActor* GoalActor, float AcceptanceRadius, TEnumAsByte<EAIOptionFlag::Type> StopOnOverlap, TEnumAsByte<EAIOptionFlag::Type> AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic, bool bUseContinuosGoalTracking, TEnumAsByte<EAIOptionFlag::Type> ProjectGoalOnNavigation, TSubclassOf<UNavigationQueryFilter> NavigationQueryFilter);
    
    UFUNCTION(BlueprintCallable)
    void RequestFinished();
    
    UFUNCTION(BlueprintCallable)
    void MoveIsCloseToFinish();
    
};


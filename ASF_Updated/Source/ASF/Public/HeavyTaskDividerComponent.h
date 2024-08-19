#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "HeavyTaskComponent.h"
#include "HeavyTaskDividerComponent.generated.h"

class UHeavyTask;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UHeavyTaskDividerComponent : public UHeavyTaskComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HeavyComputationNbr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UHeavyTask*> HeavyTasks;
    
public:
    UHeavyTaskDividerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static UHeavyTask* ScheduleNewDividedHeavyTask(UObject* _World, FTimerDynamicDelegate Delegate, float Time);
    
};


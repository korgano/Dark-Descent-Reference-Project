#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "HeavyTaskComponent.h"
#include "HeavyTaskSchedulerComponent.generated.h"

class ASubLevelHandler;
class UHeavyTask;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UHeavyTaskSchedulerComponent : public UHeavyTaskComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HeavyComputationNbr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UHeavyTask*> HeavyTasks;
    
public:
    UHeavyTaskSchedulerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static UHeavyTask* ScheduleNewHeavyTask(UObject* _World, FTimerDynamicDelegate Delegate, float Time);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSubLevelIsLoaded(ASubLevelHandler* Handler, const FString& StreamingLevel);
    
};


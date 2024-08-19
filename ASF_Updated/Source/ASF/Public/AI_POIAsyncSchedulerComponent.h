#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AI_POIAsyncSchedulerComponent.generated.h"

class UPOIDefaultContainer;
class UTask_AsyncPerception;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UAI_POIAsyncSchedulerComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTask_AsyncPerception*> AsyncPerceptionsPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTask_AsyncPerception*> AsyncPerceptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPOIDefaultContainer*> AlreadyUpdatingResult;
    
public:
    UAI_POIAsyncSchedulerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ScheduleAsyncPerception(UTask_AsyncPerception* AsyncPerception);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseAsyncPerception(UTask_AsyncPerception* _Task_AsyncPerception);
    
    UFUNCTION(BlueprintCallable)
    UTask_AsyncPerception* GetNewAsyncPerception();
    
};


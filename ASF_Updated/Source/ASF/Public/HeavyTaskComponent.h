#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HeavyTaskComponent.generated.h"

class UHeavyTask;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UHeavyTaskComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UHeavyTaskComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void RemoveHeavyTask(UHeavyTask* _UHeavyTask);
    
    UFUNCTION(BlueprintCallable)
    void AddHeavyTask(UHeavyTask* _UHeavyTask);
    
};


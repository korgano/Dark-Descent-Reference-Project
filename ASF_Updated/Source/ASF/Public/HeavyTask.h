#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/EngineTypes.h"
#include "HeavyTask.generated.h"

class UHeavyTaskComponent;

UCLASS(Blueprintable)
class ASF_API UHeavyTask : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHeavyTaskComponent* HeavyTaskComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerDynamicDelegate Delegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpdateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastUpdate;
    
public:
    UHeavyTask();

    UFUNCTION(BlueprintCallable)
    float UpdateTaskTimer(float _DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void StopHeavyTask();
    
    UFUNCTION(BlueprintCallable)
    void StartHeavyTask();
    
    UFUNCTION(BlueprintCallable)
    void InitHeavyTask(UHeavyTaskComponent* _HeavyTaskComponent, FTimerDynamicDelegate _Delegate, float _Time);
    
    UFUNCTION(BlueprintCallable)
    bool ExecuteTask();
    
};


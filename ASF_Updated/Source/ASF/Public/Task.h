#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "Task.generated.h"

UCLASS(Blueprintable)
class ASF_API UTask : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UTask();

    UFUNCTION(BlueprintCallable)
    void EndTask();
    
};


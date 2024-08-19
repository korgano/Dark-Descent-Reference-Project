#pragma once
#include "CoreMinimal.h"
#include "HeavyTaskPriority.generated.h"

class UHeavyTask;

USTRUCT(BlueprintType)
struct ASF_API FHeavyTaskPriority {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHeavyTask* Task;
    
    FHeavyTaskPriority();
};


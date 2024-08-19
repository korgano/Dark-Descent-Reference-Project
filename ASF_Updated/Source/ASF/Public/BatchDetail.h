#pragma once
#include "CoreMinimal.h"
#include "BatchDetail.generated.h"

USTRUCT(BlueprintType)
struct FBatchDetail {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BatchID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> RemovedTriggerIndexes;
    
    ASF_API FBatchDetail();
};


#pragma once
#include "CoreMinimal.h"
#include "SortingSegmentIdx.generated.h"

USTRUCT(BlueprintType)
struct FSortingSegmentIdx {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 End;
    
    ASF_API FSortingSegmentIdx();
};


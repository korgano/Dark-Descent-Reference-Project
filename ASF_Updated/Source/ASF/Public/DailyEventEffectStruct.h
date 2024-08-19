#pragma once
#include "CoreMinimal.h"
#include "DailyEventEffectStruct.generated.h"

USTRUCT(BlueprintType)
struct ASF_API FDailyEventEffectStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Effect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    FDailyEventEffectStruct();
};


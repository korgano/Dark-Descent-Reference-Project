#pragma once
#include "CoreMinimal.h"
#include "PairInt.generated.h"

USTRUCT(BlueprintType)
struct FPairInt {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 I;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 J;
    
    ASF_API FPairInt();
};


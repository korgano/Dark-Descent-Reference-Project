#pragma once
#include "CoreMinimal.h"
#include "TreatedMarine.generated.h"

USTRUCT(BlueprintType)
struct FTreatedMarine {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpentTurns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RemainingTurns;
    
    ASF_API FTreatedMarine();
};


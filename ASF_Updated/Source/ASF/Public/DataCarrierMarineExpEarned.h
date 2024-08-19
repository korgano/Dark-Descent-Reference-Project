#pragma once
#include "CoreMinimal.h"
#include "DataCarrierMarineExpEarned.generated.h"

USTRUCT(BlueprintType)
struct FDataCarrierMarineExpEarned {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExpEarnedLastRound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExpEarnedLastRoundByDogTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExpEarnedLastRoundByInstructor;
    
    ASF_API FDataCarrierMarineExpEarned();
};


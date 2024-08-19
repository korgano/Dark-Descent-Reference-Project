#pragma once
#include "CoreMinimal.h"
#include "AcknowWithSpeaker.h"
#include "AcknowsSequence.generated.h"

USTRUCT(BlueprintType)
struct FAcknowsSequence {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAcknowWithSpeaker> Data;
    
    ASF_API FAcknowsSequence();
};


#pragma once
#include "CoreMinimal.h"
#include "AcknowsSequence.h"
#include "AcknowsSequenceList.generated.h"

USTRUCT(BlueprintType)
struct FAcknowsSequenceList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAcknowsSequence> Sequences;
    
    ASF_API FAcknowsSequenceList();
};


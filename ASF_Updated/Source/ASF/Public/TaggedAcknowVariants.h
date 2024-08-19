#pragma once
#include "CoreMinimal.h"
#include "AcknowVariants.h"
#include "EnumAcknowSpeaker.h"
#include "TaggedAcknowVariants.generated.h"

USTRUCT(BlueprintType)
struct FTaggedAcknowVariants {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EnumAcknowSpeaker, FAcknowVariants> TaggedVariants;
    
    ASF_API FTaggedAcknowVariants();
};


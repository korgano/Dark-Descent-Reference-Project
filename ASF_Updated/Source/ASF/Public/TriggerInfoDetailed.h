#pragma once
#include "CoreMinimal.h"
#include "TriggerInfoDetailed.generated.h"

class UTriggerInfo;

USTRUCT(BlueprintType)
struct FTriggerInfoDetailed {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FString TriggerInfoIDName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    UTriggerInfo* TriggerInfo;
    
    ASF_API FTriggerInfoDetailed();
};


#pragma once
#include "CoreMinimal.h"
#include "EnumWound.h"
#include "WoundStruct.generated.h"

USTRUCT(BlueprintType)
struct FWoundStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumWound Wound;
    
    ASF_API FWoundStruct();
};


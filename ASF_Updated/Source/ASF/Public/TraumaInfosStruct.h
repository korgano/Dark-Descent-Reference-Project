#pragma once
#include "CoreMinimal.h"
#include "TraumaInfosStruct.generated.h"

USTRUCT(BlueprintType)
struct ASF_API FTraumaInfosStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString trauma_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 marine_id;
    
    FTraumaInfosStruct();
};


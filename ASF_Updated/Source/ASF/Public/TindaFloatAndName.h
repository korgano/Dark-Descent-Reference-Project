#pragma once
#include "CoreMinimal.h"
#include "Tinda_Float.h"
#include "TindaFloatAndName.generated.h"

USTRUCT(BlueprintType)
struct FTindaFloatAndName {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTinda_Float TindaFloat;
    
    ASF_API FTindaFloatAndName();
};


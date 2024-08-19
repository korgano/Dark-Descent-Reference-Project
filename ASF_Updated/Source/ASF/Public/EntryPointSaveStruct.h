#pragma once
#include "CoreMinimal.h"
#include "EntryPointSaveStruct.generated.h"

USTRUCT(BlueprintType)
struct FEntryPointSaveStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EntryPointName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SubLevelName;
    
    ASF_API FEntryPointSaveStruct();
};


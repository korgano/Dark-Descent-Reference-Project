#pragma once
#include "CoreMinimal.h"
#include "SubLevelID.generated.h"

USTRUCT(BlueprintType)
struct FSubLevelID {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LevelID;
    
    ASF_API FSubLevelID();
};


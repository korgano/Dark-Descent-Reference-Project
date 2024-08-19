#pragma once
#include "CoreMinimal.h"
#include "FoeSpawnParams.h"
#include "AlienSpawnParams.generated.h"

class APawn;

USTRUCT(BlueprintType)
struct FAlienSpawnParams : public FFoeSpawnParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<APawn> AlienClass;
    
    ASF_API FAlienSpawnParams();
};


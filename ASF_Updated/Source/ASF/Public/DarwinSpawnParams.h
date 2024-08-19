#pragma once
#include "CoreMinimal.h"
#include "HumanSpawnParams.h"
#include "DarwinSpawnParams.generated.h"

USTRUCT(BlueprintType)
struct FDarwinSpawnParams : public FHumanSpawnParams {
    GENERATED_BODY()
public:
    ASF_API FDarwinSpawnParams();
};


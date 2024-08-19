#pragma once
#include "CoreMinimal.h"
#include "HumanSpawnParams.h"
#include "WeylandSpawnParams.generated.h"

USTRUCT(BlueprintType)
struct FWeylandSpawnParams : public FHumanSpawnParams {
    GENERATED_BODY()
public:
    ASF_API FWeylandSpawnParams();
};


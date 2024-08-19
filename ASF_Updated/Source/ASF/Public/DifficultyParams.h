#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DifficultyParams.generated.h"

USTRUCT(BlueprintType)
struct FDifficultyParams : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProximitySpawnBaseProbability;
    
    ASF_API FDifficultyParams();
};


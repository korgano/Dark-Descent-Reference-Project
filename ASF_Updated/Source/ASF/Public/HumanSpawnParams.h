#pragma once
#include "CoreMinimal.h"
#include "FoeSpawnParams.h"
#include "HumanSpawnParams.generated.h"

class UMarineClassDataAssets;

USTRUCT(BlueprintType)
struct FHumanSpawnParams : public FFoeSpawnParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMarineClassDataAssets> HumanClass;
    
    ASF_API FHumanSpawnParams();
};


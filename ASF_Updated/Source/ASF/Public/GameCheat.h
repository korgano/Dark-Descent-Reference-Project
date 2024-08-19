#pragma once
#include "CoreMinimal.h"
#include "GameCheat.generated.h"

USTRUCT(BlueprintType)
struct FGameCheat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllowEnemySpawn;
    
    ASF_API FGameCheat();
};


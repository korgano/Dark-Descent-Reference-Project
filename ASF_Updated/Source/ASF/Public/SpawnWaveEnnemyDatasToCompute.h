#pragma once
#include "CoreMinimal.h"
#include "GameplayTwinReference.h"
#include "SpawnWaveEnnemyDatasToCompute.generated.h"

class AASFCharacter;

USTRUCT(BlueprintType)
struct ASF_API FSpawnWaveEnnemyDatasToCompute {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AASFCharacter> ennemyToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTwinReference> OverrideSpawnPointsTwinForThisGroup;
    
    FSpawnWaveEnnemyDatasToCompute();
};


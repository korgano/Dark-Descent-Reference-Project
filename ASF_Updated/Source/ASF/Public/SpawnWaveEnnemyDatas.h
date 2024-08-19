#pragma once
#include "CoreMinimal.h"
#include "EnumMissionDifficulty.h"
#include "GameplayTwinReference.h"
#include "SpawnWaveEnnemyDatas.generated.h"

class AASFCharacter;

USTRUCT(BlueprintType)
struct ASF_API FSpawnWaveEnnemyDatas {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AASFCharacter> ennemyToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 numberToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EnumMissionDifficulty, int32> numberToSpawnDifficulties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTwinReference> OverrideSpawnPointsTwinForThisGroup;
    
    FSpawnWaveEnnemyDatas();
};


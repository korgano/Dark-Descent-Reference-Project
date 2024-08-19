#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HiveSizeParams.generated.h"

USTRUCT(BlueprintType)
struct FHiveSizeParams : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> SpawnPoolPerAggressiveness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> AggressivenessLevelsTriggeringMassiveOnslaughts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> AggressivenessLevelsTriggeringBosses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinimumAggressivenessLevelAllowingRunnerSpawnsInExploration;
    
    ASF_API FHiveSizeParams();
};


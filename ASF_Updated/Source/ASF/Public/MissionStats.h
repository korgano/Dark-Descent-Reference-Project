#pragma once
#include "CoreMinimal.h"
#include "MissionResources.h"
#include "RunStats.h"
#include "MissionStats.generated.h"

USTRUCT(BlueprintType)
struct FMissionStats {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRunStats> Runs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LastExtractionPointName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionResources MissionResources;
    
    ASF_API FMissionStats();
};


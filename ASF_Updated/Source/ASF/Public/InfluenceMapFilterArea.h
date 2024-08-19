#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "InfluenceMapFilterArea.generated.h"

class UInfluenceMapArea;

USTRUCT(BlueprintType)
struct ASF_API FInfluenceMapFilterArea {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UInfluenceMapArea> MapAreaClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TravelCostOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EnteringCostOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnteringCostOnlyOnThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsExcluded: 1;
    
    FInfluenceMapFilterArea();
};


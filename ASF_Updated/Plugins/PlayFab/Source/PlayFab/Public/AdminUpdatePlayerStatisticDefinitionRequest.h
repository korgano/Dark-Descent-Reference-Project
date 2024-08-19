#pragma once
#include "CoreMinimal.h"
#include "EStatisticAggregationMethod.h"
#include "EStatisticResetIntervalOption.h"
#include "PlayFabRequestCommon.h"
#include "AdminUpdatePlayerStatisticDefinitionRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminUpdatePlayerStatisticDefinitionRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStatisticAggregationMethod AggregationMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StatisticName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStatisticResetIntervalOption VersionChangeInterval;
    
    FAdminUpdatePlayerStatisticDefinitionRequest();
};


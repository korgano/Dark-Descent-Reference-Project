#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "AdminUpdatePlayerStatisticDefinitionResult.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminUpdatePlayerStatisticDefinitionResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* Statistic;
    
    FAdminUpdatePlayerStatisticDefinitionResult();
};


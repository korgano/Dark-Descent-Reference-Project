#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "AdminCreatePlayerStatisticDefinitionResult.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminCreatePlayerStatisticDefinitionResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* Statistic;
    
    FAdminCreatePlayerStatisticDefinitionResult();
};


#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "AdminGetPlayerStatisticDefinitionsResult.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminGetPlayerStatisticDefinitionsResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPlayFabJsonObject*> Statistics;
    
    FAdminGetPlayerStatisticDefinitionsResult();
};


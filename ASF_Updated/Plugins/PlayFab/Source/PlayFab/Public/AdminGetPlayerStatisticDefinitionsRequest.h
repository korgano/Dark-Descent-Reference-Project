#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "AdminGetPlayerStatisticDefinitionsRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminGetPlayerStatisticDefinitionsRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    FAdminGetPlayerStatisticDefinitionsRequest();
};


#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "AdminGetCloudScriptVersionsRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminGetCloudScriptVersionsRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    FAdminGetCloudScriptVersionsRequest();
};


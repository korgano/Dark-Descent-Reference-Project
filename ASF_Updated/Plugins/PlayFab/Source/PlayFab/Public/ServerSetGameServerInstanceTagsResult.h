#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ServerSetGameServerInstanceTagsResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerSetGameServerInstanceTagsResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FServerSetGameServerInstanceTagsResult();
};


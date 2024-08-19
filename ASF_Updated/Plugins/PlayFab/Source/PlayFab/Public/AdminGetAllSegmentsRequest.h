#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "AdminGetAllSegmentsRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminGetAllSegmentsRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    FAdminGetAllSegmentsRequest();
};


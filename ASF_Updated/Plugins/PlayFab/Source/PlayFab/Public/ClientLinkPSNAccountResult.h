#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ClientLinkPSNAccountResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientLinkPSNAccountResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FClientLinkPSNAccountResult();
};


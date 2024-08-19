#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ClientLinkXboxAccountResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientLinkXboxAccountResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FClientLinkXboxAccountResult();
};


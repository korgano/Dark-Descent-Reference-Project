#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ClientLinkFacebookAccountResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientLinkFacebookAccountResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FClientLinkFacebookAccountResult();
};


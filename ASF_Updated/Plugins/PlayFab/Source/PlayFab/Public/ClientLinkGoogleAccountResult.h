#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ClientLinkGoogleAccountResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientLinkGoogleAccountResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FClientLinkGoogleAccountResult();
};


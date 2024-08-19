#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ClientLinkGameCenterAccountResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientLinkGameCenterAccountResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FClientLinkGameCenterAccountResult();
};


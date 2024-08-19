#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ClientLinkKongregateAccountResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientLinkKongregateAccountResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FClientLinkKongregateAccountResult();
};


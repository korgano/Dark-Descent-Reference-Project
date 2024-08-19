#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ClientUnlinkKongregateAccountResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientUnlinkKongregateAccountResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FClientUnlinkKongregateAccountResult();
};


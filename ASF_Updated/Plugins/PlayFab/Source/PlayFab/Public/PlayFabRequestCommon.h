#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.generated.h"

class UPlayFabAuthenticationContext;

USTRUCT(BlueprintType)
struct PLAYFAB_API FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabAuthenticationContext* AuthenticationContext;
    
    FPlayFabRequestCommon();
};


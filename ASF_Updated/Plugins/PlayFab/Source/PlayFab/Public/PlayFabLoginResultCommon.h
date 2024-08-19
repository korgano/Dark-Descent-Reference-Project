#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "PlayFabLoginResultCommon.generated.h"

class UPlayFabAuthenticationContext;

USTRUCT(BlueprintType)
struct PLAYFAB_API FPlayFabLoginResultCommon : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabAuthenticationContext* AuthenticationContext;
    
    FPlayFabLoginResultCommon();
};


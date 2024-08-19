#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "AdminDeleteTitleDataOverrideRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminDeleteTitleDataOverrideRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OverrideLabel;
    
    FAdminDeleteTitleDataOverrideRequest();
};


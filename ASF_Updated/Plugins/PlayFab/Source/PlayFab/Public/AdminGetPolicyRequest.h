#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "AdminGetPolicyRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminGetPolicyRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PolicyName;
    
    FAdminGetPolicyRequest();
};


#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "ServerDeleteSharedGroupRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerDeleteSharedGroupRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SharedGroupId;
    
    FServerDeleteSharedGroupRequest();
};


#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "ServerCreateSharedGroupRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerCreateSharedGroupRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SharedGroupId;
    
    FServerCreateSharedGroupRequest();
};


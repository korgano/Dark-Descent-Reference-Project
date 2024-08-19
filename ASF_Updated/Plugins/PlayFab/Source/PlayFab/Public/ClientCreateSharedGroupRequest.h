#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "ClientCreateSharedGroupRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientCreateSharedGroupRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SharedGroupId;
    
    FClientCreateSharedGroupRequest();
};


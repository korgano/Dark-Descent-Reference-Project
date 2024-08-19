#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "ServerGetUserAccountInfoRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerGetUserAccountInfoRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayFabId;
    
    FServerGetUserAccountInfoRequest();
};


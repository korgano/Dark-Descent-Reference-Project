#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "ServerGetUserBansRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerGetUserBansRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayFabId;
    
    FServerGetUserBansRequest();
};


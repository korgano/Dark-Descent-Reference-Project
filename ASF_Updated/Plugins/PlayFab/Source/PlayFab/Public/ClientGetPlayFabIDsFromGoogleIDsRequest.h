#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "ClientGetPlayFabIDsFromGoogleIDsRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientGetPlayFabIDsFromGoogleIDsRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GoogleIDs;
    
    FClientGetPlayFabIDsFromGoogleIDsRequest();
};


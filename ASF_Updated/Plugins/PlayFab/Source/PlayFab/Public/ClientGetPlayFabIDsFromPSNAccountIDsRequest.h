#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "ClientGetPlayFabIDsFromPSNAccountIDsRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientGetPlayFabIDsFromPSNAccountIDsRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IssuerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PSNAccountIDs;
    
    FClientGetPlayFabIDsFromPSNAccountIDsRequest();
};


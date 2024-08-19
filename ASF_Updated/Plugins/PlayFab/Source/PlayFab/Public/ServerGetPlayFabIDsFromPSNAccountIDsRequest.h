#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "ServerGetPlayFabIDsFromPSNAccountIDsRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerGetPlayFabIDsFromPSNAccountIDsRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IssuerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PSNAccountIDs;
    
    FServerGetPlayFabIDsFromPSNAccountIDsRequest();
};


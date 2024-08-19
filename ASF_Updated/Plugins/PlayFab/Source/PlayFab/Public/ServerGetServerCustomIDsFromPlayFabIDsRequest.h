#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "ServerGetServerCustomIDsFromPlayFabIDsRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerGetServerCustomIDsFromPlayFabIDsRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayFabIds;
    
    FServerGetServerCustomIDsFromPlayFabIDsRequest();
};


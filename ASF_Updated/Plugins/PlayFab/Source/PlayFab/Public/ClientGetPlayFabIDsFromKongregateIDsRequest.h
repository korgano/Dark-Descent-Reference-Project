#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "ClientGetPlayFabIDsFromKongregateIDsRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientGetPlayFabIDsFromKongregateIDsRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString KongregateIDs;
    
    FClientGetPlayFabIDsFromKongregateIDsRequest();
};


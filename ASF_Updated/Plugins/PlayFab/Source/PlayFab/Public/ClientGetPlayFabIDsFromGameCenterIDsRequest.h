#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "ClientGetPlayFabIDsFromGameCenterIDsRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientGetPlayFabIDsFromGameCenterIDsRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GameCenterIDs;
    
    FClientGetPlayFabIDsFromGameCenterIDsRequest();
};


#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "ClientGameServerRegionsRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientGameServerRegionsRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BuildVersion;
    
    FClientGameServerRegionsRequest();
};


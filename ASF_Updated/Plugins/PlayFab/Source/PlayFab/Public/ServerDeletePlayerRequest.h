#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "ServerDeletePlayerRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerDeletePlayerRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayFabId;
    
    FServerDeletePlayerRequest();
};


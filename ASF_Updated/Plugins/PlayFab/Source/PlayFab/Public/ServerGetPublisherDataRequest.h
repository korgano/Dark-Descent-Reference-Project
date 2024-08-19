#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "ServerGetPublisherDataRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerGetPublisherDataRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Keys;
    
    FServerGetPublisherDataRequest();
};


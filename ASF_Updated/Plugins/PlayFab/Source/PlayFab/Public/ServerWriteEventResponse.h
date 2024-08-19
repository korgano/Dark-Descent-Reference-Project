#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ServerWriteEventResponse.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerWriteEventResponse : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EventId;
    
    FServerWriteEventResponse();
};


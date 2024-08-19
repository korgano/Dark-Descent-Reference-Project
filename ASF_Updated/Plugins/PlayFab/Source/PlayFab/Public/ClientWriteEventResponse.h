#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ClientWriteEventResponse.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientWriteEventResponse : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EventId;
    
    FClientWriteEventResponse();
};


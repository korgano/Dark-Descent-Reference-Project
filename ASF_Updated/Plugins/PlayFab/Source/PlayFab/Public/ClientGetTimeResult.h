#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ClientGetTimeResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientGetTimeResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Time;
    
    FClientGetTimeResult();
};


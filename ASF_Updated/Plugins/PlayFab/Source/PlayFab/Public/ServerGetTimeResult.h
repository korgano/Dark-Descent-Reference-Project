#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ServerGetTimeResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerGetTimeResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Time;
    
    FServerGetTimeResult();
};


#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ClientConsumeItemResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientConsumeItemResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ItemInstanceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RemainingUses;
    
    FClientConsumeItemResult();
};


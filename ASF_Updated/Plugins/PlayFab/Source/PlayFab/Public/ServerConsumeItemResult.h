#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ServerConsumeItemResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerConsumeItemResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ItemInstanceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RemainingUses;
    
    FServerConsumeItemResult();
};


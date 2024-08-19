#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ClientAddUsernamePasswordResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientAddUsernamePasswordResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Username;
    
    FClientAddUsernamePasswordResult();
};


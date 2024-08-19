#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ServerCreateSharedGroupResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerCreateSharedGroupResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SharedGroupId;
    
    FServerCreateSharedGroupResult();
};


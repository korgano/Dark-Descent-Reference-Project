#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ClientCreateSharedGroupResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientCreateSharedGroupResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SharedGroupId;
    
    FClientCreateSharedGroupResult();
};


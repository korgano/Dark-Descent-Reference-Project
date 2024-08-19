#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ClientUpdateUserDataResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientUpdateUserDataResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DataVersion;
    
    FClientUpdateUserDataResult();
};


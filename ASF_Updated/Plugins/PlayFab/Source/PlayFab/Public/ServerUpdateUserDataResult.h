#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ServerUpdateUserDataResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerUpdateUserDataResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DataVersion;
    
    FServerUpdateUserDataResult();
};


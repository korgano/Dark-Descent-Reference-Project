#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ServerGetPlayFabIDsFromFacebookIDsResult.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerGetPlayFabIDsFromFacebookIDsResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPlayFabJsonObject*> Data;
    
    FServerGetPlayFabIDsFromFacebookIDsResult();
};


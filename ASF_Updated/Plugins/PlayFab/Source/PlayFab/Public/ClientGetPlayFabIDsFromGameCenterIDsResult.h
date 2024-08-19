#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ClientGetPlayFabIDsFromGameCenterIDsResult.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientGetPlayFabIDsFromGameCenterIDsResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPlayFabJsonObject*> Data;
    
    FClientGetPlayFabIDsFromGameCenterIDsResult();
};


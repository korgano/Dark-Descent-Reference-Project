#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ServerGetPlayFabIDsFromSteamIDsResult.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerGetPlayFabIDsFromSteamIDsResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPlayFabJsonObject*> Data;
    
    FServerGetPlayFabIDsFromSteamIDsResult();
};


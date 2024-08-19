#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ClientGetPlayFabIDsFromFacebookInstantGamesIdsResult.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientGetPlayFabIDsFromFacebookInstantGamesIdsResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPlayFabJsonObject*> Data;
    
    FClientGetPlayFabIDsFromFacebookInstantGamesIdsResult();
};


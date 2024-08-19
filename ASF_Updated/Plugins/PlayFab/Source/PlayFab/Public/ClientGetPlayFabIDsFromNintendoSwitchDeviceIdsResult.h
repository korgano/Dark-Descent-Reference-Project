#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ClientGetPlayFabIDsFromNintendoSwitchDeviceIdsResult.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientGetPlayFabIDsFromNintendoSwitchDeviceIdsResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPlayFabJsonObject*> Data;
    
    FClientGetPlayFabIDsFromNintendoSwitchDeviceIdsResult();
};


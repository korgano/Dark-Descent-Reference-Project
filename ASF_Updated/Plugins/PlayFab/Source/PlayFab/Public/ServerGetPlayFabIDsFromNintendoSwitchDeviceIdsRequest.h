#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "ServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NintendoSwitchDeviceIds;
    
    FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest();
};


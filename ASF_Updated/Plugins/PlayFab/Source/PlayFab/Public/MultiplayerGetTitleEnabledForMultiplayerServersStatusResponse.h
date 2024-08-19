#pragma once
#include "CoreMinimal.h"
#include "ETitleMultiplayerServerEnabledStatus.h"
#include "PlayFabResultCommon.h"
#include "MultiplayerGetTitleEnabledForMultiplayerServersStatusResponse.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETitleMultiplayerServerEnabledStatus Status;
    
    FMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse();
};


#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "MultiplayerGetMultiplayerServerLogsResponse.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FMultiplayerGetMultiplayerServerLogsResponse : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LogDownloadUrl;
    
    FMultiplayerGetMultiplayerServerLogsResponse();
};


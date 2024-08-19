#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "MultiplayerGetAssetDownloadUrlResponse.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FMultiplayerGetAssetDownloadUrlResponse : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AssetDownloadUrl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Filename;
    
    FMultiplayerGetAssetDownloadUrlResponse();
};


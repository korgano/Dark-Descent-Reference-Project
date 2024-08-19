#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "MultiplayerGetAssetUploadUrlResponse.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FMultiplayerGetAssetUploadUrlResponse : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AssetUploadUrl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Filename;
    
    FMultiplayerGetAssetUploadUrlResponse();
};


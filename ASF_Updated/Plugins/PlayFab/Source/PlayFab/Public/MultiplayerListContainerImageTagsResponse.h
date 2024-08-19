#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "MultiplayerListContainerImageTagsResponse.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FMultiplayerListContainerImageTagsResponse : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Tags;
    
    FMultiplayerListContainerImageTagsResponse();
};


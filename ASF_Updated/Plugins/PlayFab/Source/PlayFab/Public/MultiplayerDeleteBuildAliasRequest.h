#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "MultiplayerDeleteBuildAliasRequest.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FMultiplayerDeleteBuildAliasRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AliasId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* CustomTags;
    
    FMultiplayerDeleteBuildAliasRequest();
};


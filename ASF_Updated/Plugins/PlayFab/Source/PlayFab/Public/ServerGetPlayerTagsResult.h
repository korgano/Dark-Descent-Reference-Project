#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ServerGetPlayerTagsResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerGetPlayerTagsResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayFabId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Tags;
    
    FServerGetPlayerTagsResult();
};


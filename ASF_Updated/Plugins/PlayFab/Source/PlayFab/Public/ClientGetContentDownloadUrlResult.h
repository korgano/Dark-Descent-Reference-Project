#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ClientGetContentDownloadUrlResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientGetContentDownloadUrlResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString URL;
    
    FClientGetContentDownloadUrlResult();
};


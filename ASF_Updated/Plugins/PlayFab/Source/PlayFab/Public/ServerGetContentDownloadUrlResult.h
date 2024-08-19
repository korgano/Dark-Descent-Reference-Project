#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ServerGetContentDownloadUrlResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerGetContentDownloadUrlResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString URL;
    
    FServerGetContentDownloadUrlResult();
};


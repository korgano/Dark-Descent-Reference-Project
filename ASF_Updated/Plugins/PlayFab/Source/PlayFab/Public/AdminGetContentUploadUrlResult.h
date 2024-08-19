#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "AdminGetContentUploadUrlResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminGetContentUploadUrlResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString URL;
    
    FAdminGetContentUploadUrlResult();
};


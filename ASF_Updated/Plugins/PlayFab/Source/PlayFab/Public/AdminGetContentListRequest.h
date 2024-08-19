#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "AdminGetContentListRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminGetContentListRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Prefix;
    
    FAdminGetContentListRequest();
};


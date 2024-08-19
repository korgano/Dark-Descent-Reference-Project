#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "AdminGetCloudScriptRevisionRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminGetCloudScriptRevisionRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Revision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Version;
    
    FAdminGetCloudScriptRevisionRequest();
};


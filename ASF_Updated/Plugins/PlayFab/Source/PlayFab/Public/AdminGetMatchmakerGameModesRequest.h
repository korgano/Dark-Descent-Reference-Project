#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "AdminGetMatchmakerGameModesRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminGetMatchmakerGameModesRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BuildVersion;
    
    FAdminGetMatchmakerGameModesRequest();
};


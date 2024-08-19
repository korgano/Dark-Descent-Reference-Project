#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "AdminGetPlayedTitleListRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminGetPlayedTitleListRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayFabId;
    
    FAdminGetPlayedTitleListRequest();
};


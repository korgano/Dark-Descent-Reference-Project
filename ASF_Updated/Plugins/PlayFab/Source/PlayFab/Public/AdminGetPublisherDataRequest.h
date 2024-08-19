#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "AdminGetPublisherDataRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminGetPublisherDataRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Keys;
    
    FAdminGetPublisherDataRequest();
};


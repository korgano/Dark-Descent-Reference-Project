#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "AdminCheckLimitedEditionItemAvailabilityRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminCheckLimitedEditionItemAvailabilityRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CatalogVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ItemId;
    
    FAdminCheckLimitedEditionItemAvailabilityRequest();
};


#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "ClientGetCatalogItemsRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientGetCatalogItemsRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CatalogVersion;
    
    FClientGetCatalogItemsRequest();
};


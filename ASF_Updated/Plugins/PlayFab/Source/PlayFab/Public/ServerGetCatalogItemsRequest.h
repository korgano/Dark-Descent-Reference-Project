#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "ServerGetCatalogItemsRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerGetCatalogItemsRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CatalogVersion;
    
    FServerGetCatalogItemsRequest();
};


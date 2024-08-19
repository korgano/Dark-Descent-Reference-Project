#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "AdminGetRandomResultTablesRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminGetRandomResultTablesRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CatalogVersion;
    
    FAdminGetRandomResultTablesRequest();
};


#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "ServerEvaluateRandomResultTableRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerEvaluateRandomResultTableRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CatalogVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TableId;
    
    FServerEvaluateRandomResultTableRequest();
};


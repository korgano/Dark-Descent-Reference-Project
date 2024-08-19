#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "ServerGetTitleNewsRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerGetTitleNewsRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    FServerGetTitleNewsRequest();
};


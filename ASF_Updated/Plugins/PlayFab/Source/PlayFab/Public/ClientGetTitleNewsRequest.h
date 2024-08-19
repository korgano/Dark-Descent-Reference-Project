#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "ClientGetTitleNewsRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientGetTitleNewsRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    FClientGetTitleNewsRequest();
};


#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "AdminDeleteContentRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminDeleteContentRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Key;
    
    FAdminDeleteContentRequest();
};


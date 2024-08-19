#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "AdminDeletePlayerRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminDeletePlayerRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayFabId;
    
    FAdminDeletePlayerRequest();
};


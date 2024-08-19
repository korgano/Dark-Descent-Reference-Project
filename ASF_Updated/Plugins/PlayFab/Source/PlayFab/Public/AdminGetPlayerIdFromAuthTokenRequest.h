#pragma once
#include "CoreMinimal.h"
#include "EAuthTokenType.h"
#include "PlayFabRequestCommon.h"
#include "AdminGetPlayerIdFromAuthTokenRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminGetPlayerIdFromAuthTokenRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Token;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAuthTokenType TokenType;
    
    FAdminGetPlayerIdFromAuthTokenRequest();
};


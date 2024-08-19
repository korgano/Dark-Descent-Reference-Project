#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ServerAuthenticateSessionTicketResult.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerAuthenticateSessionTicketResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSessionTicketExpired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* UserInfo;
    
    FServerAuthenticateSessionTicketResult();
};


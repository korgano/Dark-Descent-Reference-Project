#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "AdminGetPlayerIdFromAuthTokenResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminGetPlayerIdFromAuthTokenResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayFabId;
    
    FAdminGetPlayerIdFromAuthTokenResult();
};


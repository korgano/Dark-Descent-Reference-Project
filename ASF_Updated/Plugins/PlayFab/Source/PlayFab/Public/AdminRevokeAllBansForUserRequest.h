#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "AdminRevokeAllBansForUserRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminRevokeAllBansForUserRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayFabId;
    
    FAdminRevokeAllBansForUserRequest();
};


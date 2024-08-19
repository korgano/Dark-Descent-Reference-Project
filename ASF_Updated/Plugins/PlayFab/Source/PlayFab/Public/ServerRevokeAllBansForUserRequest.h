#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "ServerRevokeAllBansForUserRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerRevokeAllBansForUserRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayFabId;
    
    FServerRevokeAllBansForUserRequest();
};


#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "AdminGetUserBansRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminGetUserBansRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayFabId;
    
    FAdminGetUserBansRequest();
};


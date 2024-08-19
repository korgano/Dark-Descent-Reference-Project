#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "AdminRevokeBansRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminRevokeBansRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BanIds;
    
    FAdminRevokeBansRequest();
};


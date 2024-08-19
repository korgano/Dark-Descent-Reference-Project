#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "ServerRevokeBansRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerRevokeBansRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BanIds;
    
    FServerRevokeBansRequest();
};


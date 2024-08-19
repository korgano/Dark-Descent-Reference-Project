#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "MatchmakerAuthUserResponse.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FMatchmakerAuthUserResponse : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Authorized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayFabId;
    
    FMatchmakerAuthUserResponse();
};


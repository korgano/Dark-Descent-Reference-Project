#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ClientGetTitlePublicKeyResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientGetTitlePublicKeyResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RSAPublicKey;
    
    FClientGetTitlePublicKeyResult();
};


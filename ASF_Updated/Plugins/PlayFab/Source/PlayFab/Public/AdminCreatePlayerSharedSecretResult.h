#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "AdminCreatePlayerSharedSecretResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminCreatePlayerSharedSecretResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SecretKey;
    
    FAdminCreatePlayerSharedSecretResult();
};


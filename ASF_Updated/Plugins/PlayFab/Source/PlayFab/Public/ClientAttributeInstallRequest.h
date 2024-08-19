#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "ClientAttributeInstallRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientAttributeInstallRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Adid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Idfa;
    
    FClientAttributeInstallRequest();
};


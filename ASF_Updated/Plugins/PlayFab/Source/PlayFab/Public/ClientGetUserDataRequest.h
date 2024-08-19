#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "ClientGetUserDataRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientGetUserDataRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IfChangedFromDataVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Keys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayFabId;
    
    FClientGetUserDataRequest();
};


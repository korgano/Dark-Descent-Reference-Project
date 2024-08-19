#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ServerUpdateCharacterDataResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerUpdateCharacterDataResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DataVersion;
    
    FServerUpdateCharacterDataResult();
};


#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ClientUpdateCharacterDataResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientUpdateCharacterDataResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DataVersion;
    
    FClientUpdateCharacterDataResult();
};


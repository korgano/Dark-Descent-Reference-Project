#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ClientGameServerRegionsResult.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientGameServerRegionsResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPlayFabJsonObject*> Regions;
    
    FClientGameServerRegionsResult();
};


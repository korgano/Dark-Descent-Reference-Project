#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ServerUpdateBansResult.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerUpdateBansResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPlayFabJsonObject*> BanData;
    
    FServerUpdateBansResult();
};


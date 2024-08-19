#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ServerRevokeBansResult.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerRevokeBansResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPlayFabJsonObject*> BanData;
    
    FServerRevokeBansResult();
};


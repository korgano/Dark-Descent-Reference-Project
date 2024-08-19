#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "AdminRevokeBansResult.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminRevokeBansResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPlayFabJsonObject*> BanData;
    
    FAdminRevokeBansResult();
};


#pragma once
#include "CoreMinimal.h"
#include "PlayFabError.h"
#include "PlayFabBaseModel.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FPlayFabBaseModel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayFabError responseError;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* responseData;
    
    FPlayFabBaseModel();
};


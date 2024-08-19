#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "AdminListVirtualCurrencyTypesResult.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminListVirtualCurrencyTypesResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPlayFabJsonObject*> VirtualCurrencies;
    
    FAdminListVirtualCurrencyTypesResult();
};


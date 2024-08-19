#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "AdminListOpenIdConnectionResponse.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminListOpenIdConnectionResponse : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPlayFabJsonObject*> Connections;
    
    FAdminListOpenIdConnectionResponse();
};


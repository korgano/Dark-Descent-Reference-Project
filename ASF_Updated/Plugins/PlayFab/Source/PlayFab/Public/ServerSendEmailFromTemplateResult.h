#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ServerSendEmailFromTemplateResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerSendEmailFromTemplateResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FServerSendEmailFromTemplateResult();
};


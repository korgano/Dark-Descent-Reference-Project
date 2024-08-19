#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ClientReportAdActivityResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientReportAdActivityResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FClientReportAdActivityResult();
};


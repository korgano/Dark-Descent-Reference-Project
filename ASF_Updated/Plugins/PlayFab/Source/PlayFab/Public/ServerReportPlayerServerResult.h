#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ServerReportPlayerServerResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerReportPlayerServerResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SubmissionsRemaining;
    
    FServerReportPlayerServerResult();
};


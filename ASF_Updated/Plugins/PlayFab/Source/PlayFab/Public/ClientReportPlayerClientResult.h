#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ClientReportPlayerClientResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientReportPlayerClientResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SubmissionsRemaining;
    
    FClientReportPlayerClientResult();
};


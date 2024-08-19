#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "AdminGetDataReportResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminGetDataReportResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DownloadUrl;
    
    FAdminGetDataReportResult();
};


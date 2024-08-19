#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "AdminGetPlayedTitleListResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminGetPlayedTitleListResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TitleIds;
    
    FAdminGetPlayedTitleListResult();
};


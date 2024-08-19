#pragma once
#include "CoreMinimal.h"
#include "CampaignEndedInfosStruct.generated.h"

USTRUCT(BlueprintType)
struct ASF_API FCampaignEndedInfosStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 total_remaining_marines;
    
    FCampaignEndedInfosStruct();
};


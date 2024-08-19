#pragma once
#include "CoreMinimal.h"
#include "CampaignStartedInfosStruct.generated.h"

USTRUCT(BlueprintType)
struct ASF_API FCampaignStartedInfosStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_iron_man;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 campaign_index;
    
    FCampaignStartedInfosStruct();
};


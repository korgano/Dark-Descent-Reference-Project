#pragma once
#include "CoreMinimal.h"
#include "CampaignParameters.h"
#include "MetaDataSaveStruct.h"
#include "CampaignSaveSlot.generated.h"

USTRUCT(BlueprintType)
struct FCampaignSaveSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMetaDataSaveStruct> Saves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCampaignParameters CampaignParameters;
    
    ASF_API FCampaignSaveSlot();
};


#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CampaignState.h"
#include "CampaignState_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UCampaignState_DataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCampaignState> CampaignStates;
    
    UCampaignState_DataAsset();

};


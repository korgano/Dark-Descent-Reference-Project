#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CampaignProgressDataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UCampaignProgressDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PrimaryObjectivesWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SecondaryObjectivesWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DatapadsWeight;
    
    UCampaignProgressDataAsset();

};


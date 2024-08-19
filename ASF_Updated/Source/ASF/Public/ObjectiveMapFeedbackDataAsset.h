#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EnumObjectiveTier.h"
#include "ObjectiveTierMapFeedbackData.h"
#include "ObjectiveMapFeedbackDataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UObjectiveMapFeedbackDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FObjectiveTierMapFeedbackData PrimaryMapFeedBackDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FObjectiveTierMapFeedbackData SecondaryMapFeedBackDatas;
    
public:
    UObjectiveMapFeedbackDataAsset();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FObjectiveTierMapFeedbackData GetMapFeedbackDataForTier(EnumObjectiveTier Tier) const;
    
};


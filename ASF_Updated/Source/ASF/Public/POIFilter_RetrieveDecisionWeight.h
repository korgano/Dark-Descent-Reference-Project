#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "POIFilter.h"
#include "POIFilter_RetrieveDecisionWeight.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ASF_API UPOIFilter_RetrieveDecisionWeight : public UPOIFilter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag POITag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FromCurrentResult;
    
public:
    UPOIFilter_RetrieveDecisionWeight();

};


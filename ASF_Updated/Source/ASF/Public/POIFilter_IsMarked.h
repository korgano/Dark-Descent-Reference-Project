#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EnumPOIComputationPolicy.h"
#include "POIFilter.h"
#include "POIFilter_IsMarked.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ASF_API UPOIFilter_IsMarked : public UPOIFilter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> MarkedTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumPOIComputationPolicy POIComputationPolicy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInverseCondition;
    
public:
    UPOIFilter_IsMarked();

};


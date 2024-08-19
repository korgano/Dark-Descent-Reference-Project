#pragma once
#include "CoreMinimal.h"
#include "EnumComparisonOperator.h"
#include "EnumPOIComputationPolicy.h"
#include "POIFilter.h"
#include "POIFilter_LifeComparison.generated.h"

class UPOIDataBinder;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ASF_API UPOIFilter_LifeComparison : public UPOIFilter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumPOIComputationPolicy POIComputationPolicy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumComparisonOperator Comparison;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPOIDataBinder* ComparedValue;
    
public:
    UPOIFilter_LifeComparison();

};


#pragma once
#include "CoreMinimal.h"
#include "EnumComparisonOperator.h"
#include "EnumPOIComputationPolicy.h"
#include "POICondition.h"
#include "POICondition_LifeComparison.generated.h"

class UPOIDataBinder;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ASF_API UPOICondition_LifeComparison : public UPOICondition {
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
    UPOICondition_LifeComparison();

};


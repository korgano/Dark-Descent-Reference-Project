#pragma once
#include "CoreMinimal.h"
#include "EnumComparisonOperator.h"
#include "POIFilter.h"
#include "POIFilter_ComparisonOperator.generated.h"

class UPOIDataBinder;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ASF_API UPOIFilter_ComparisonOperator : public UPOIFilter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPOIDataBinder* FirstValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumComparisonOperator Comparison;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPOIDataBinder* SecondValue;
    
public:
    UPOIFilter_ComparisonOperator();

};


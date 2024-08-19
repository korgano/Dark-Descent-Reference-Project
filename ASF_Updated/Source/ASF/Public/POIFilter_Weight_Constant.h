#pragma once
#include "CoreMinimal.h"
#include "EnumPOIFilterWeightCurveType.h"
#include "POIFilter.h"
#include "POIFilter_Weight_Constant.generated.h"

class UPOIDataBinder;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ASF_API UPOIFilter_Weight_Constant : public UPOIFilter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumPOIFilterWeightCurveType WeightType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPOIDataBinder* Weight;
    
public:
    UPOIFilter_Weight_Constant();

};


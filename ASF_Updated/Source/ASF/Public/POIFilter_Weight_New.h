#pragma once
#include "CoreMinimal.h"
#include "EnumPOIFilterWeightCurveType.h"
#include "POIFilter.h"
#include "POIFilter_Weight_New.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ASF_API UPOIFilter_Weight_New : public UPOIFilter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumPOIFilterWeightCurveType WeightType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPOIFilter*> Filters;
    
public:
    UPOIFilter_Weight_New();

};


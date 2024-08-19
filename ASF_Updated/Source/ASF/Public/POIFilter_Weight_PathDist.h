#pragma once
#include "CoreMinimal.h"
#include "EnumPOIFilterWeightCurveType.h"
#include "POIFilter.h"
#include "Templates/SubclassOf.h"
#include "POIFilter_Weight_PathDist.generated.h"

class UNavigationQueryFilter;
class UPOIDataBinder;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ASF_API UPOIFilter_Weight_PathDist : public UPOIFilter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavigationQueryFilter> NavFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumPOIFilterWeightCurveType WeightType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPOIDataBinder* MaxDistance;
    
public:
    UPOIFilter_Weight_PathDist();

};


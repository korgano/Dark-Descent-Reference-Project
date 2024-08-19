#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EnumPOIFilterWeightCurveType.h"
#include "POIFilter.h"
#include "POIFilter_Weight_CHA_PathDist.generated.h"

class UPOIDataBinder;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ASF_API UPOIFilter_Weight_CHA_PathDist : public UPOIFilter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag NavFilterTagNavFilterTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumPOIFilterWeightCurveType WeightType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPOIDataBinder* MaxDistance;
    
public:
    UPOIFilter_Weight_CHA_PathDist();

};


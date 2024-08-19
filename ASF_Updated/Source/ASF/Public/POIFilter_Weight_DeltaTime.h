#pragma once
#include "CoreMinimal.h"
#include "EnumDataModifierType.h"
#include "EnumPOIFilterWeightCurveType.h"
#include "POIFilter.h"
#include "POIFilter_Weight_DeltaTime.generated.h"

class UPOIDataBinder;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ASF_API UPOIFilter_Weight_DeltaTime : public UPOIFilter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumPOIFilterWeightCurveType WeightType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPOIDataBinder* MaxTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPOIDataBinder* MaxTimeNormalized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumDataModifierType ModifierType;
    
public:
    UPOIFilter_Weight_DeltaTime();

};


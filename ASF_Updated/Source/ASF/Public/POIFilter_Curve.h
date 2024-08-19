#pragma once
#include "CoreMinimal.h"
#include "POIFilter.h"
#include "POIFilter_Curve.generated.h"

class UPOIDataBinder;

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class ASF_API UPOIFilter_Curve : public UPOIFilter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPOIDataBinder* WeightCurve;
    
public:
    UPOIFilter_Curve();

};


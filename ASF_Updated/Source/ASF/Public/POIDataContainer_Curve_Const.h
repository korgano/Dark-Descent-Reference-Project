#pragma once
#include "CoreMinimal.h"
#include "POIDataContainer.h"
#include "StructPOIFilterWeightCurve.h"
#include "POIDataContainer_Curve_Const.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ASF_API UPOIDataContainer_Curve_Const : public UPOIDataContainer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStructPOIFilterWeightCurve CurveConstValue;
    
public:
    UPOIDataContainer_Curve_Const();

};


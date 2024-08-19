#pragma once
#include "CoreMinimal.h"
#include "POIModifier.h"
#include "StructPOIFilterWeightCurve.h"
#include "POIModifier_Curve.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class ASF_API UPOIModifier_Curve : public UPOIModifier {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStructPOIFilterWeightCurve WeightCurve;
    
public:
    UPOIModifier_Curve();

};


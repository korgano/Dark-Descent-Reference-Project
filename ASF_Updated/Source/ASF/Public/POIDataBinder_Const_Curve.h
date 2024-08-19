#pragma once
#include "CoreMinimal.h"
#include "POIDataBinder.h"
#include "StructPOIFilterWeightCurve.h"
#include "POIDataBinder_Const_Curve.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ASF_API UPOIDataBinder_Const_Curve : public UPOIDataBinder {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStructPOIFilterWeightCurve DefaultValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPOIDataBinder* DataBinder;
    
public:
    UPOIDataBinder_Const_Curve();

};


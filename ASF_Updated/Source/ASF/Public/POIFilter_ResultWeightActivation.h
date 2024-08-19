#pragma once
#include "CoreMinimal.h"
#include "POIFilter.h"
#include "POIFilter_ResultWeightActivation.generated.h"

class UPOIDataBinder;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ASF_API UPOIFilter_ResultWeightActivation : public UPOIFilter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPOIDataBinder* MinWeight;
    
public:
    UPOIFilter_ResultWeightActivation();

};


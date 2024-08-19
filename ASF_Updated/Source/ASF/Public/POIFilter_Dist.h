#pragma once
#include "CoreMinimal.h"
#include "POIFilter.h"
#include "POIFilter_Dist.generated.h"

class UPOIDataBinder;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ASF_API UPOIFilter_Dist : public UPOIFilter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPOIDataBinder* MaxDistance;
    
public:
    UPOIFilter_Dist();

};


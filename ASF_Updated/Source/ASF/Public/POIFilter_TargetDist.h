#pragma once
#include "CoreMinimal.h"
#include "POIFilter.h"
#include "POIFilter_TargetDist.generated.h"

class UPOIDataBinder;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ASF_API UPOIFilter_TargetDist : public UPOIFilter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPOIDataBinder* MinDistance;
    
public:
    UPOIFilter_TargetDist();

};


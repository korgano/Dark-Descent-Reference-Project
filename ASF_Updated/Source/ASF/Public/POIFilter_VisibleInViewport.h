#pragma once
#include "CoreMinimal.h"
#include "EnumPOIComputationPolicy.h"
#include "POIFilter.h"
#include "POIFilter_VisibleInViewport.generated.h"

class UAIPointOfInterestVolatile;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ASF_API UPOIFilter_VisibleInViewport : public UPOIFilter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumPOIComputationPolicy POIComputationPolicy;
    
public:
    UPOIFilter_VisibleInViewport();

protected:
    UFUNCTION(BlueprintCallable)
    bool IsVisibleAt(UAIPointOfInterestVolatile* LocationOwner);
    
};


#pragma once
#include "CoreMinimal.h"
#include "EnumPOIComputationPolicy.h"
#include "POIFilter.h"
#include "POIFilter_InVisibleGraphElement.generated.h"

class UAIPointOfInterestVolatile;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ASF_API UPOIFilter_InVisibleGraphElement : public UPOIFilter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumPOIComputationPolicy POIComputationPolicy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InverseCondition;
    
public:
    UPOIFilter_InVisibleGraphElement();

protected:
    UFUNCTION(BlueprintCallable)
    bool IsVisibleAt(UAIPointOfInterestVolatile* LocationOwner);
    
};


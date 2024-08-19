#pragma once
#include "CoreMinimal.h"
#include "POIFilter.h"
#include "POIFilter_Weight_PriorityTarget.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ASF_API UPOIFilter_Weight_PriorityTarget : public UPOIFilter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PriorityTargetWeight;
    
public:
    UPOIFilter_Weight_PriorityTarget();

};


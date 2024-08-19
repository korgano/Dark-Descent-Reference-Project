#pragma once
#include "CoreMinimal.h"
#include "POIFilter.h"
#include "POIFilter_PriorityTarget.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ASF_API UPOIFilter_PriorityTarget : public UPOIFilter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IgnorNullTarget;
    
public:
    UPOIFilter_PriorityTarget();

};


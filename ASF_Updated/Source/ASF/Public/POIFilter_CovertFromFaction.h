#pragma once
#include "CoreMinimal.h"
#include "POIFilter.h"
#include "POIFilter_CovertFromFaction.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ASF_API UPOIFilter_CovertFromFaction : public UPOIFilter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InverseCondition;
    
public:
    UPOIFilter_CovertFromFaction();

};


#pragma once
#include "CoreMinimal.h"
#include "POIFilter.h"
#include "POIFilter_ClassCast.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ASF_API UPOIFilter_ClassCast : public UPOIFilter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* ClassCast;
    
public:
    UPOIFilter_ClassCast();

};


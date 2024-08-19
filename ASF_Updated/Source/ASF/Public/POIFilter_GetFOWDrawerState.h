#pragma once
#include "CoreMinimal.h"
#include "EnumFOWVisionType.h"
#include "POIFilter.h"
#include "POIFilter_GetFOWDrawerState.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ASF_API UPOIFilter_GetFOWDrawerState : public UPOIFilter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EnumFOWVisionType> AuthorizedFOWVisionTypes;
    
public:
    UPOIFilter_GetFOWDrawerState();

};


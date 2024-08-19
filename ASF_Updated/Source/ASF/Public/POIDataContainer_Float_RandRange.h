#pragma once
#include "CoreMinimal.h"
#include "POIDataContainer.h"
#include "POIDataContainer_Float_RandRange.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ASF_API UPOIDataContainer_Float_RandRange : public UPOIDataContainer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Max;
    
public:
    UPOIDataContainer_Float_RandRange();

};


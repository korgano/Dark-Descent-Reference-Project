#pragma once
#include "CoreMinimal.h"
#include "POIDataBinder.h"
#include "POIDataBinder_DataContainer.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class ASF_API UPOIDataBinder_DataContainer : public UPOIDataBinder {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DataName;
    
public:
    UPOIDataBinder_DataContainer();

};


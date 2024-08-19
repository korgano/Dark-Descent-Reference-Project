#pragma once
#include "CoreMinimal.h"
#include "POIDataCollector.h"
#include "POIDataBinder.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class ASF_API UPOIDataBinder : public UPOIDataCollector {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CollectionPriority;
    
public:
    UPOIDataBinder();

};


#pragma once
#include "CoreMinimal.h"
#include "EnumDataType.h"
#include "POIDataCollector.h"
#include "POIDataContainer.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class ASF_API UPOIDataContainer : public UPOIDataCollector {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumDataType DataType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CollectionPriority;
    
public:
    UPOIDataContainer();

};


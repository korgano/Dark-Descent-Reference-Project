#pragma once
#include "CoreMinimal.h"
#include "POIDataBinder_DataContainer.h"
#include "POIDB_Curve_DC.generated.h"

class UPOIDataContainer;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ASF_API UPOIDB_Curve_DC : public UPOIDataBinder_DataContainer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPOIDataContainer* DataContainer;
    
public:
    UPOIDB_Curve_DC();

};


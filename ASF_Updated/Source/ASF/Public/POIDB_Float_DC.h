#pragma once
#include "CoreMinimal.h"
#include "POIDataBinder_DataContainer.h"
#include "POIDB_Float_DC.generated.h"

class UPOIDataContainer;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ASF_API UPOIDB_Float_DC : public UPOIDataBinder_DataContainer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPOIDataContainer* DataContainer;
    
public:
    UPOIDB_Float_DC();

};


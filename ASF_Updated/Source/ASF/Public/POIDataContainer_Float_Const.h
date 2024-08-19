#pragma once
#include "CoreMinimal.h"
#include "POIDataContainer.h"
#include "POIDataContainer_Float_Const.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ASF_API UPOIDataContainer_Float_Const : public UPOIDataContainer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FloatConstValue;
    
public:
    UPOIDataContainer_Float_Const();

};


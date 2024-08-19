#pragma once
#include "CoreMinimal.h"
#include "POIFilter.h"
#include "POIFilter_Constant_Float.generated.h"

class UPOIDataBinder;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ASF_API UPOIFilter_Constant_Float : public UPOIFilter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPOIDataBinder* ConstantFloat;
    
public:
    UPOIFilter_Constant_Float();

};


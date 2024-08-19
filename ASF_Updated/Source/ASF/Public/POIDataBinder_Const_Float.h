#pragma once
#include "CoreMinimal.h"
#include "POIDataBinder.h"
#include "POIDataBinder_Const_Float.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ASF_API UPOIDataBinder_Const_Float : public UPOIDataBinder {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPOIDataBinder* DataBinder;
    
public:
    UPOIDataBinder_Const_Float();

};


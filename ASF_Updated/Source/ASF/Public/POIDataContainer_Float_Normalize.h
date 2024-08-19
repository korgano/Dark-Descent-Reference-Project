#pragma once
#include "CoreMinimal.h"
#include "POIDataContainer.h"
#include "POIDataContainer_Float_Normalize.generated.h"

class UPOIDataBinder;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ASF_API UPOIDataContainer_Float_Normalize : public UPOIDataContainer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPOIDataBinder* ValueToNormalize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPOIDataBinder*> ValueNorme;
    
public:
    UPOIDataContainer_Float_Normalize();

};


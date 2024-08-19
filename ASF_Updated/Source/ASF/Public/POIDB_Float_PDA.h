#pragma once
#include "CoreMinimal.h"
#include "POIDataBinder.h"
#include "POIDB_Float_PDA.generated.h"

class UPrimaryDataAsset;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ASF_API UPOIDB_Float_PDA : public UPOIDataBinder {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UPrimaryDataAsset> PDAHoldingValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NameOfPropertyHoldingValue;
    
public:
    UPOIDB_Float_PDA();

};


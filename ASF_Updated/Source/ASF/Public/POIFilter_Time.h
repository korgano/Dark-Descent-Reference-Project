#pragma once
#include "CoreMinimal.h"
#include "POIFilter.h"
#include "POIFilter_Time.generated.h"

class UPOIDataBinder;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ASF_API UPOIFilter_Time : public UPOIFilter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPOIDataBinder* activationTime;
    
public:
    UPOIFilter_Time();

};


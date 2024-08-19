#pragma once
#include "CoreMinimal.h"
#include "POIFilter.h"
#include "POIFilter_PlayerMarine.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ASF_API UPOIFilter_PlayerMarine : public UPOIFilter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AddEnabledMarine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AddDisabledMarine;
    
public:
    UPOIFilter_PlayerMarine();

};

